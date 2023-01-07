// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Bond.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireCAS/expression.h"

#include "SireCAS/symbol.h"

#include "SireCAS/values.h"

#include "SireMol/errors.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "bond.h"

#include "selectorbond.h"

#include "twoatomfunctions.h"

#include <QDebug>

#include "bond.h"

SireMM::Bond __copy__(const SireMM::Bond &other){ return SireMM::Bond(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Bond_class(){

    { //::SireMM::Bond
        typedef bp::class_< SireMM::Bond, bp::bases< SireMol::MoleculeView, SireBase::Property > > Bond_exposer_t;
        Bond_exposer_t Bond_exposer = Bond_exposer_t( "Bond", "This class provides a molecule view to a bond", bp::init< >("") );
        bp::scope Bond_scope( Bond_exposer );
        Bond_exposer.def( bp::init< SireMol::Atom const &, SireMol::Atom const & >(( bp::arg("atom0"), bp::arg("atom1") ), "") );
        Bond_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, SireMol::AtomID const & >(( bp::arg("molview"), bp::arg("atom0"), bp::arg("atom1") ), "") );
        Bond_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, SireMol::AtomID const & >(( bp::arg("moldata"), bp::arg("atom0"), bp::arg("atom1") ), "") );
        Bond_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::BondID const & >(( bp::arg("moldata"), bp::arg("bond") ), "") );
        Bond_exposer.def( bp::init< SireMM::Bond const & >(( bp::arg("other") ), "") );
        { //::SireMM::Bond::ID

            typedef ::SireMol::BondID ( ::SireMM::Bond::*ID_function_type)(  ) const;
            ID_function_type ID_function_value( &::SireMM::Bond::ID );

            Bond_exposer.def(
                "ID"
                , ID_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::atom0

            typedef ::SireMol::Atom ( ::SireMM::Bond::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::Bond::atom0 );

            Bond_exposer.def(
                "atom0"
                , atom0_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::atom1

            typedef ::SireMol::Atom ( ::SireMM::Bond::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::Bond::atom1 );

            Bond_exposer.def(
                "atom1"
                , atom1_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::energy

            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::Bond::*energy_function_type)(  ) const;
            energy_function_type energy_function_value( &::SireMM::Bond::energy );

            Bond_exposer.def(
                "energy"
                , energy_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::energy

            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::Bond::*energy_function_type)( ::SireBase::PropertyMap const & ) const;
            energy_function_type energy_function_value( &::SireMM::Bond::energy );

            Bond_exposer.def(
                "energy"
                , energy_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::evaluate

            typedef ::SireMol::Evaluator ( ::SireMM::Bond::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMM::Bond::evaluate );

            Bond_exposer.def(
                "evaluate"
                , evaluate_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::hasMetadata

            typedef bool ( ::SireMM::Bond::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::Bond::hasMetadata );

            Bond_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::hasMetadata

            typedef bool ( ::SireMM::Bond::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::Bond::hasMetadata );

            Bond_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::hasProperty

            typedef bool ( ::SireMM::Bond::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMM::Bond::hasProperty );

            Bond_exposer.def(
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::invert

            typedef ::SireMM::SelectorBond ( ::SireMM::Bond::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMM::Bond::invert );

            Bond_exposer.def(
                "invert"
                , invert_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::isEmpty

            typedef bool ( ::SireMM::Bond::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::Bond::isEmpty );

            Bond_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::length

            typedef ::SireUnits::Dimension::Length ( ::SireMM::Bond::*length_function_type)(  ) const;
            length_function_type length_function_value( &::SireMM::Bond::length );

            Bond_exposer.def(
                "length"
                , length_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::length

            typedef ::SireUnits::Dimension::Length ( ::SireMM::Bond::*length_function_type)( ::SireBase::PropertyMap const & ) const;
            length_function_type length_function_value( &::SireMM::Bond::length );

            Bond_exposer.def(
                "length"
                , length_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::measure

            typedef ::SireUnits::Dimension::Length ( ::SireMM::Bond::*measure_function_type)(  ) const;
            measure_function_type measure_function_value( &::SireMM::Bond::measure );

            Bond_exposer.def(
                "measure"
                , measure_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::measure

            typedef ::SireUnits::Dimension::Length ( ::SireMM::Bond::*measure_function_type)( ::SireBase::PropertyMap const & ) const;
            measure_function_type measure_function_value( &::SireMM::Bond::measure );

            Bond_exposer.def(
                "measure"
                , measure_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::metadataKeys

            typedef ::QStringList ( ::SireMM::Bond::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::Bond::metadataKeys );

            Bond_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::metadataKeys

            typedef ::QStringList ( ::SireMM::Bond::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::Bond::metadataKeys );

            Bond_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::move

            typedef ::SireMol::Mover< SireMM::Bond > ( ::SireMM::Bond::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMM::Bond::move );

            Bond_exposer.def(
                "move"
                , move_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Bond_exposer.def( bp::self != bp::self );
        { //::SireMM::Bond::operator=

            typedef ::SireMM::Bond & ( ::SireMM::Bond::*assign_function_type)( ::SireMM::Bond const & ) ;
            assign_function_type assign_function_value( &::SireMM::Bond::operator= );

            Bond_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("bond") )
                , bp::return_self< >()
                , "" );

        }
        Bond_exposer.def( bp::self == bp::self );
        { //::SireMM::Bond::potential

            typedef ::SireCAS::Expression ( ::SireMM::Bond::*potential_function_type)(  ) const;
            potential_function_type potential_function_value( &::SireMM::Bond::potential );

            Bond_exposer.def(
                "potential"
                , potential_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::potential

            typedef ::SireCAS::Expression ( ::SireMM::Bond::*potential_function_type)( ::SireBase::PropertyMap const & ) const;
            potential_function_type potential_function_value( &::SireMM::Bond::potential );

            Bond_exposer.def(
                "potential"
                , potential_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::properties

            typedef ::SireBase::Properties ( ::SireMM::Bond::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::Bond::properties );

            Bond_exposer.def(
                "properties"
                , properties_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::property

            typedef ::SireBase::Property const & ( ::SireMM::Bond::*property_function_type)( ::SireBase::PropertyName const & ) const;
            property_function_type property_function_value( &::SireMM::Bond::property );

            Bond_exposer.def(
                "property"
                , property_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::Bond::property

            typedef ::SireBase::Property const & ( ::SireMM::Bond::*property_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            property_function_type property_function_value( &::SireMM::Bond::property );

            Bond_exposer.def(
                "property"
                , property_function_value
                , ( bp::arg("key"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::Bond::propertyKeys

            typedef ::QStringList ( ::SireMM::Bond::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMM::Bond::propertyKeys );

            Bond_exposer.def(
                "propertyKeys"
                , propertyKeys_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::selectedAll

            typedef bool ( ::SireMM::Bond::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMM::Bond::selectedAll );

            Bond_exposer.def(
                "selectedAll"
                , selectedAll_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::selection

            typedef ::SireMol::AtomSelection ( ::SireMM::Bond::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMM::Bond::selection );

            Bond_exposer.def(
                "selection"
                , selection_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::selector

            typedef ::SireMM::SelectorBond ( ::SireMM::Bond::*selector_function_type)(  ) const;
            selector_function_type selector_function_value( &::SireMM::Bond::selector );

            Bond_exposer.def(
                "selector"
                , selector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::toSelector

            typedef ::SireMol::MolViewPtr ( ::SireMM::Bond::*toSelector_function_type)(  ) const;
            toSelector_function_type toSelector_function_value( &::SireMM::Bond::toSelector );

            Bond_exposer.def(
                "toSelector"
                , toSelector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::toString

            typedef ::QString ( ::SireMM::Bond::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::Bond::toString );

            Bond_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::Bond::typeName );

            Bond_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Bond::what

            typedef char const * ( ::SireMM::Bond::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::Bond::what );

            Bond_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Bond_exposer.staticmethod( "typeName" );
        Bond_exposer.def( "__copy__", &__copy__);
        Bond_exposer.def( "__deepcopy__", &__copy__);
        Bond_exposer.def( "clone", &__copy__);
        Bond_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::Bond >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Bond_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::Bond >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Bond_exposer.def_pickle(sire_pickle_suite< ::SireMM::Bond >());
        Bond_exposer.def( "__str__", &__str__< ::SireMM::Bond > );
        Bond_exposer.def( "__repr__", &__str__< ::SireMM::Bond > );
        Bond_exposer.def( "__len__", &__len_size< ::SireMM::Bond > );
    }

}
