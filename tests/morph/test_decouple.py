import sire as sr

import pytest


@pytest.mark.skipif(
    "openmm" not in sr.convert.supported_formats(),
    reason="openmm support is not available",
)
def test_decouple(ala_mols, openmm_platform):
    mol = ala_mols[0]

    dmol = sr.morph.decouple(mol)

    # check the energies are the same forwards and backwards
    d_fwds = dmol.dynamics(platform=openmm_platform, constraint="h-bonds")
    d_bwds = dmol.dynamics(
        platform=openmm_platform, constraint="h-bonds", swap_end_states=True
    )

    d_fwds.set_lambda(0.0)
    d_bwds.set_lambda(1.0)

    assert d_fwds.current_potential_energy().value() == pytest.approx(
        d_bwds.current_potential_energy().value(), abs=1e-4
    )

    d_fwds.set_lambda(1.0)
    d_bwds.set_lambda(0.0)

    assert d_fwds.current_potential_energy().value() == pytest.approx(
        d_bwds.current_potential_energy().value(), abs=1e-4
    )

    # use .changed_bonds() etc to validate that the forwards
    # and backwards perturbations are the same
    omm_fwds = dmol.perturbation().to_openmm(constraint="h-bonds")

    omm_bwds = dmol.perturbation().to_openmm(constraint="h-bonds", swap_end_states=True)

    fwds = omm_fwds.changed_atoms()
    bwds = omm_bwds.changed_atoms()

    assert fwds["charge0"].equals(bwds["charge1"])
    assert fwds["charge1"].equals(bwds["charge0"])
    assert fwds["sigma0"].equals(bwds["sigma1"])
    assert fwds["sigma1"].equals(bwds["sigma0"])
    assert fwds["epsilon0"].equals(bwds["epsilon1"])
    assert fwds["epsilon1"].equals(bwds["epsilon0"])

    # also check that parameters are being set equal to zero correctly
    assert (fwds["charge1"] == 0.0).all()
    assert (fwds["sigma1"] != 0.0).all()
    assert (fwds["epsilon1"] == 0.0).all()
    assert (bwds["charge0"] == 0.0).all()
    assert (bwds["sigma0"] != 0.0).all()
    assert (bwds["epsilon0"] == 0.0).all()

    fwds = omm_fwds.changed_bonds()
    bwds = omm_bwds.changed_bonds()

    assert fwds.empty
    assert bwds.empty

    fwds = omm_fwds.changed_angles()
    bwds = omm_bwds.changed_angles()

    assert fwds.empty
    assert bwds.empty

    fwds = omm_fwds.changed_torsions()
    bwds = omm_bwds.changed_torsions()

    assert fwds.empty
    assert bwds.empty

    fwds = omm_fwds.changed_exceptions()
    bwds = omm_bwds.changed_exceptions()

    assert fwds.empty
    assert bwds.empty

    fwds = omm_fwds.changed_constraints()
    bwds = omm_bwds.changed_constraints()

    assert fwds.empty
    assert bwds.empty


@pytest.mark.skipif(
    "openmm" not in sr.convert.supported_formats(),
    reason="openmm support is not available",
)
def test_annihilate(ala_mols, openmm_platform):
    mol = ala_mols[0]

    amol = sr.morph.annihilate(mol)

    # check the energies are the same forwards and backwards
    d_fwds = amol.dynamics(platform=openmm_platform, constraint="h-bonds")
    d_bwds = amol.dynamics(
        platform=openmm_platform, constraint="h-bonds", swap_end_states=True
    )

    d_fwds.set_lambda(0.0)
    d_bwds.set_lambda(1.0)

    assert d_fwds.current_potential_energy().value() == pytest.approx(
        d_bwds.current_potential_energy().value(), abs=1e-4
    )

    d_fwds.set_lambda(1.0)
    d_bwds.set_lambda(0.0)

    assert d_fwds.current_potential_energy().value() == pytest.approx(
        d_bwds.current_potential_energy().value(), abs=1e-4
    )

    # use .changed_bonds() etc to validate that the forwards
    # and backwards perturbations are the same
    omm_fwds = amol.perturbation().to_openmm(constraint="h-bonds")

    omm_bwds = amol.perturbation().to_openmm(constraint="h-bonds", swap_end_states=True)

    fwds = omm_fwds.changed_atoms()
    bwds = omm_bwds.changed_atoms()

    assert fwds["charge0"].equals(bwds["charge1"])
    assert fwds["charge1"].equals(bwds["charge0"])
    assert fwds["sigma0"].equals(bwds["sigma1"])
    assert fwds["sigma1"].equals(bwds["sigma0"])
    assert fwds["epsilon0"].equals(bwds["epsilon1"])
    assert fwds["epsilon1"].equals(bwds["epsilon0"])

    # also check that parameters are being set equal to zero correctly
    assert (fwds["charge1"] == 0.0).all()
    assert (fwds["sigma1"] != 0.0).all()
    assert (fwds["epsilon1"] == 0.0).all()
    assert (bwds["charge0"] == 0.0).all()
    assert (bwds["sigma0"] != 0.0).all()
    assert (bwds["epsilon0"] == 0.0).all()

    fwds = omm_fwds.changed_bonds()
    bwds = omm_bwds.changed_bonds()

    assert fwds["length0"].equals(bwds["length1"])
    assert fwds["length1"].equals(bwds["length0"])
    assert fwds["k0"].equals(bwds["k1"])
    assert fwds["k1"].equals(bwds["k0"])

    # also check that parameters are being set equal to zero correctly
    assert (fwds["length1"] != 0.0).all()
    assert (fwds["k1"] == 0.0).all()
    assert (bwds["length0"] != 0.0).all()
    assert (bwds["k0"] == 0.0).all()

    fwds = omm_fwds.changed_angles()
    bwds = omm_bwds.changed_angles()

    assert fwds["size0"].equals(bwds["size1"])
    assert fwds["size1"].equals(bwds["size0"])
    assert fwds["k0"].equals(bwds["k1"])
    assert fwds["k1"].equals(bwds["k0"])

    # also check that parameters are being set equal to zero correctly
    assert (fwds["size1"] != 0.0).all()
    assert (fwds["k1"] == 0.0).all()
    assert (bwds["size0"] != 0.0).all()
    assert (bwds["k0"] == 0.0).all()

    fwds = omm_fwds.changed_torsions()
    bwds = omm_bwds.changed_torsions()

    assert fwds["periodicity0"].equals(bwds["periodicity1"])
    assert fwds["periodicity1"].equals(bwds["periodicity0"])
    assert fwds["phase0"].equals(bwds["phase1"])
    assert fwds["phase1"].equals(bwds["phase0"])
    assert fwds["k0"].equals(bwds["k1"])
    assert fwds["k1"].equals(bwds["k0"])

    # also check that parameters are being set equal to zero correctly
    assert (fwds["k1"] == 0.0).all()
    assert (bwds["k0"] == 0.0).all()

    fwds = omm_fwds.changed_exceptions()
    bwds = omm_bwds.changed_exceptions()

    joined = fwds.merge(bwds, on="atompair", suffixes=("_fwds", "_bwds"))

    assert joined["charge_scale0_fwds"].equals(joined["charge_scale1_bwds"])
    assert joined["charge_scale1_fwds"].equals(joined["charge_scale0_bwds"])
    assert joined["lj_scale0_fwds"].equals(joined["lj_scale1_bwds"])
    assert joined["lj_scale1_fwds"].equals(joined["lj_scale0_bwds"])

    # also check that parameters are being set equal to zero correctly
    assert (joined["charge_scale1_fwds"] == 0.0).all()
    assert (joined["lj_scale1_fwds"] == 0.0).all()
    assert (joined["charge_scale0_bwds"] == 0.0).all()
    assert (joined["lj_scale0_bwds"] == 0.0).all()

    fwds = omm_fwds.changed_constraints()
    bwds = omm_bwds.changed_constraints()

    # there should be no changed constraints
    assert fwds.empty
    assert bwds.empty
