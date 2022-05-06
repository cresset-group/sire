//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMol_registrars.h"

#include "Helpers/version_error_impl.h"

#include "moleculeinfodata.h"
#include "amberparameters.h"
#include "chain.h"
#include "molecules.h"
#include "atomcharges.h"
#include "atomenergies.h"
#include "bondhunter.h"
#include "mgidsandmaps.h"
#include "segment.h"
#include "molidentifier.h"
#include "reseditor.h"
#include "atommasses.h"
#include "atomidx.h"
#include "viewsofmol.h"
#include "atomnum.h"
#include "atomeditor.h"
#include "resname.h"
#include "beads.h"
#include "chargeperturbation.h"
#include "moleculedata.h"
#include "segidentifier.h"
#include "chainresid.h"
#include "chainname.h"
#include "atomelements.h"
#include "weightfunction.h"
#include "select.h"
#include "residuecutting.h"
#include "resnum.h"
#include "beadidx.h"
#include "specifymol.h"
#include "moleculegroup.h"
#include "atomvelocities.h"
#include "volumemap.h"
#include "moleculeinfo.h"
#include "withatoms.h"
#include "atomradicals.h"
#include "atomradii.h"
#include "molwithresid.h"
#include "cutgroup.h"
#include "bondid.h"
#include "molidx.h"
#include "molid.h"
#include "moleditor.h"
#include "atompolarisabilities.h"
#include "atomcutting.h"
#include "partialmolecule.h"
#include "molname.h"
#include "dihedralid.h"
#include "beadnum.h"
#include "atommatcher.h"
#include "mgidx.h"
#include "atom.h"
#include "bondtype.h"
#include "element.h"
#include "cgname.h"
#include "atomcoords.h"
#include "molnum.h"
#include "cgidx.h"
#include "connectivity.h"
#include "chainidentifier.h"
#include "chainidx.h"
#include "improperid.h"
#include "segeditor.h"
#include "cgatomidx.h"
#include "stereoscopy.h"
#include "moleculegroups.h"
#include "chaineditor.h"
#include "beading.h"
#include "bead.h"
#include "atomidentifier.h"
#include "cgidentifier.h"
#include "evaluator.h"
#include "groupgroupids.h"
#include "atombeads.h"
#include "perturbation.h"
#include "mover_metaid.h"
#include "mgidentifier.h"
#include "angleid.h"
#include "groupatomids.h"
#include "selectormol.h"
#include "molatomid.h"
#include "segidx.h"
#include "geometryperturbation.h"
#include "cgeditor.h"
#include "mgname.h"
#include "radical.h"
#include "residentifier.h"
#include "atompropertylist.h"
#include "evaluatorm.h"
#include "residue.h"
#include "molresid.h"
#include "atomforces.h"
#include "within.h"
#include "atommatchers.h"
#include "beadeditor.h"
#include "residx.h"
#include "withres.h"
#include "mgnum.h"
#include "atomname.h"
#include "atomselection.h"
#include "molecule.h"
#include "segname.h"
#include "chainproperty.hpp"
#include "atomproperty.hpp"
#include "segproperty.hpp"
#include "resproperty.hpp"
#include "cgproperty.hpp"
#include "beadproperty.hpp"

#include "Helpers/objectregistry.hpp"

void register_SireMol_objects()
{

    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfoData >();
    ObjectRegistry::registerConverterFor< SireMol::AmberParameters >();
    ObjectRegistry::registerConverterFor< SireMol::Chain >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::Molecules >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCharges >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEnergies >();
    ObjectRegistry::registerConverterFor< SireMol::NullBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::CovalentBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::ChemicalBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::MGIDsAndMaps >();
    ObjectRegistry::registerConverterFor< SireMol::Segment >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ResEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMasses >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ViewsOfMol >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::ViewsOfMol> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNum >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResName >();
    ObjectRegistry::registerConverterFor< SireMol::Beads >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Beads> >();
    ObjectRegistry::registerConverterFor< SireMol::ChargePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeData >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ChainResID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainName >();
    ObjectRegistry::registerConverterFor< SireMol::AtomElements >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::parse_error >();
    ObjectRegistry::registerConverterFor< SireMol::Select >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResult >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResultMover >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueCutting >();
    ObjectRegistry::registerConverterFor< SireMol::ResNum >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIdx >();
    ObjectRegistry::registerConverterFor< SireMol::SpecifyMol >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroup >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVelocities >();
    ObjectRegistry::registerConverterFor< SireMol::Velocity3D >();
    ObjectRegistry::registerConverterFor< SireMol::VolumeMap >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfo >();
    ObjectRegistry::registerConverterFor< SireMol::ResWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::CGsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::SegsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::AtomRadicals >();
    ObjectRegistry::registerConverterFor< SireMol::AtomRadii >();
    ObjectRegistry::registerConverterFor< SireMol::MolWithResID >();
    ObjectRegistry::registerConverterFor< SireMol::CutGroup >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::BondID >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdx >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireMol::MolEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MolStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomPolarisabilities >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCutting >();
    ObjectRegistry::registerConverterFor< SireMol::PartialMolecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::PartialMolecule> >();
    ObjectRegistry::registerConverterFor< SireMol::MolName >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralID >();
    ObjectRegistry::registerConverterFor< SireMol::BeadNum >();
    ObjectRegistry::registerConverterFor< SireMol::AtomResultMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMatchInverter >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::Atom >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::BondType >();
    ObjectRegistry::registerConverterFor< SireMol::Element >();
    ObjectRegistry::registerConverterFor< SireMol::CGName >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCoords >();
    ObjectRegistry::registerConverterFor< SireMol::MolNum >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::Connectivity >();
    ObjectRegistry::registerConverterFor< SireMol::ConnectivityEditor >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ImproperID >();
    ObjectRegistry::registerConverterFor< SireMol::SegEditor >();
    ObjectRegistry::registerConverterFor< SireMol::SegStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomIdx >();
    ObjectRegistry::registerConverterFor< SireMol::Stereoscopy >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroups >();
    ObjectRegistry::registerConverterFor< SireMol::ChainEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeBeading >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueBeading >();
    ObjectRegistry::registerConverterFor< SireMol::UserBeading >();
    ObjectRegistry::registerConverterFor< SireMol::NullBeading >();
    ObjectRegistry::registerConverterFor< SireMol::Bead >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Bead> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdentifier >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::Evaluator >();
    ObjectRegistry::registerConverterFor< SireMol::SegResID >();
    ObjectRegistry::registerConverterFor< SireMol::SegChainID >();
    ObjectRegistry::registerConverterFor< SireMol::SegCGID >();
    ObjectRegistry::registerConverterFor< SireMol::CGResID >();
    ObjectRegistry::registerConverterFor< SireMol::CGChainID >();
    ObjectRegistry::registerConverterFor< SireMol::AtomBeads >();
    ObjectRegistry::registerConverterFor< SireMol::NullPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::Perturbations >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AngleID >();
    ObjectRegistry::registerConverterFor< SireMol::ResAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::SegAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorMol >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorM<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorM<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorM<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorM<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::SelectorM<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::MolAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdx >();
    ObjectRegistry::registerConverterFor< SireMol::NullGeometryPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::GeometryPerturbations >();
    ObjectRegistry::registerConverterFor< SireMol::BondPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::AnglePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::CGEditor >();
    ObjectRegistry::registerConverterFor< SireMol::CGStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MGName >();
    ObjectRegistry::registerConverterFor< SireMol::Radical >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AtomPropertyList >();
    ObjectRegistry::registerConverterFor< SireMol::AtomDoubleArrayProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIntegerArrayProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStringArrayProperty >();
    ObjectRegistry::registerConverterFor< SireMol::EvaluatorM >();
    ObjectRegistry::registerConverterFor< SireMol::Residue >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::MolResID >();
    ObjectRegistry::registerConverterFor< SireMol::MolResNum >();
    ObjectRegistry::registerConverterFor< SireMol::AtomForces >();
    ObjectRegistry::registerConverterFor< SireMol::Force3D >();
    ObjectRegistry::registerConverterFor< SireMol::Within >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdxMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIDMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMultiMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResNumAtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomCoordMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::BeadEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithRes >();
    ObjectRegistry::registerConverterFor< SireMol::MGNum >();
    ObjectRegistry::registerConverterFor< SireMol::AtomName >();
    ObjectRegistry::registerConverterFor< SireMol::AtomSelection >();
    ObjectRegistry::registerConverterFor< SireMol::Molecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Molecule> >();
    ObjectRegistry::registerConverterFor< SireMol::SegName >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadVariantProperty >();

}

