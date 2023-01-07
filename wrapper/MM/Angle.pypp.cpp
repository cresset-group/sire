// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Angle.pypp.hpp"

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

#include "angle.h"

#include "selectorangle.h"

#include "threeatomfunctions.h"

#include <QDebug>

#include "angle.h"

SireMM::Angle __copy__(const SireMM::Angle &other){ return SireMM::Angle(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Angle_class(){

    { //::SireMM::Angle
        typedef bp::class_< SireMM::Angle, bp::bases< SireMol::MoleculeView, SireBase::Property > > Angle_exposer_t;
        Angle_exposer_t Angle_exposer = Angle_exposer_t( "Angle", "This class provides a molecule view to an angle", bp::init< >("") );
        bp::scope Angle_scope( Angle_exposer );
        Angle_exposer.def( bp::init< SireMol::Atom const &, SireMol::Atom const &, SireMol::Atom const & >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") ), "") );
        Angle_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const & >(( bp::arg("molview"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") ), "") );
        Angle_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const & >(( bp::arg("moldata"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") ), "") );
        Angle_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AngleID const & >(( bp::arg("moldata"), bp::arg("angle") ), "") );
        Angle_exposer.def( bp::init< SireMM::Angle const & >(( bp::arg("other") ), "") );
        { //::SireMM::Angle::ID

            typedef ::SireMol::AngleID ( ::SireMM::Angle::*ID_function_type)(  ) const;
            ID_function_type ID_function_value( &::SireMM::Angle::ID );

            Angle_exposer.def(
                "ID"
                , ID_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::atom0

            typedef ::SireMol::Atom ( ::SireMM::Angle::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::Angle::atom0 );

            Angle_exposer.def(
                "atom0"
                , atom0_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::atom1

            typedef ::SireMol::Atom ( ::SireMM::Angle::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::Angle::atom1 );

            Angle_exposer.def(
                "atom1"
                , atom1_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::atom2

            typedef ::SireMol::Atom ( ::SireMM::Angle::*atom2_function_type)(  ) const;
            atom2_function_type atom2_function_value( &::SireMM::Angle::atom2 );

            Angle_exposer.def(
                "atom2"
                , atom2_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::energy

            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::Angle::*energy_function_type)(  ) const;
            energy_function_type energy_function_value( &::SireMM::Angle::energy );

            Angle_exposer.def(
                "energy"
                , energy_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::energy

            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::Angle::*energy_function_type)( ::SireBase::PropertyMap const & ) const;
            energy_function_type energy_function_value( &::SireMM::Angle::energy );

            Angle_exposer.def(
                "energy"
                , energy_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::evaluate

            typedef ::SireMol::Evaluator ( ::SireMM::Angle::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMM::Angle::evaluate );

            Angle_exposer.def(
                "evaluate"
                , evaluate_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::hasMetadata

            typedef bool ( ::SireMM::Angle::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::Angle::hasMetadata );

            Angle_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::hasMetadata

            typedef bool ( ::SireMM::Angle::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::Angle::hasMetadata );

            Angle_exposer.def(
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::hasProperty

            typedef bool ( ::SireMM::Angle::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMM::Angle::hasProperty );

            Angle_exposer.def(
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::invert

            typedef ::SireMM::SelectorAngle ( ::SireMM::Angle::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMM::Angle::invert );

            Angle_exposer.def(
                "invert"
                , invert_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::isEmpty

            typedef bool ( ::SireMM::Angle::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::Angle::isEmpty );

            Angle_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::measure

            typedef ::SireUnits::Dimension::Angle ( ::SireMM::Angle::*measure_function_type)(  ) const;
            measure_function_type measure_function_value( &::SireMM::Angle::measure );

            Angle_exposer.def(
                "measure"
                , measure_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::measure

            typedef ::SireUnits::Dimension::Angle ( ::SireMM::Angle::*measure_function_type)( ::SireBase::PropertyMap const & ) const;
            measure_function_type measure_function_value( &::SireMM::Angle::measure );

            Angle_exposer.def(
                "measure"
                , measure_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::metadataKeys

            typedef ::QStringList ( ::SireMM::Angle::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::Angle::metadataKeys );

            Angle_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::metadataKeys

            typedef ::QStringList ( ::SireMM::Angle::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::Angle::metadataKeys );

            Angle_exposer.def(
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::move

            typedef ::SireMol::Mover< SireMM::Angle > ( ::SireMM::Angle::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMM::Angle::move );

            Angle_exposer.def(
                "move"
                , move_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Angle_exposer.def( bp::self != bp::self );
        { //::SireMM::Angle::operator=

            typedef ::SireMM::Angle & ( ::SireMM::Angle::*assign_function_type)( ::SireMM::Angle const & ) ;
            assign_function_type assign_function_value( &::SireMM::Angle::operator= );

            Angle_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        Angle_exposer.def( bp::self == bp::self );
        { //::SireMM::Angle::potential

            typedef ::SireCAS::Expression ( ::SireMM::Angle::*potential_function_type)(  ) const;
            potential_function_type potential_function_value( &::SireMM::Angle::potential );

            Angle_exposer.def(
                "potential"
                , potential_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::potential

            typedef ::SireCAS::Expression ( ::SireMM::Angle::*potential_function_type)( ::SireBase::PropertyMap const & ) const;
            potential_function_type potential_function_value( &::SireMM::Angle::potential );

            Angle_exposer.def(
                "potential"
                , potential_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::properties

            typedef ::SireBase::Properties ( ::SireMM::Angle::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::Angle::properties );

            Angle_exposer.def(
                "properties"
                , properties_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::property

            typedef ::SireBase::Property const & ( ::SireMM::Angle::*property_function_type)( ::SireBase::PropertyName const & ) const;
            property_function_type property_function_value( &::SireMM::Angle::property );

            Angle_exposer.def(
                "property"
                , property_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::Angle::property

            typedef ::SireBase::Property const & ( ::SireMM::Angle::*property_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            property_function_type property_function_value( &::SireMM::Angle::property );

            Angle_exposer.def(
                "property"
                , property_function_value
                , ( bp::arg("key"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::Angle::propertyKeys

            typedef ::QStringList ( ::SireMM::Angle::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMM::Angle::propertyKeys );

            Angle_exposer.def(
                "propertyKeys"
                , propertyKeys_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::selectedAll

            typedef bool ( ::SireMM::Angle::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMM::Angle::selectedAll );

            Angle_exposer.def(
                "selectedAll"
                , selectedAll_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::selection

            typedef ::SireMol::AtomSelection ( ::SireMM::Angle::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMM::Angle::selection );

            Angle_exposer.def(
                "selection"
                , selection_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::selector

            typedef ::SireMM::SelectorAngle ( ::SireMM::Angle::*selector_function_type)(  ) const;
            selector_function_type selector_function_value( &::SireMM::Angle::selector );

            Angle_exposer.def(
                "selector"
                , selector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::size

            typedef ::SireUnits::Dimension::Angle ( ::SireMM::Angle::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMM::Angle::size );

            Angle_exposer.def(
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::size

            typedef ::SireUnits::Dimension::Angle ( ::SireMM::Angle::*size_function_type)( ::SireBase::PropertyMap const & ) const;
            size_function_type size_function_value( &::SireMM::Angle::size );

            Angle_exposer.def(
                "size"
                , size_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::toSelector

            typedef ::SireMol::MolViewPtr ( ::SireMM::Angle::*toSelector_function_type)(  ) const;
            toSelector_function_type toSelector_function_value( &::SireMM::Angle::toSelector );

            Angle_exposer.def(
                "toSelector"
                , toSelector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::toString

            typedef ::QString ( ::SireMM::Angle::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::Angle::toString );

            Angle_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::Angle::typeName );

            Angle_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::Angle::what

            typedef char const * ( ::SireMM::Angle::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::Angle::what );

            Angle_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Angle_exposer.staticmethod( "typeName" );
        Angle_exposer.def( "__copy__", &__copy__);
        Angle_exposer.def( "__deepcopy__", &__copy__);
        Angle_exposer.def( "clone", &__copy__);
        Angle_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::Angle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Angle_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::Angle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Angle_exposer.def_pickle(sire_pickle_suite< ::SireMM::Angle >());
        Angle_exposer.def( "__str__", &__str__< ::SireMM::Angle > );
        Angle_exposer.def( "__repr__", &__str__< ::SireMM::Angle > );
        Angle_exposer.def( "__len__", &__len_size< ::SireMM::Angle > );
    }

}
