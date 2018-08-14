//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMol_registrars.h"

#include "groupatomids.h"
#include "moleculedata.h"
#include "bondhunter.h"
#include "beadidx.h"
#include "beadnum.h"
#include "mgname.h"
#include "residx.h"
#include "element.h"
#include "volumemap.h"
#include "beading.h"
#include "perturbation.h"
#include "molatomid.h"
#include "chainname.h"
#include "atomidx.h"
#include "moleculeinfodata.h"
#include "molnum.h"
#include "molresid.h"
#include "connectivity.h"
#include "withatoms.h"
#include "atomcoords.h"
#include "molidentifier.h"
#include "cgatomidx.h"
#include "moleculegroups.h"
#include "weightfunction.h"
#include "molname.h"
#include "improperid.h"
#include "atombeads.h"
#include "segidx.h"
#include "chainresid.h"
#include "segname.h"
#include "chainidx.h"
#include "atommatchers.h"
#include "evaluator.h"
#include "residentifier.h"
#include "reseditor.h"
#include "chainproperty.hpp"
#include "groupgroupids.h"
#include "atompolarisabilities.h"
#include "mgnum.h"
#include "chaineditor.h"
#include "segidentifier.h"
#include "atommatcher.h"
#include "bondid.h"
#include "molecules.h"
#include "cgeditor.h"
#include "cgidentifier.h"
#include "molid.h"
#include "atomnum.h"
#include "chain.h"
#include "within.h"
#include "viewsofmol.h"
#include "segeditor.h"
#include "dihedralid.h"
#include "atomcutting.h"
#include "atom.h"
#include "atomproperty.hpp"
#include "chargeperturbation.h"
#include "mgidsandmaps.h"
#include "molwithresid.h"
#include "beadeditor.h"
#include "molidx.h"
#include "resname.h"
#include "cutgroup.h"
#include "atomidentifier.h"
#include "geometryperturbation.h"
#include "bead.h"
#include "atomradii.h"
#include "atomvelocities.h"
#include "moleculeinfo.h"
#include "mover_metaid.h"
#include "moleditor.h"
#include "molecule.h"
#include "atomforces.h"
#include "mgidx.h"
#include "atomselection.h"
#include "partialmolecule.h"
#include "cgidx.h"
#include "residue.h"
#include "beadproperty.hpp"
#include "resnum.h"
#include "beads.h"
#include "atomelements.h"
#include "parser.h"
#include "specifymol.h"
#include "atomname.h"
#include "moleculegroup.h"
#include "cgproperty.hpp"
#include "mgidentifier.h"
#include "atomcharges.h"
#include "amberparameters.h"
#include "withres.h"
#include "atomenergies.h"
#include "resproperty.hpp"
#include "segment.h"
#include "select.h"
#include "cgname.h"
#include "residuecutting.h"
#include "angleid.h"
#include "chainidentifier.h"
#include "atommasses.h"
#include "segproperty.hpp"
#include "atomeditor.h"

#include "Helpers/objectregistry.hpp"

void register_SireMol_objects()
{

    ObjectRegistry::registerConverterFor< SireMol::ResAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::SegAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeData >();
    ObjectRegistry::registerConverterFor< SireMol::NullBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::CovalentBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::ChemicalBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIdx >();
    ObjectRegistry::registerConverterFor< SireMol::BeadNum >();
    ObjectRegistry::registerConverterFor< SireMol::MGName >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdx >();
    ObjectRegistry::registerConverterFor< SireMol::Element >();
    ObjectRegistry::registerConverterFor< SireMol::VolumeMap >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeBeading >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueBeading >();
    ObjectRegistry::registerConverterFor< SireMol::UserBeading >();
    ObjectRegistry::registerConverterFor< SireMol::NullBeading >();
    ObjectRegistry::registerConverterFor< SireMol::NullPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::Perturbations >();
    ObjectRegistry::registerConverterFor< SireMol::MolAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainName >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdx >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfoData >();
    ObjectRegistry::registerConverterFor< SireMol::MolNum >();
    ObjectRegistry::registerConverterFor< SireMol::MolResID >();
    ObjectRegistry::registerConverterFor< SireMol::MolResNum >();
    ObjectRegistry::registerConverterFor< SireMol::Connectivity >();
    ObjectRegistry::registerConverterFor< SireMol::ConnectivityEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::CGsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::SegsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCoords >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomIdx >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroups >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::MolName >();
    ObjectRegistry::registerConverterFor< SireMol::ImproperID >();
    ObjectRegistry::registerConverterFor< SireMol::AtomBeads >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ChainResID >();
    ObjectRegistry::registerConverterFor< SireMol::SegName >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdx >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdxMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIDMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMultiMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomCoordMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::Evaluator >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ResEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegResID >();
    ObjectRegistry::registerConverterFor< SireMol::SegChainID >();
    ObjectRegistry::registerConverterFor< SireMol::SegCGID >();
    ObjectRegistry::registerConverterFor< SireMol::CGResID >();
    ObjectRegistry::registerConverterFor< SireMol::CGChainID >();
    ObjectRegistry::registerConverterFor< SireMol::AtomPolarisabilities >();
    ObjectRegistry::registerConverterFor< SireMol::MGNum >();
    ObjectRegistry::registerConverterFor< SireMol::ChainEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStructureEditor >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AtomResultMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMatchInverter >();
    ObjectRegistry::registerConverterFor< SireMol::BondID >();
    ObjectRegistry::registerConverterFor< SireMol::Molecules >();
    ObjectRegistry::registerConverterFor< SireMol::CGEditor >();
    ObjectRegistry::registerConverterFor< SireMol::CGStructureEditor >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdentifier >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNum >();
    ObjectRegistry::registerConverterFor< SireMol::Chain >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::Within >();
    ObjectRegistry::registerConverterFor< SireMol::ViewsOfMol >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::ViewsOfMol> >();
    ObjectRegistry::registerConverterFor< SireMol::SegEditor >();
    ObjectRegistry::registerConverterFor< SireMol::SegStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralID >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCutting >();
    ObjectRegistry::registerConverterFor< SireMol::Atom >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChargePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::MGIDsAndMaps >();
    ObjectRegistry::registerConverterFor< SireMol::MolWithResID >();
    ObjectRegistry::registerConverterFor< SireMol::BeadEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ResName >();
    ObjectRegistry::registerConverterFor< SireMol::CutGroup >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdentifier >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireMol::NullGeometryPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::GeometryPerturbations >();
    ObjectRegistry::registerConverterFor< SireMol::BondPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::AnglePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::Bead >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Bead> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomRadii >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVelocities >();
    ObjectRegistry::registerConverterFor< SireMol::Velocity3D >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfo >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireMol::MolEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MolStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::Molecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Molecule> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomForces >();
    ObjectRegistry::registerConverterFor< SireMol::Force3D >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::AtomSelection >();
    ObjectRegistry::registerConverterFor< SireMol::PartialMolecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::PartialMolecule> >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::Residue >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::BeadStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResNum >();
    ObjectRegistry::registerConverterFor< SireMol::Beads >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Beads> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomElements >();
    ObjectRegistry::registerConverterFor< SireMol::parse_error >();
    ObjectRegistry::registerConverterFor< SireMol::SpecifyMol >();
    ObjectRegistry::registerConverterFor< SireMol::AtomName >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroup >();
    ObjectRegistry::registerConverterFor< SireMol::CGStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGVariantProperty >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCharges >();
    ObjectRegistry::registerConverterFor< SireMol::AmberParameters >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithRes >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEnergies >();
    ObjectRegistry::registerConverterFor< SireMol::ResStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::Segment >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireMol::Select >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResult >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResultMover >();
    ObjectRegistry::registerConverterFor< SireMol::CGName >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueCutting >();
    ObjectRegistry::registerConverterFor< SireMol::AngleID >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMasses >();
    ObjectRegistry::registerConverterFor< SireMol::SegStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStructureEditor >();

}

