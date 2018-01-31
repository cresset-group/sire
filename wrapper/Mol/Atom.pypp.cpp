// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Atom.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomcharges.h"

#include "atomeditor.h"

#include "atomproperty.hpp"

#include "chain.h"

#include "cutgroup.h"

#include "evaluator.h"

#include "molecule.h"

#include "mover.hpp"

#include "mover_metaid.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include <QDebug>

#include "atom.h"

#include "SireStream/shareddatastream.h"

#include "atomradii.h"

#include "atombeads.h"

#include "atomproperty.hpp"

#include "atomljs.h"

#include "atompolarisabilities.h"

#include "SireMaths/align.h"

#include "atomcoords.h"

#include "SireVol/space.h"

#include "atomelements.h"

#include "atommasses.h"

#include "atomcharges.h"

#include "SireStream/datastream.h"

#include "atomenergies.h"

#include "SireMaths/vector.h"

#include "SireBase/quickcopy.hpp"

#include "atomforces.h"

#include "SireError/errors.h"

#include "atomvelocities.h"

const SireMM::LJParameter& get_Metadata_SireMM_AtomLJs_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMM::LJParameter >(metakey); }

const SireMM::LJParameter& get_Metadata_SireMM_AtomLJs_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMM::LJParameter >(key, metakey); }

const SireUnits::Dimension::Charge& get_Metadata_SireMol_AtomCharges_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireUnits::Dimension::Charge >(metakey); }

const SireUnits::Dimension::Charge& get_Metadata_SireMol_AtomCharges_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireUnits::Dimension::Charge >(key, metakey); }

const SireMaths::Vector3D<SireUnits::Dimension::Velocity>& get_Metadata_SireMol_AtomVelocities_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >(metakey); }

const SireMaths::Vector3D<SireUnits::Dimension::Velocity>& get_Metadata_SireMol_AtomVelocities_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >(key, metakey); }

const SireUnits::Dimension::Volume& get_Metadata_SireMol_AtomPolarisabilities_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireUnits::Dimension::Volume >(metakey); }

const SireUnits::Dimension::Volume& get_Metadata_SireMol_AtomPolarisabilities_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireUnits::Dimension::Volume >(key, metakey); }

const SireUnits::Dimension::MolarMass& get_Metadata_SireMol_AtomMasses_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireUnits::Dimension::MolarMass >(metakey); }

const SireUnits::Dimension::MolarMass& get_Metadata_SireMol_AtomMasses_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireUnits::Dimension::MolarMass >(key, metakey); }

const SireMaths::Vector3D<SireUnits::Dimension::Force>& get_Metadata_SireMol_AtomForces_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMaths::Vector3D<SireUnits::Dimension::Force> >(metakey); }

const SireMaths::Vector3D<SireUnits::Dimension::Force>& get_Metadata_SireMol_AtomForces_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMaths::Vector3D<SireUnits::Dimension::Force> >(key, metakey); }

const SireUnits::Dimension::MolarEnergy& get_Metadata_SireMol_AtomEnergies_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireUnits::Dimension::MolarEnergy >(metakey); }

const SireUnits::Dimension::MolarEnergy& get_Metadata_SireMol_AtomEnergies_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireUnits::Dimension::MolarEnergy >(key, metakey); }

const SireMol::BeadNum& get_Metadata_SireMol_AtomBeads_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMol::BeadNum >(metakey); }

const SireMol::BeadNum& get_Metadata_SireMol_AtomBeads_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMol::BeadNum >(key, metakey); }

const SireMaths::Vector& get_Metadata_SireMol_AtomCoords_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMaths::Vector >(metakey); }

const SireMaths::Vector& get_Metadata_SireMol_AtomCoords_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMaths::Vector >(key, metakey); }

const SireMol::Element& get_Metadata_SireMol_AtomElements_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireMol::Element >(metakey); }

const SireMol::Element& get_Metadata_SireMol_AtomElements_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireMol::Element >(key, metakey); }

const SireUnits::Dimension::Length& get_Metadata_SireMol_AtomRadii_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< SireUnits::Dimension::Length >(metakey); }

const SireUnits::Dimension::Length& get_Metadata_SireMol_AtomRadii_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireUnits::Dimension::Length >(key, metakey); }

const QString& get_Metadata_SireMol_AtomStringProperty_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< QString >(metakey); }

const QString& get_Metadata_SireMol_AtomStringProperty_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< QString >(key, metakey); }

const qint64& get_Metadata_SireMol_AtomIntProperty_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< qint64 >(metakey); }

const qint64& get_Metadata_SireMol_AtomIntProperty_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< qint64 >(key, metakey); }

const double& get_Metadata_SireMol_AtomFloatProperty_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< double >(metakey); }

const double& get_Metadata_SireMol_AtomFloatProperty_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< double >(key, metakey); }

const QVariant& get_Metadata_SireMol_AtomVariantProperty_function1(const SireMol::Atom &atom,
                                   const QString &metakey){ return atom.metadata< QVariant >(metakey); }

const QVariant& get_Metadata_SireMol_AtomVariantProperty_function2(const SireMol::Atom &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< QVariant >(key, metakey); }

SireMol::Atom __copy__(const SireMol::Atom &other){ return SireMol::Atom(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_Atom_class(){

    { //::SireMol::Atom
        typedef bp::class_< SireMol::Atom, bp::bases< SireMol::MoleculeView, SireBase::Property > > Atom_exposer_t;
        Atom_exposer_t Atom_exposer = Atom_exposer_t( "Atom", "This is a single-atom view into a molecule.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope Atom_scope( Atom_exposer );
        Atom_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const & >(( bp::arg("molview"), bp::arg("atomid") ), "Construct the atom that that is identified by ID atomid\nin the view molview - this atom must be within this view\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n") );
        Atom_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const & >(( bp::arg("moldata"), bp::arg("atomid") ), "Construct the atom that is identified by ID atomid\nin the molecule whose data is in moldata\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n") );
        Atom_exposer.def( bp::init< SireMol::Atom const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::Atom::assertContains
        
            typedef void ( ::SireMol::Atom::*assertContains_function_type)( ::SireMol::AtomIdx ) const;
            assertContains_function_type assertContains_function_value( &::SireMol::Atom::assertContains );
            
            Atom_exposer.def( 
                "assertContains"
                , assertContains_function_value
                , ( bp::arg("atomidx") )
                , "Assert that this atom is the atom at index atomidx\nThrow: SireMol::missing_atom\n" );
        
        }
        { //::SireMol::Atom::assertContainsMetadata
        
            typedef void ( ::SireMol::Atom::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireMol::Atom::assertContainsMetadata );
            
            Atom_exposer.def( 
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("metakey") )
                , "Assert that this atom has an AtomProperty piece of metadata\nat metakey metakey\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMol::Atom::assertContainsMetadata
        
            typedef void ( ::SireMol::Atom::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireMol::Atom::assertContainsMetadata );
            
            Atom_exposer.def( 
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Assert that the property at key key has an AtomProperty\npiece of metadata at metakey metakey\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMol::Atom::assertContainsProperty
        
            typedef void ( ::SireMol::Atom::*assertContainsProperty_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsProperty_function_type assertContainsProperty_function_value( &::SireMol::Atom::assertContainsProperty );
            
            Atom_exposer.def( 
                "assertContainsProperty"
                , assertContainsProperty_function_value
                , ( bp::arg("key") )
                , "Assert that this atom has an AtomProperty at key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMol::Atom::cgAtomIdx
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMol::Atom::*cgAtomIdx_function_type)(  ) const;
            cgAtomIdx_function_type cgAtomIdx_function_value( &::SireMol::Atom::cgAtomIdx );
            
            Atom_exposer.def( 
                "cgAtomIdx"
                , cgAtomIdx_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the CGAtomIdx of this atom" );
        
        }
        { //::SireMol::Atom::chain
        
            typedef ::SireMol::Chain ( ::SireMol::Atom::*chain_function_type)(  ) const;
            chain_function_type chain_function_value( &::SireMol::Atom::chain );
            
            Atom_exposer.def( 
                "chain"
                , chain_function_value
                , "Return the chain this atom is in\nThrow: SireMol::missing_chain\n" );
        
        }
        { //::SireMol::Atom::cutGroup
        
            typedef ::SireMol::CutGroup ( ::SireMol::Atom::*cutGroup_function_type)(  ) const;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Atom::cutGroup );
            
            Atom_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , "Return the CutGroup this atom is in" );
        
        }
        { //::SireMol::Atom::edit
        
            typedef ::SireMol::AtomEditor ( ::SireMol::Atom::*edit_function_type)(  ) const;
            edit_function_type edit_function_value( &::SireMol::Atom::edit );
            
            Atom_exposer.def( 
                "edit"
                , edit_function_value
                , "Return an editor that can be used to edit this atom" );
        
        }
        { //::SireMol::Atom::evaluate
        
            typedef ::SireMol::Evaluator ( ::SireMol::Atom::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::Atom::evaluate );
            
            Atom_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , "Return an evaluator that can be used to evaluate properties\nof this atom" );
        
        }
        { //::SireMol::Atom::hasMetadata
        
            typedef bool ( ::SireMol::Atom::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Atom::hasMetadata );
            
            Atom_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("metakey") )
                , "Return whether or not there is an AtomProperty at metakey metakey" );
        
        }
        { //::SireMol::Atom::hasMetadata
        
            typedef bool ( ::SireMol::Atom::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Atom::hasMetadata );
            
            Atom_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Return whether the metadata at metakey metakey for the property\nat key key is an AtomProperty\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMol::Atom::hasProperty
        
            typedef bool ( ::SireMol::Atom::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMol::Atom::hasProperty );
            
            Atom_exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , "Return whether or not there is an AtomProperty at key key" );
        
        }
        { //::SireMol::Atom::index
        
            typedef ::SireMol::AtomIdx ( ::SireMol::Atom::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireMol::Atom::index );
            
            Atom_exposer.def( 
                "index"
                , index_function_value
                , "Return the index number of this atom in the molecule" );
        
        }
        { //::SireMol::Atom::isEmpty
        
            typedef bool ( ::SireMol::Atom::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::Atom::isEmpty );
            
            Atom_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "Is this atom empty?" );
        
        }
        { //::SireMol::Atom::isWithinChain
        
            typedef bool ( ::SireMol::Atom::*isWithinChain_function_type)(  ) const;
            isWithinChain_function_type isWithinChain_function_value( &::SireMol::Atom::isWithinChain );
            
            Atom_exposer.def( 
                "isWithinChain"
                , isWithinChain_function_value
                , "Return whether or not this atom is part of a chain" );
        
        }
        { //::SireMol::Atom::isWithinResidue
        
            typedef bool ( ::SireMol::Atom::*isWithinResidue_function_type)(  ) const;
            isWithinResidue_function_type isWithinResidue_function_value( &::SireMol::Atom::isWithinResidue );
            
            Atom_exposer.def( 
                "isWithinResidue"
                , isWithinResidue_function_value
                , "Return whether or not this atom is part of a residue" );
        
        }
        { //::SireMol::Atom::isWithinSegment
        
            typedef bool ( ::SireMol::Atom::*isWithinSegment_function_type)(  ) const;
            isWithinSegment_function_type isWithinSegment_function_value( &::SireMol::Atom::isWithinSegment );
            
            Atom_exposer.def( 
                "isWithinSegment"
                , isWithinSegment_function_value
                , "Return whether or not this atom is part of a segment" );
        
        }
        { //::SireMol::Atom::metadataKeys
        
            typedef ::QStringList ( ::SireMol::Atom::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Atom::metadataKeys );
            
            Atom_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , "Return the metakeys of all AtomProperty metadata" );
        
        }
        { //::SireMol::Atom::metadataKeys
        
            typedef ::QStringList ( ::SireMol::Atom::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Atom::metadataKeys );
            
            Atom_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , "Return the metakeys of all AtomProperty metadata for\nthe property at key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMol::Atom::molecule
        
            typedef ::SireMol::Molecule ( ::SireMol::Atom::*molecule_function_type)(  ) const;
            molecule_function_type molecule_function_value( &::SireMol::Atom::molecule );
            
            Atom_exposer.def( 
                "molecule"
                , molecule_function_value
                , "Return the molecule that contains this atom" );
        
        }
        { //::SireMol::Atom::move
        
            typedef ::SireMol::Mover< SireMol::Atom > ( ::SireMol::Atom::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMol::Atom::move );
            
            Atom_exposer.def( 
                "move"
                , move_function_value
                , "Return a Mover that can be used to move this atom" );
        
        }
        { //::SireMol::Atom::name
        
            typedef ::SireMol::AtomName ( ::SireMol::Atom::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMol::Atom::name );
            
            Atom_exposer.def( 
                "name"
                , name_function_value
                , "Return the name of the atom" );
        
        }
        { //::SireMol::Atom::number
        
            typedef ::SireMol::AtomNum ( ::SireMol::Atom::*number_function_type)(  ) const;
            number_function_type number_function_value( &::SireMol::Atom::number );
            
            Atom_exposer.def( 
                "number"
                , number_function_value
                , "Return the number of the atom" );
        
        }
        Atom_exposer.def( bp::self != bp::self );
        { //::SireMol::Atom::operator=
        
            typedef ::SireMol::Atom & ( ::SireMol::Atom::*assign_function_type)( ::SireMol::Atom const & ) ;
            assign_function_type assign_function_value( &::SireMol::Atom::operator= );
            
            Atom_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Atom_exposer.def( bp::self == bp::self );
        { //::SireMol::Atom::propertyKeys
        
            typedef ::QStringList ( ::SireMol::Atom::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMol::Atom::propertyKeys );
            
            Atom_exposer.def( 
                "propertyKeys"
                , propertyKeys_function_value
                , "Return the keys of all AtomProperty properties" );
        
        }
        { //::SireMol::Atom::residue
        
            typedef ::SireMol::Residue ( ::SireMol::Atom::*residue_function_type)(  ) const;
            residue_function_type residue_function_value( &::SireMol::Atom::residue );
            
            Atom_exposer.def( 
                "residue"
                , residue_function_value
                , "Return the residue that this atom is in\nThrow: SireMol::missing_residue\n" );
        
        }
        { //::SireMol::Atom::segment
        
            typedef ::SireMol::Segment ( ::SireMol::Atom::*segment_function_type)(  ) const;
            segment_function_type segment_function_value( &::SireMol::Atom::segment );
            
            Atom_exposer.def( 
                "segment"
                , segment_function_value
                , "Return the segment this atom is in\nThrow: SireMol::missing_segment\n" );
        
        }
        { //::SireMol::Atom::selectedAll
        
            typedef bool ( ::SireMol::Atom::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMol::Atom::selectedAll );
            
            Atom_exposer.def( 
                "selectedAll"
                , selectedAll_function_value
                , "Is this atom a view of the whole (1 atom) molecule?" );
        
        }
        { //::SireMol::Atom::selection
        
            typedef ::SireMol::AtomSelection ( ::SireMol::Atom::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMol::Atom::selection );
            
            Atom_exposer.def( 
                "selection"
                , selection_function_value
                , "Return the selected atom" );
        
        }
        { //::SireMol::Atom::selector
        
            typedef ::SireMol::Selector< SireMol::Atom > ( ::SireMol::Atom::*selector_function_type)(  ) const;
            selector_function_type selector_function_value( &::SireMol::Atom::selector );
            
            Atom_exposer.def( 
                "selector"
                , selector_function_value
                , "Return a selector that can change the atom selection" );
        
        }
        { //::SireMol::Atom::toString
        
            typedef ::QString ( ::SireMol::Atom::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Atom::toString );
            
            Atom_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this atom" );
        
        }
        { //::SireMol::Atom::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Atom::typeName );
            
            Atom_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::Atom::update
        
            typedef void ( ::SireMol::Atom::*update_function_type)( ::SireMol::MoleculeData const & ) ;
            update_function_type update_function_value( &::SireMol::Atom::update );
            
            Atom_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("other") )
                , "Update this atom with the passed molecule data.\nThrow: SireError::incompatible_error\n" );
        
        }
        Atom_exposer.staticmethod( "typeName" );
        Atom_exposer.def( "_get_property_SireMM_AtomLJs", &SireMol::Atom::property< SireMM::LJParameter >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMM_AtomLJs", get_Metadata_SireMM_AtomLJs_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMM_AtomLJs", &get_Metadata_SireMM_AtomLJs_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomCharges", &SireMol::Atom::property< SireUnits::Dimension::Charge >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomCharges", get_Metadata_SireMol_AtomCharges_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomCharges", &get_Metadata_SireMol_AtomCharges_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomVelocities", &SireMol::Atom::property< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomVelocities", get_Metadata_SireMol_AtomVelocities_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomVelocities", &get_Metadata_SireMol_AtomVelocities_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomPolarisabilities", &SireMol::Atom::property< SireUnits::Dimension::Volume >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomPolarisabilities", get_Metadata_SireMol_AtomPolarisabilities_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomPolarisabilities", &get_Metadata_SireMol_AtomPolarisabilities_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomMasses", &SireMol::Atom::property< SireUnits::Dimension::MolarMass >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomMasses", get_Metadata_SireMol_AtomMasses_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomMasses", &get_Metadata_SireMol_AtomMasses_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomForces", &SireMol::Atom::property< SireMaths::Vector3D<SireUnits::Dimension::Force> >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomForces", get_Metadata_SireMol_AtomForces_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomForces", &get_Metadata_SireMol_AtomForces_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomEnergies", &SireMol::Atom::property< SireUnits::Dimension::MolarEnergy >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomEnergies", get_Metadata_SireMol_AtomEnergies_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomEnergies", &get_Metadata_SireMol_AtomEnergies_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomBeads", &SireMol::Atom::property< SireMol::BeadNum >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomBeads", get_Metadata_SireMol_AtomBeads_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomBeads", &get_Metadata_SireMol_AtomBeads_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomCoords", &SireMol::Atom::property< SireMaths::Vector >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomCoords", get_Metadata_SireMol_AtomCoords_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomCoords", &get_Metadata_SireMol_AtomCoords_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomElements", &SireMol::Atom::property< SireMol::Element >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomElements", get_Metadata_SireMol_AtomElements_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomElements", &get_Metadata_SireMol_AtomElements_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomRadii", &SireMol::Atom::property< SireUnits::Dimension::Length >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomRadii", get_Metadata_SireMol_AtomRadii_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomRadii", &get_Metadata_SireMol_AtomRadii_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomStringProperty", &SireMol::Atom::property< QString >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomStringProperty", get_Metadata_SireMol_AtomStringProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomStringProperty", &get_Metadata_SireMol_AtomStringProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomIntProperty", &SireMol::Atom::property< qint64 >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomIntProperty", get_Metadata_SireMol_AtomIntProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomIntProperty", &get_Metadata_SireMol_AtomIntProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomFloatProperty", &SireMol::Atom::property< double >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomFloatProperty", get_Metadata_SireMol_AtomFloatProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomFloatProperty", &get_Metadata_SireMol_AtomFloatProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_property_SireMol_AtomVariantProperty", &SireMol::Atom::property< QVariant >, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomVariantProperty", get_Metadata_SireMol_AtomVariantProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "_get_metadata_SireMol_AtomVariantProperty", &get_Metadata_SireMol_AtomVariantProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Atom_exposer.def( "__copy__", &__copy__);
        Atom_exposer.def( "__deepcopy__", &__copy__);
        Atom_exposer.def( "clone", &__copy__);
        Atom_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Atom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Atom_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Atom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Atom_exposer.def( "__str__", &__str__< ::SireMol::Atom > );
        Atom_exposer.def( "__repr__", &__str__< ::SireMol::Atom > );
        Atom_exposer.def( "__len__", &__len_size< ::SireMol::Atom > );
    }

}
