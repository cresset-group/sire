// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Fahrenheit.pypp.hpp"

namespace bp = boost::python;

#include "temperature.h"

#include "temperature.h"

SireUnits::Fahrenheit __copy__(const SireUnits::Fahrenheit &other){ return SireUnits::Fahrenheit(other); }

#include "Helpers/str.hpp"

void register_Fahrenheit_class(){

    { //::SireUnits::Fahrenheit
        typedef bp::class_< SireUnits::Fahrenheit > Fahrenheit_exposer_t;
        Fahrenheit_exposer_t Fahrenheit_exposer = Fahrenheit_exposer_t( "Fahrenheit", bp::init< >() );
        bp::scope Fahrenheit_scope( Fahrenheit_exposer );
        Fahrenheit_exposer.def( bp::init< double >(( bp::arg("value") )) );
        Fahrenheit_exposer.def( bp::init< SireUnits::Dimension::Temperature const & >(( bp::arg("temp") )) );
        Fahrenheit_exposer.def( bp::init< SireUnits::Dimension::TempBase const & >(( bp::arg("other") )) );
        Fahrenheit_exposer.def( bp::init< SireUnits::Fahrenheit const & >(( bp::arg("other") )) );
        { //::SireUnits::Fahrenheit::convertFromInternal
        
            typedef double ( ::SireUnits::Fahrenheit::*convertFromInternal_function_type)( double ) const;
            convertFromInternal_function_type convertFromInternal_function_value( &::SireUnits::Fahrenheit::convertFromInternal );
            
            Fahrenheit_exposer.def( 
                "convertFromInternal"
                , convertFromInternal_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireUnits::Fahrenheit::convertFromInternal
        
            typedef double ( ::SireUnits::Fahrenheit::*convertFromInternal_function_type)(  ) const;
            convertFromInternal_function_type convertFromInternal_function_value( &::SireUnits::Fahrenheit::convertFromInternal );
            
            Fahrenheit_exposer.def( 
                "convertFromInternal"
                , convertFromInternal_function_value );
        
        }
        { //::SireUnits::Fahrenheit::convertToInternal
        
            typedef double ( ::SireUnits::Fahrenheit::*convertToInternal_function_type)( double ) const;
            convertToInternal_function_type convertToInternal_function_value( &::SireUnits::Fahrenheit::convertToInternal );
            
            Fahrenheit_exposer.def( 
                "convertToInternal"
                , convertToInternal_function_value
                , ( bp::arg("value") ) );
        
        }
        Fahrenheit_exposer.def( bp::self * bp::other< double >() );
        Fahrenheit_exposer.def( bp::self * bp::other< int >() );
        Fahrenheit_exposer.def( bp::self + bp::self );
        Fahrenheit_exposer.def( bp::self + bp::other< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 1, 0, 0 > >() );
        Fahrenheit_exposer.def( -bp::self );
        Fahrenheit_exposer.def( bp::self - bp::self );
        Fahrenheit_exposer.def( bp::self - bp::other< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 1, 0, 0 > >() );
        Fahrenheit_exposer.def( bp::self / bp::other< double >() );
        Fahrenheit_exposer.def( bp::self / bp::other< int >() );
        { //::SireUnits::Fahrenheit::operator=
        
            typedef ::SireUnits::Fahrenheit & ( ::SireUnits::Fahrenheit::*assign_function_type)( ::SireUnits::Fahrenheit const & ) ;
            assign_function_type assign_function_value( &::SireUnits::Fahrenheit::operator= );
            
            Fahrenheit_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireUnits::Fahrenheit::operator=
        
            typedef ::SireUnits::Fahrenheit & ( ::SireUnits::Fahrenheit::*assign_function_type)( ::SireUnits::Dimension::Temperature const & ) ;
            assign_function_type assign_function_value( &::SireUnits::Fahrenheit::operator= );
            
            Fahrenheit_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("temp") )
                , bp::return_self< >() );
        
        }
        Fahrenheit_exposer.def( bp::other<double>() * bp::self );
        Fahrenheit_exposer.def( bp::other<double>() / bp::self );
        Fahrenheit_exposer.def( "__copy__", &__copy__);
        Fahrenheit_exposer.def( "__deepcopy__", &__copy__);
        Fahrenheit_exposer.def( "clone", &__copy__);
        Fahrenheit_exposer.def( "__str__", &__str__< ::SireUnits::Fahrenheit > );
        Fahrenheit_exposer.def( "__repr__", &__str__< ::SireUnits::Fahrenheit > );
    }

}
