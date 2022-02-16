// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "TripleDistanceComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireVol/space.h"

#include "delta.h"

#include "distancecomponent.h"

#include "distancecomponent.h"

SireSystem::TripleDistanceComponent __copy__(const SireSystem::TripleDistanceComponent &other){ return SireSystem::TripleDistanceComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_TripleDistanceComponent_class(){

    { //::SireSystem::TripleDistanceComponent
        typedef bp::class_< SireSystem::TripleDistanceComponent, bp::bases< SireSystem::GeometryComponent, SireSystem::Constraint, SireBase::Property > > TripleDistanceComponent_exposer_t;
        TripleDistanceComponent_exposer_t TripleDistanceComponent_exposer = TripleDistanceComponent_exposer_t( "TripleDistanceComponent", "This is a constraint that constrains a symbol to equal the\nvalue of an expression that involves distances between\nthree pairs of atoms\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope TripleDistanceComponent_scope( TripleDistanceComponent_exposer );
        TripleDistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("point4"), bp::arg("point5"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\ndistance between the two points point0 and point1") );
        TripleDistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("point4"), bp::arg("point5"), bp::arg("geometry_expression"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\nexpression based on the distance between the two points\npoint0 and point1") );
        TripleDistanceComponent_exposer.def( bp::init< SireSystem::TripleDistanceComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::TripleDistanceComponent::nPoints
        
            typedef int ( ::SireSystem::TripleDistanceComponent::*nPoints_function_type)(  ) const;
            nPoints_function_type nPoints_function_value( &::SireSystem::TripleDistanceComponent::nPoints );
            
            TripleDistanceComponent_exposer.def( 
                "nPoints"
                , nPoints_function_value
                , "Return the number of points (6)" );
        
        }
        TripleDistanceComponent_exposer.def( bp::self != bp::self );
        { //::SireSystem::TripleDistanceComponent::operator=
        
            typedef ::SireSystem::TripleDistanceComponent & ( ::SireSystem::TripleDistanceComponent::*assign_function_type)( ::SireSystem::TripleDistanceComponent const & ) ;
            assign_function_type assign_function_value( &::SireSystem::TripleDistanceComponent::operator= );
            
            TripleDistanceComponent_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        TripleDistanceComponent_exposer.def( bp::self == bp::self );
        { //::SireSystem::TripleDistanceComponent::point
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireSystem::TripleDistanceComponent::point );
            
            TripleDistanceComponent_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the ith point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point0
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point0_function_type)(  ) const;
            point0_function_type point0_function_value( &::SireSystem::TripleDistanceComponent::point0 );
            
            TripleDistanceComponent_exposer.def( 
                "point0"
                , point0_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the first point between which the first distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point1
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point1_function_type)(  ) const;
            point1_function_type point1_function_value( &::SireSystem::TripleDistanceComponent::point1 );
            
            TripleDistanceComponent_exposer.def( 
                "point1"
                , point1_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the second point between which the first distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point2
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point2_function_type)(  ) const;
            point2_function_type point2_function_value( &::SireSystem::TripleDistanceComponent::point2 );
            
            TripleDistanceComponent_exposer.def( 
                "point2"
                , point2_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the first point between which the second distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point3
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point3_function_type)(  ) const;
            point3_function_type point3_function_value( &::SireSystem::TripleDistanceComponent::point3 );
            
            TripleDistanceComponent_exposer.def( 
                "point3"
                , point3_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the second point between which the second distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point4
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point4_function_type)(  ) const;
            point4_function_type point4_function_value( &::SireSystem::TripleDistanceComponent::point4 );
            
            TripleDistanceComponent_exposer.def( 
                "point4"
                , point4_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the first point between which the third distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::point5
        
            typedef ::SireFF::Point const & ( ::SireSystem::TripleDistanceComponent::*point5_function_type)(  ) const;
            point5_function_type point5_function_value( &::SireSystem::TripleDistanceComponent::point5 );
            
            TripleDistanceComponent_exposer.def( 
                "point5"
                , point5_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the second point between which the third distance is calculated" );
        
        }
        { //::SireSystem::TripleDistanceComponent::r01
        
            typedef ::SireCAS::Symbol const & ( *r01_function_type )(  );
            r01_function_type r01_function_value( &::SireSystem::TripleDistanceComponent::r01 );
            
            TripleDistanceComponent_exposer.def( 
                "r01"
                , r01_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\npoints .point0() and .point1() (r01)" );
        
        }
        { //::SireSystem::TripleDistanceComponent::r23
        
            typedef ::SireCAS::Symbol const & ( *r23_function_type )(  );
            r23_function_type r23_function_value( &::SireSystem::TripleDistanceComponent::r23 );
            
            TripleDistanceComponent_exposer.def( 
                "r23"
                , r23_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\npoints .point2() and .point3() (r23)" );
        
        }
        { //::SireSystem::TripleDistanceComponent::r45
        
            typedef ::SireCAS::Symbol const & ( *r45_function_type )(  );
            r45_function_type r45_function_value( &::SireSystem::TripleDistanceComponent::r45 );
            
            TripleDistanceComponent_exposer.def( 
                "r45"
                , r45_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\npoints .point4() and .point5() (r45)" );
        
        }
        { //::SireSystem::TripleDistanceComponent::toString
        
            typedef ::QString ( ::SireSystem::TripleDistanceComponent::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::TripleDistanceComponent::toString );
            
            TripleDistanceComponent_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireSystem::TripleDistanceComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::TripleDistanceComponent::typeName );
            
            TripleDistanceComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        TripleDistanceComponent_exposer.staticmethod( "r01" );
        TripleDistanceComponent_exposer.staticmethod( "r23" );
        TripleDistanceComponent_exposer.staticmethod( "r45" );
        TripleDistanceComponent_exposer.staticmethod( "typeName" );
        TripleDistanceComponent_exposer.def( "__copy__", &__copy__);
        TripleDistanceComponent_exposer.def( "__deepcopy__", &__copy__);
        TripleDistanceComponent_exposer.def( "clone", &__copy__);
        TripleDistanceComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::TripleDistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TripleDistanceComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::TripleDistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TripleDistanceComponent_exposer.def_pickle(sire_pickle_suite< ::SireSystem::TripleDistanceComponent >());
        TripleDistanceComponent_exposer.def( "__str__", &__str__< ::SireSystem::TripleDistanceComponent > );
        TripleDistanceComponent_exposer.def( "__repr__", &__str__< ::SireSystem::TripleDistanceComponent > );
    }

}
