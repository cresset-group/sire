// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Torsion.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "torsion.h"

#include "torsion.h"

SireMaths::Torsion __copy__(const SireMaths::Torsion &other){ return SireMaths::Torsion(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Torsion_class(){

    { //::SireMaths::Torsion
        typedef bp::class_< SireMaths::Torsion > Torsion_exposer_t;
        Torsion_exposer_t Torsion_exposer = Torsion_exposer_t( "Torsion", "\nThis class represents a torsion in three dimensional space, e.g. four points\nin space, not necessarily lying in a plane. A torsion is used to calculate\ndihedral angles (imagine each point is an atom). I am not happy with the\nname of this class, and welcome suggestions :-)\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a zero torsion") );
        bp::scope Torsion_scope( Torsion_exposer );
        Torsion_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Vector const &, SireMaths::Vector const &, SireMaths::Vector const & >(( bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3") ), "Construct a torsion from the points 0 to 4") );
        { //::SireMaths::Torsion::angle
        
            typedef ::SireUnits::Dimension::Angle ( ::SireMaths::Torsion::*angle_function_type)(  ) const;
            angle_function_type angle_function_value( &::SireMaths::Torsion::angle );
            
            Torsion_exposer.def( 
                "angle"
                , angle_function_value
                , bp::release_gil_policy()
                , "Return the torsion angle of this torsion (the torsion angle 0-1-2-3\naround the 1-2 line)" );
        
        }
        { //::SireMaths::Torsion::at
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::Torsion::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMaths::Torsion::at );
            
            Torsion_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the point at index i" );
        
        }
        { //::SireMaths::Torsion::count
        
            typedef int ( ::SireMaths::Torsion::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMaths::Torsion::count );
            
            Torsion_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "Return the number of points in a torsion (4)" );
        
        }
        { //::SireMaths::Torsion::improperAngle
        
            typedef ::SireUnits::Dimension::Angle ( ::SireMaths::Torsion::*improperAngle_function_type)(  ) const;
            improperAngle_function_type improperAngle_function_value( &::SireMaths::Torsion::improperAngle );
            
            Torsion_exposer.def( 
                "improperAngle"
                , improperAngle_function_value
                , bp::release_gil_policy()
                , "Return the improper angle of this torsion (the acute angle between the\nvector 0-1 and the plane formed by 1-2-3)" );
        
        }
        { //::SireMaths::Torsion::line03
        
            typedef ::SireMaths::Line ( ::SireMaths::Torsion::*line03_function_type)(  ) const;
            line03_function_type line03_function_value( &::SireMaths::Torsion::line03 );
            
            Torsion_exposer.def( 
                "line03"
                , line03_function_value
                , bp::release_gil_policy()
                , "Return the line from point 0 to point 3" );
        
        }
        { //::SireMaths::Torsion::line12
        
            typedef ::SireMaths::Line ( ::SireMaths::Torsion::*line12_function_type)(  ) const;
            line12_function_type line12_function_value( &::SireMaths::Torsion::line12 );
            
            Torsion_exposer.def( 
                "line12"
                , line12_function_value
                , bp::release_gil_policy()
                , "Return the line from point 1 to point 2" );
        
        }
        { //::SireMaths::Torsion::operator[]
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::Torsion::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMaths::Torsion::operator[] );
            
            Torsion_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Torsion::point
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::Torsion::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireMaths::Torsion::point );
            
            Torsion_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the point at index i" );
        
        }
        { //::SireMaths::Torsion::toString
        
            typedef ::QString ( ::SireMaths::Torsion::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Torsion::toString );
            
            Torsion_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this torsion" );
        
        }
        { //::SireMaths::Torsion::triangle1
        
            typedef ::SireMaths::Triangle ( ::SireMaths::Torsion::*triangle1_function_type)(  ) const;
            triangle1_function_type triangle1_function_value( &::SireMaths::Torsion::triangle1 );
            
            Torsion_exposer.def( 
                "triangle1"
                , triangle1_function_value
                , bp::release_gil_policy()
                , "Return the triangle around point 1, i.e. point0-point1-point2" );
        
        }
        { //::SireMaths::Torsion::triangle2
        
            typedef ::SireMaths::Triangle ( ::SireMaths::Torsion::*triangle2_function_type)(  ) const;
            triangle2_function_type triangle2_function_value( &::SireMaths::Torsion::triangle2 );
            
            Torsion_exposer.def( 
                "triangle2"
                , triangle2_function_value
                , bp::release_gil_policy()
                , "Return the triangle around point 2, i.e. point1-point2-point3" );
        
        }
        { //::SireMaths::Torsion::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Torsion::typeName );
            
            Torsion_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Torsion::vector03
        
            typedef ::SireMaths::Vector ( ::SireMaths::Torsion::*vector03_function_type)(  ) const;
            vector03_function_type vector03_function_value( &::SireMaths::Torsion::vector03 );
            
            Torsion_exposer.def( 
                "vector03"
                , vector03_function_value
                , bp::release_gil_policy()
                , "Return the vector from point 0 to point 3" );
        
        }
        { //::SireMaths::Torsion::vector12
        
            typedef ::SireMaths::Vector ( ::SireMaths::Torsion::*vector12_function_type)(  ) const;
            vector12_function_type vector12_function_value( &::SireMaths::Torsion::vector12 );
            
            Torsion_exposer.def( 
                "vector12"
                , vector12_function_value
                , bp::release_gil_policy()
                , "Return the vector from point 1 to point 2" );
        
        }
        { //::SireMaths::Torsion::what
        
            typedef char const * ( ::SireMaths::Torsion::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::Torsion::what );
            
            Torsion_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Torsion_exposer.staticmethod( "typeName" );
        Torsion_exposer.def( "__copy__", &__copy__);
        Torsion_exposer.def( "__deepcopy__", &__copy__);
        Torsion_exposer.def( "clone", &__copy__);
        Torsion_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Torsion >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Torsion_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Torsion >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Torsion_exposer.def_pickle(sire_pickle_suite< ::SireMaths::Torsion >());
        Torsion_exposer.def( "__str__", &__str__< ::SireMaths::Torsion > );
        Torsion_exposer.def( "__repr__", &__str__< ::SireMaths::Torsion > );
        Torsion_exposer.def( "__len__", &__len_count< ::SireMaths::Torsion > );
    }

}
