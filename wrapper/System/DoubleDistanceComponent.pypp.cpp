// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "DoubleDistanceComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireVol/space.h"

#include "delta.h"

#include "distancecomponent.h"

#include "distancecomponent.h"

SireSystem::DoubleDistanceComponent __copy__(const SireSystem::DoubleDistanceComponent &other){ return SireSystem::DoubleDistanceComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_DoubleDistanceComponent_class(){

    { //::SireSystem::DoubleDistanceComponent
        typedef bp::class_< SireSystem::DoubleDistanceComponent, bp::bases< SireSystem::GeometryComponent, SireSystem::Constraint, SireBase::Property > > DoubleDistanceComponent_exposer_t;
        DoubleDistanceComponent_exposer_t DoubleDistanceComponent_exposer = DoubleDistanceComponent_exposer_t( "DoubleDistanceComponent", "This is a constraint that constrains a symbol to equal the\nvalue of an expression that involves a distance between\ntwo pairs of atoms\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope DoubleDistanceComponent_scope( DoubleDistanceComponent_exposer );
        DoubleDistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\ndistance between the two points point0 and point1") );
        DoubleDistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("geometry_expression"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\nexpression based on the distance between the two points\npoint0 and point1") );
        DoubleDistanceComponent_exposer.def( bp::init< SireSystem::DoubleDistanceComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::DoubleDistanceComponent::nPoints

            typedef int ( ::SireSystem::DoubleDistanceComponent::*nPoints_function_type)(  ) const;
            nPoints_function_type nPoints_function_value( &::SireSystem::DoubleDistanceComponent::nPoints );

            DoubleDistanceComponent_exposer.def(
                "nPoints"
                , nPoints_function_value
                , bp::release_gil_policy()
                , "Return the number of points (4)" );

        }
        DoubleDistanceComponent_exposer.def( bp::self != bp::self );
        { //::SireSystem::DoubleDistanceComponent::operator=

            typedef ::SireSystem::DoubleDistanceComponent & ( ::SireSystem::DoubleDistanceComponent::*assign_function_type)( ::SireSystem::DoubleDistanceComponent const & ) ;
            assign_function_type assign_function_value( &::SireSystem::DoubleDistanceComponent::operator= );

            DoubleDistanceComponent_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        DoubleDistanceComponent_exposer.def( bp::self == bp::self );
        { //::SireSystem::DoubleDistanceComponent::point

            typedef ::SireFF::Point const & ( ::SireSystem::DoubleDistanceComponent::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireSystem::DoubleDistanceComponent::point );

            DoubleDistanceComponent_exposer.def(
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the ith point\nThrow: SireError::invalid_index\n" );

        }
        { //::SireSystem::DoubleDistanceComponent::point0

            typedef ::SireFF::Point const & ( ::SireSystem::DoubleDistanceComponent::*point0_function_type)(  ) const;
            point0_function_type point0_function_value( &::SireSystem::DoubleDistanceComponent::point0 );

            DoubleDistanceComponent_exposer.def(
                "point0"
                , point0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the first point between which the first distance is calculated" );

        }
        { //::SireSystem::DoubleDistanceComponent::point1

            typedef ::SireFF::Point const & ( ::SireSystem::DoubleDistanceComponent::*point1_function_type)(  ) const;
            point1_function_type point1_function_value( &::SireSystem::DoubleDistanceComponent::point1 );

            DoubleDistanceComponent_exposer.def(
                "point1"
                , point1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the second point between which the first distance is calculated" );

        }
        { //::SireSystem::DoubleDistanceComponent::point2

            typedef ::SireFF::Point const & ( ::SireSystem::DoubleDistanceComponent::*point2_function_type)(  ) const;
            point2_function_type point2_function_value( &::SireSystem::DoubleDistanceComponent::point2 );

            DoubleDistanceComponent_exposer.def(
                "point2"
                , point2_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the first point between which the second distance is calculated" );

        }
        { //::SireSystem::DoubleDistanceComponent::point3

            typedef ::SireFF::Point const & ( ::SireSystem::DoubleDistanceComponent::*point3_function_type)(  ) const;
            point3_function_type point3_function_value( &::SireSystem::DoubleDistanceComponent::point3 );

            DoubleDistanceComponent_exposer.def(
                "point3"
                , point3_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the second point between which the second distance is calculated" );

        }
        { //::SireSystem::DoubleDistanceComponent::r01

            typedef ::SireCAS::Symbol const & ( *r01_function_type )(  );
            r01_function_type r01_function_value( &::SireSystem::DoubleDistanceComponent::r01 );

            DoubleDistanceComponent_exposer.def(
                "r01"
                , r01_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the symbol that represents the distance between the\npoints .point0() and .point1() (r01)" );

        }
        { //::SireSystem::DoubleDistanceComponent::r23

            typedef ::SireCAS::Symbol const & ( *r23_function_type )(  );
            r23_function_type r23_function_value( &::SireSystem::DoubleDistanceComponent::r23 );

            DoubleDistanceComponent_exposer.def(
                "r23"
                , r23_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the symbol that represents the distance between the\npoints .point2() and .point2() (r23)" );

        }
        { //::SireSystem::DoubleDistanceComponent::toString

            typedef ::QString ( ::SireSystem::DoubleDistanceComponent::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::DoubleDistanceComponent::toString );

            DoubleDistanceComponent_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireSystem::DoubleDistanceComponent::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::DoubleDistanceComponent::typeName );

            DoubleDistanceComponent_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        DoubleDistanceComponent_exposer.staticmethod( "r01" );
        DoubleDistanceComponent_exposer.staticmethod( "r23" );
        DoubleDistanceComponent_exposer.staticmethod( "typeName" );
        DoubleDistanceComponent_exposer.def( "__copy__", &__copy__);
        DoubleDistanceComponent_exposer.def( "__deepcopy__", &__copy__);
        DoubleDistanceComponent_exposer.def( "clone", &__copy__);
        DoubleDistanceComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::DoubleDistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleDistanceComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::DoubleDistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleDistanceComponent_exposer.def_pickle(sire_pickle_suite< ::SireSystem::DoubleDistanceComponent >());
        DoubleDistanceComponent_exposer.def( "__str__", &__str__< ::SireSystem::DoubleDistanceComponent > );
        DoubleDistanceComponent_exposer.def( "__repr__", &__str__< ::SireSystem::DoubleDistanceComponent > );
    }

}
