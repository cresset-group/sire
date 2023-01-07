// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Chain.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "chain.h"

#include "chaineditor.h"

#include "chainresid.h"

#include "evaluator.h"

#include "groupatomids.h"

#include "molecule.h"

#include "mover.hpp"

#include "mover_metaid.h"

#include "residue.h"

#include "selector.hpp"

#include "chain.h"

#include "chainproperty.hpp"

const QString& get_Metadata_SireMol_ChainStringProperty_function1(const SireMol::Chain &atom,
                                   const QString &metakey){ return atom.metadata< QString >(metakey); }

const QString& get_Metadata_SireMol_ChainStringProperty_function2(const SireMol::Chain &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< QString >(key, metakey); }

const qint64& get_Metadata_SireMol_ChainIntProperty_function1(const SireMol::Chain &atom,
                                   const QString &metakey){ return atom.metadata< qint64 >(metakey); }

const qint64& get_Metadata_SireMol_ChainIntProperty_function2(const SireMol::Chain &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< qint64 >(key, metakey); }

const double& get_Metadata_SireMol_ChainFloatProperty_function1(const SireMol::Chain &atom,
                                   const QString &metakey){ return atom.metadata< double >(metakey); }

const double& get_Metadata_SireMol_ChainFloatProperty_function2(const SireMol::Chain &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< double >(key, metakey); }

const QVariant& get_Metadata_SireMol_ChainVariantProperty_function1(const SireMol::Chain &atom,
                                   const QString &metakey){ return atom.metadata< QVariant >(metakey); }

const QVariant& get_Metadata_SireMol_ChainVariantProperty_function2(const SireMol::Chain &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< QVariant >(key, metakey); }

const SireBase::PropertyPtr& get_Metadata_SireMol_ChainPropertyProperty_function1(const SireMol::Chain &atom,
                                   const QString &metakey){ return atom.metadata< SireBase::PropertyPtr >(metakey); }

const SireBase::PropertyPtr& get_Metadata_SireMol_ChainPropertyProperty_function2(const SireMol::Chain &atom,
                                   const QString &key, const QString &metakey){
                                        return atom.metadata< SireBase::PropertyPtr >(key, metakey); }

SireMol::Chain __copy__(const SireMol::Chain &other){ return SireMol::Chain(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Chain_class(){

    { //::SireMol::Chain
        typedef bp::class_< SireMol::Chain, bp::bases< SireMol::MoleculeView, SireBase::Property > > Chain_exposer_t;
        Chain_exposer_t Chain_exposer = Chain_exposer_t( "Chain", "This class represents a Chain in a Molecule.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope Chain_scope( Chain_exposer );
        Chain_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::ChainID const & >(( bp::arg("moldata"), bp::arg("chainid") ), "Construct the chain at ID chainid in the molecule whose data\nis in moldata\nThrow: SireMol::missing_chain\nThrow: SireMol::duplicate_chain\nThrow: SireError::invalid_index\n") );
        Chain_exposer.def( bp::init< SireMol::Chain const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::Chain::assertContainsMetadata

            typedef void ( ::SireMol::Chain::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireMol::Chain::assertContainsMetadata );

            Chain_exposer.def(
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("metakey") )
                , bp::release_gil_policy()
                , "Assert that this chain has an ChainProperty piece of metadata\nat metakey metakey\nThrow: SireBase::missing_property\n" );

        }
        { //::SireMol::Chain::assertContainsMetadata

            typedef void ( ::SireMol::Chain::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireMol::Chain::assertContainsMetadata );

            Chain_exposer.def(
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::release_gil_policy()
                , "Assert that the property at key key has an ChainProperty\npiece of metadata at metakey metakey\nThrow: SireBase::missing_property\n" );

        }
        { //::SireMol::Chain::assertContainsProperty

            typedef void ( ::SireMol::Chain::*assertContainsProperty_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsProperty_function_type assertContainsProperty_function_value( &::SireMol::Chain::assertContainsProperty );

            Chain_exposer.def(
                "assertContainsProperty"
                , assertContainsProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Assert that this chain has an ChainProperty at key key\nThrow: SireBase::missing_property\n" );

        }
        { //::SireMol::Chain::atomIdxs

            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::Chain::*atomIdxs_function_type)(  ) const;
            atomIdxs_function_type atomIdxs_function_value( &::SireMol::Chain::atomIdxs );

            Chain_exposer.def(
                "atomIdxs"
                , atomIdxs_function_value
                , bp::release_gil_policy()
                , "Return the indicies of the atoms in this chain, in the\norder that they appear in this chain" );

        }
        { //::SireMol::Chain::contains

            typedef bool ( ::SireMol::Chain::*contains_function_type)( ::SireMol::AtomIdx ) const;
            contains_function_type contains_function_value( &::SireMol::Chain::contains );

            Chain_exposer.def(
                "contains"
                , contains_function_value
                , ( bp::arg("atomidx") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains the atom\nat index atomidx" );

        }
        { //::SireMol::Chain::contains

            typedef bool ( ::SireMol::Chain::*contains_function_type)( ::SireMol::AtomID const & ) const;
            contains_function_type contains_function_value( &::SireMol::Chain::contains );

            Chain_exposer.def(
                "contains"
                , contains_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains all of\nthe atoms identified by the ID atomid" );

        }
        { //::SireMol::Chain::contains

            typedef bool ( ::SireMol::Chain::*contains_function_type)( ::SireMol::ResIdx ) const;
            contains_function_type contains_function_value( &::SireMol::Chain::contains );

            Chain_exposer.def(
                "contains"
                , contains_function_value
                , ( bp::arg("residx") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains the\nresidue at index residx" );

        }
        { //::SireMol::Chain::contains

            typedef bool ( ::SireMol::Chain::*contains_function_type)( ::SireMol::ResID const & ) const;
            contains_function_type contains_function_value( &::SireMol::Chain::contains );

            Chain_exposer.def(
                "contains"
                , contains_function_value
                , ( bp::arg("resid") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains all\nof the residues identified by the ID resid" );

        }
        { //::SireMol::Chain::edit

            typedef ::SireMol::ChainEditor ( ::SireMol::Chain::*edit_function_type)(  ) const;
            edit_function_type edit_function_value( &::SireMol::Chain::edit );

            Chain_exposer.def(
                "edit"
                , edit_function_value
                , bp::release_gil_policy()
                , "Return an editor that can edit this chain" );

        }
        { //::SireMol::Chain::evaluate

            typedef ::SireMol::Evaluator ( ::SireMol::Chain::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::Chain::evaluate );

            Chain_exposer.def(
                "evaluate"
                , evaluate_function_value
                , bp::release_gil_policy()
                , "Return an evaluator that can evaluate properties\nof this chain" );

        }
        { //::SireMol::Chain::hasMetadata

            typedef bool ( ::SireMol::Chain::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Chain::hasMetadata );

            Chain_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("metakey") )
                , bp::release_gil_policy()
                , "Return whether or not there is a ChainProperty at metakey metakey" );

        }
        { //::SireMol::Chain::hasMetadata

            typedef bool ( ::SireMol::Chain::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Chain::hasMetadata );

            Chain_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::release_gil_policy()
                , "Return whether the metadata at metakey metakey for the property\nat key key is a ChainProperty\nThrow: SireBase::missing_property\n" );

        }
        { //::SireMol::Chain::hasProperty

            typedef bool ( ::SireMol::Chain::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMol::Chain::hasProperty );

            Chain_exposer.def(
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Return whether or not there is a ChainProperty at key key" );

        }
        { //::SireMol::Chain::index

            typedef ::SireMol::ChainIdx ( ::SireMol::Chain::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireMol::Chain::index );

            Chain_exposer.def(
                "index"
                , index_function_value
                , bp::release_gil_policy()
                , "Return the index of this chain in the molecule" );

        }
        { //::SireMol::Chain::intersects

            typedef bool ( ::SireMol::Chain::*intersects_function_type)( ::SireMol::AtomID const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::Chain::intersects );

            Chain_exposer.def(
                "intersects"
                , intersects_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains some of\nthe atoms identified by the ID atomid" );

        }
        { //::SireMol::Chain::intersects

            typedef bool ( ::SireMol::Chain::*intersects_function_type)( ::SireMol::ResID const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::Chain::intersects );

            Chain_exposer.def(
                "intersects"
                , intersects_function_value
                , ( bp::arg("resid") )
                , bp::release_gil_policy()
                , "Return whether or not this chain contains some\nof the residues identified by the ID resid" );

        }
        { //::SireMol::Chain::invert

            typedef ::SireMol::Selector< SireMol::Chain > ( ::SireMol::Chain::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMol::Chain::invert );

            Chain_exposer.def(
                "invert"
                , invert_function_value
                , bp::release_gil_policy()
                , "Return a selector that has everything except this view" );

        }
        { //::SireMol::Chain::isEmpty

            typedef bool ( ::SireMol::Chain::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::Chain::isEmpty );

            Chain_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Is this chain empty?" );

        }
        { //::SireMol::Chain::metadataKeys

            typedef ::QStringList ( ::SireMol::Chain::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Chain::metadataKeys );

            Chain_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , bp::release_gil_policy()
                , "Return the metakeys of all ChainProperty metadata" );

        }
        { //::SireMol::Chain::metadataKeys

            typedef ::QStringList ( ::SireMol::Chain::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Chain::metadataKeys );

            Chain_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Return the metakeys of all ChainProperty metadata for\nthe property at key key\nThrow: SireBase::missing_property\n" );

        }
        { //::SireMol::Chain::move

            typedef ::SireMol::Mover< SireMol::Chain > ( ::SireMol::Chain::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMol::Chain::move );

            Chain_exposer.def(
                "move"
                , move_function_value
                , bp::release_gil_policy()
                , "Return an object that can move a copy of this chain" );

        }
        { //::SireMol::Chain::nAtoms

            typedef int ( ::SireMol::Chain::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::Chain::nAtoms );

            Chain_exposer.def(
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "Return the number of atoms in this Chain" );

        }
        { //::SireMol::Chain::nResidues

            typedef int ( ::SireMol::Chain::*nResidues_function_type)(  ) const;
            nResidues_function_type nResidues_function_value( &::SireMol::Chain::nResidues );

            Chain_exposer.def(
                "nResidues"
                , nResidues_function_value
                , bp::release_gil_policy()
                , "Return the number of residues in this chain" );

        }
        { //::SireMol::Chain::name

            typedef ::SireMol::ChainName ( ::SireMol::Chain::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMol::Chain::name );

            Chain_exposer.def(
                "name"
                , name_function_value
                , bp::release_gil_policy()
                , "Return the name of this chain" );

        }
        { //::SireMol::Chain::number

            typedef ::SireMol::ChainIdx ( ::SireMol::Chain::*number_function_type)(  ) const;
            number_function_type number_function_value( &::SireMol::Chain::number );

            Chain_exposer.def(
                "number"
                , number_function_value
                , bp::release_gil_policy()
                , "Return the number of this chain (same as its index)" );

        }
        Chain_exposer.def( bp::self != bp::self );
        { //::SireMol::Chain::operator=

            typedef ::SireMol::Chain & ( ::SireMol::Chain::*assign_function_type)( ::SireMol::Chain const & ) ;
            assign_function_type assign_function_value( &::SireMol::Chain::operator= );

            Chain_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        Chain_exposer.def( bp::self == bp::self );
        { //::SireMol::Chain::operator[]

            typedef ::SireMol::MolViewPtr ( ::SireMol::Chain::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::Chain::operator[] );

            Chain_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );

        }
        { //::SireMol::Chain::operator[]

            typedef ::SireMol::MolViewPtr ( ::SireMol::Chain::*__getitem___function_type)( ::QString const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::Chain::operator[] );

            Chain_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("name") )
                , "" );

        }
        { //::SireMol::Chain::operator[]

            typedef ::SireMol::MolViewPtr ( ::SireMol::Chain::*__getitem___function_type)( ::SireID::Index const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::Chain::operator[] );

            Chain_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idx") )
                , "" );

        }
        { //::SireMol::Chain::operator[]

            typedef ::SireMol::MolViewPtr ( ::SireMol::Chain::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::Chain::operator[] );

            Chain_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );

        }
        { //::SireMol::Chain::propertyAsProperty

            typedef ::SireBase::PropertyPtr ( ::SireMol::Chain::*propertyAsProperty_function_type)( ::SireBase::PropertyName const & ) const;
            propertyAsProperty_function_type propertyAsProperty_function_value( &::SireMol::Chain::propertyAsProperty );

            Chain_exposer.def(
                "propertyAsProperty"
                , propertyAsProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Return the specified property as a PropertyPtr" );

        }
        { //::SireMol::Chain::propertyAsVariant

            typedef ::QVariant ( ::SireMol::Chain::*propertyAsVariant_function_type)( ::SireBase::PropertyName const & ) const;
            propertyAsVariant_function_type propertyAsVariant_function_value( &::SireMol::Chain::propertyAsVariant );

            Chain_exposer.def(
                "propertyAsVariant"
                , propertyAsVariant_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Return the specified property as a QVariant" );

        }
        { //::SireMol::Chain::propertyKeys

            typedef ::QStringList ( ::SireMol::Chain::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMol::Chain::propertyKeys );

            Chain_exposer.def(
                "propertyKeys"
                , propertyKeys_function_value
                , bp::release_gil_policy()
                , "Return the keys of all ChainProperty properties" );

        }
        { //::SireMol::Chain::resIdxs

            typedef ::QList< SireMol::ResIdx > const & ( ::SireMol::Chain::*resIdxs_function_type)(  ) const;
            resIdxs_function_type resIdxs_function_value( &::SireMol::Chain::resIdxs );

            Chain_exposer.def(
                "resIdxs"
                , resIdxs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the list of indicies of residues that are\nin this chain, in the order they appear in this chain" );

        }
        { //::SireMol::Chain::selectedAll

            typedef bool ( ::SireMol::Chain::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMol::Chain::selectedAll );

            Chain_exposer.def(
                "selectedAll"
                , selectedAll_function_value
                , bp::release_gil_policy()
                , "Is this chain the entire molecule?" );

        }
        { //::SireMol::Chain::selection

            typedef ::SireMol::AtomSelection ( ::SireMol::Chain::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMol::Chain::selection );

            Chain_exposer.def(
                "selection"
                , selection_function_value
                , bp::release_gil_policy()
                , "Return the atoms that are in this chain" );

        }
        { //::SireMol::Chain::selector

            typedef ::SireMol::Selector< SireMol::Chain > ( ::SireMol::Chain::*selector_function_type)(  ) const;
            selector_function_type selector_function_value( &::SireMol::Chain::selector );

            Chain_exposer.def(
                "selector"
                , selector_function_value
                , bp::release_gil_policy()
                , "Return a selector that change the selection of chains" );

        }
        { //::SireMol::Chain::toSelector

            typedef ::SireMol::MolViewPtr ( ::SireMol::Chain::*toSelector_function_type)(  ) const;
            toSelector_function_type toSelector_function_value( &::SireMol::Chain::toSelector );

            Chain_exposer.def(
                "toSelector"
                , toSelector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Chain::toString

            typedef ::QString ( ::SireMol::Chain::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Chain::toString );

            Chain_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this chain" );

        }
        { //::SireMol::Chain::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Chain::typeName );

            Chain_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Chain::update

            typedef void ( ::SireMol::Chain::*update_function_type)( ::SireMol::MoleculeData const & ) ;
            update_function_type update_function_value( &::SireMol::Chain::update );

            Chain_exposer.def(
                "update"
                , update_function_value
                , ( bp::arg("moldata") )
                , bp::release_gil_policy()
                , "Update this chain with the passed molecule data.\nThrow: SireError::incompatible_error\n" );

        }
        Chain_exposer.staticmethod( "typeName" );
        Chain_exposer.def( "_get_property_SireMol_ChainStringProperty", &SireMol::Chain::property< QString >, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainStringProperty", get_Metadata_SireMol_ChainStringProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainStringProperty", &get_Metadata_SireMol_ChainStringProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_property_SireMol_ChainIntProperty", &SireMol::Chain::property< qint64 >, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainIntProperty", get_Metadata_SireMol_ChainIntProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainIntProperty", &get_Metadata_SireMol_ChainIntProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_property_SireMol_ChainFloatProperty", &SireMol::Chain::property< double >, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainFloatProperty", get_Metadata_SireMol_ChainFloatProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainFloatProperty", &get_Metadata_SireMol_ChainFloatProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_property_SireMol_ChainVariantProperty", &SireMol::Chain::property< QVariant >, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainVariantProperty", get_Metadata_SireMol_ChainVariantProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainVariantProperty", &get_Metadata_SireMol_ChainVariantProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_property_SireMol_ChainPropertyProperty", &SireMol::Chain::property< SireBase::PropertyPtr >, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainPropertyProperty", get_Metadata_SireMol_ChainPropertyProperty_function1, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "_get_metadata_SireMol_ChainPropertyProperty", &get_Metadata_SireMol_ChainPropertyProperty_function2, bp::return_value_policy<bp::copy_const_reference>());
        Chain_exposer.def( "__copy__", &__copy__);
        Chain_exposer.def( "__deepcopy__", &__copy__);
        Chain_exposer.def( "clone", &__copy__);
        Chain_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Chain >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Chain_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Chain >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Chain_exposer.def_pickle(sire_pickle_suite< ::SireMol::Chain >());
        Chain_exposer.def( "__str__", &__str__< ::SireMol::Chain > );
        Chain_exposer.def( "__repr__", &__str__< ::SireMol::Chain > );
        Chain_exposer.def( "__len__", &__len_size< ::SireMol::Chain > );
    }

}
