__all__ = [
    "biosimspace_to_sire",
    "openmm_to_sire",
    "rdkit_to_sire",
    "sire_to_biosimspace",
    "sire_to_rdkit",
    "sire_to_openmm",
    "supported_formats",
    "to",
    "to_biosimspace",
    "to_rdkit",
    "to_openmm",
    "to_sire",
]

from .. import use_new_api as _use_new_api

# Imported to ensure that sire.maths.Vector is properly wrapped
from ..maths import Vector as _Vector

from ..mol import SelectorMol as _SelectorMol

_use_new_api()


def _to_selectormol(obj):
    if hasattr(obj, "molecules"):
        return obj.molecules()
    elif type(obj) is list:
        raise ValueError()
    else:
        return _SelectorMol(obj)


def supported_formats():
    """
    Return the current supported object formats for conversion
    """
    from ..legacy.Convert import supported_formats as _supported_formats

    return _supported_formats()


def to(obj, format: str = "sire", map=None):
    """
    Convert the passed object from its current object format to the
    specified object format (default "sire"). Typically this will be converting
    from, e.g. a BioSimSpace, OpenMM or rdkit molecule to a sire molecule
    (or from a list of molecules to a SelectorMol).

    Args:
        obj:
            The input object to convert
        format: str (default "sire")
            The format to convert to
        map:
            The property map to use for the conversion
    """
    format = format.lower()

    if format == "sire":
        return to_sire(obj, map=map)
    elif format == "rdkit":
        return to_rdkit(obj, map=map)
    elif format == "biosimspace":
        return to_biosimspace(obj, map=map)
    elif format == "openmm":
        return to_openmm(obj, map=map)
    else:
        raise ValueError(
            f"Cannot convert {obj} as the format '{format}' is " "not recognised."
        )


def to_sire(obj, map=None):
    """
    Convert the passed object from its current object format to a
    sire object format. Typically this will be converting
    from, e.g. an openmm or rdkit molecule to a sire molecule
    (or from a list of molecules to a SelectorMol).
    """

    if "sire" in str(type(obj)):
        # already a sire object?
        return obj

    if type(obj) is not list:
        obj = [obj]

    # create lists of objects of the same type (in the same order)
    typed_objs = []

    last_type = None

    def _to_type(o):
        t = str(type(o))

        if "sire" in t:
            return "sire"
        elif "BioSimSpace" in t or "biosimspace" in t:
            return "biosimspace"
        elif "rdkit" in t:
            return "rdkit"
        elif "openmm" in t:
            return "openmm"
        else:
            raise TypeError(
                f"Cannot convert '{o}' as it is of unrecognised type {type(0)}"
            )

    # sort all the objects into lists of types (preserving the order)
    for o in obj:
        t = _to_type(o)

        if t != last_type:
            last_type = t
            typed_objs.append((t, []))

        typed_objs[-1][1].append(o)

    converted = []

    for typ in typed_objs:
        if typ[0] == "sire":
            converted.append(typ[1].molecules())

        elif typ[0] == "biosimspace":
            converted.append(biosimspace_to_sire(typ[1], map=map).molecules())

        elif typ[0] == "rdkit":
            converted.append(rdkit_to_sire(typ[1], map=map).molecules())

        elif typ[0] == "openmm":
            converted.append(openmm_to_sire(typ[1], map=map).molecules())

        else:
            raise TypeError(f"Unrecognised type {typ[0]}")

    if len(converted) == 0:
        return None
    elif len(converted) == 1:
        mols = converted[0]
    else:
        mols = converted[0]
        for i in range(1, len(converted)):
            mols += converted[i]

    if len(mols) == 1:
        return mols[0]
    else:
        return mols


def to_biosimspace(obj, map=None):
    """
    Convert the passed object from its current object format to a
    BioSimSpace object format.
    """
    return sire_to_biosimspace(to_sire(obj, map=map), map=map)


def to_rdkit(obj, map=None):
    """
    Convert the passed object from its current object format to a
    rdkit object format.
    """
    return sire_to_rdkit(to_sire(obj, map=map), map=map)


def to_openmm(obj, map=None):
    """
    Convert the passed object from its current object format to an
    openmm object format.
    """
    return sire_to_openmm(to_sire(obj, map=map), map=map)


def biosimspace_to_sire(obj, map=None):
    """
    Convert the passed BioSimSpace object (either a Molecule or list
    of Molecules) to a sire equivalent
    """
    # will eventually support System too...
    if type(obj) is list:
        if len(obj) == 0:
            return None
        elif len(obj) == 1:
            return biosimspace_to_sire(obj[0], map=map)
        else:
            converted = biosimspace_to_sire(obj[0], map=map)

            if converted is not None:
                converted = converted.molecules()

            for o in obj[1:]:
                c = biosimspace_to_sire(o, map=map)

                if converted is None and c is not None:
                    converted = c.molecules()
                elif c is not None:
                    converted += c.molecules()

            if converted is None:
                return None
            elif len(converted) == 1:
                return converted[0]
            else:
                return converted
    else:
        if not hasattr(obj, "_sire_object"):
            raise TypeError(
                f"The object {obj} of type {type(obj)} does not look like a "
                "supported BioSimSpace object that can be converted to a "
                "sire object. Supported objects are Molecule."
            )

        obj = obj._sire_object.molecules()

        if obj.num_molecules() == 1:
            return obj[0]
        elif obj.num_molecules() == 0:
            return None
        else:
            return obj


_BSS = None


def sire_to_biosimspace(obj, map=None):
    """
    Convert the passed sire object (either a molecule or list
    of molecules) to a BioSimSpace equivalent
    """
    import sys

    if "BioSimSpace" not in sys.modules:
        raise ModuleNotFoundError(
            "BioSimSpace is not available. Please make sure you have "
            "imported BioSimSpace before `sire`, e.g. have run "
            "`import BioSimSpace as BSS` in your script before "
            "importing sire"
        )

    global _BSS

    # Try to inspect the stack to work out the module from which this
    # function was called.
    try:
        frame = sys._getframe()
        for frame_idx in range(0, 3):
            frame = frame.f_back
        module = frame.f_globals["__name__"]
    except:
        module = None

    # Was this function called from a BioSmSpace Sandpit?
    if module and module.startswith("BioSimSpace.Sandpit."):
        sandpit = ".".join(module.split(".")[0:3])
        _BSS = sys.modules[sandpit]
    else:
        _BSS = sys.modules["BioSimSpace"]

    obj = _to_selectormol(obj)

    converted = []

    for mol in obj:
        converted.append(_BSS._SireWrappers.Molecule(mol))

    if len(converted) == 0:
        return None
    elif len(converted) == 1:
        return converted[0]
    else:
        return converted


def openmm_to_sire(obj, map=None):
    """
    Convert the passed OpenMM object (either a molecule or
    list of molecules) to the sire equivalent
    """
    if type(obj) is not list:
        obj = [obj]

    try:
        from ..legacy.Convert import openmm_to_sire as _openmm_to_sire
    except Exception:
        raise ModuleNotFoundError(
            "openmm is not available. Please install via "
            "'mamba install -c conda-forge openmm'"
        )

    from ..base import create_map

    mols = _openmm_to_sire(obj, map=create_map(map))

    if mols is None:
        return None

    mols = mols.molecules()

    if len(mols) == 1:
        return mols[0]
    else:
        return mols


def sire_to_openmm(obj, map=None):
    """
    Convert the passed sire object (either a molecule or list
    of molecules) to an OpenMM equivalent
    """
    # will eventually support System too...
    obj = _to_selectormol(obj)

    try:
        from ..legacy.Convert import sire_to_openmm as _sire_to_openmm
    except Exception:
        raise ModuleNotFoundError(
            "openmm is not available. Please install via "
            "'mamba install -c conda-forge openmm'"
        )

    from ..base import create_map

    mols = _sire_to_openmm(obj, map=create_map(map))

    if mols is None:
        return None
    elif len(mols) == 1:
        return mols[0]
    else:
        return mols


def rdkit_to_sire(obj, map=None):
    """
    Convert the passed rdkit object (either a molecule or
    list of molecules) to the sire equivalent
    """
    if type(obj) is not list:
        obj = [obj]

    try:
        from ..legacy.Convert import rdkit_to_sire as _rdkit_to_sire
    except Exception:
        raise ModuleNotFoundError(
            "rdkit is not available. Please install via "
            "'mamba install -c conda-forge rdkit'"
        )

    from ..base import create_map

    mols = _rdkit_to_sire(obj, map=create_map(map))

    if mols is None:
        return None

    mols = mols.molecules()

    if len(mols) == 1:
        return mols[0]
    else:
        return mols


def sire_to_rdkit(obj, map=None):
    """
    Convert the passed sire object (either a molecule or list
    of molecules) to a rdkit equivalent
    """
    obj = _to_selectormol(obj)

    # Now convert to an rdkit object
    try:
        from ..legacy.Convert import sire_to_rdkit as _sire_to_rdkit
    except Exception:
        raise ModuleNotFoundError(
            "rdkit is not available. Please install via "
            "'mamba install -c conda-forge rdkit'"
        )

    from ..base import create_map

    mols = _sire_to_rdkit(obj, map=create_map(map))

    if mols is None:
        return None
    elif len(mols) == 1:
        return mols[0]
    else:
        return mols
