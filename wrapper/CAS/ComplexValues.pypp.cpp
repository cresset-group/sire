// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ComplexValues.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "symbol.h"

#include "complexvalues.h"

SireCAS::ComplexValues __copy__(const SireCAS::ComplexValues &other){ return SireCAS::ComplexValues(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireCAS::ComplexValues&){ return "SireCAS::ComplexValues";}

void register_ComplexValues_class(){

    { //::SireCAS::ComplexValues
        typedef bp::class_< SireCAS::ComplexValues > ComplexValues_exposer_t;
        ComplexValues_exposer_t ComplexValues_exposer = ComplexValues_exposer_t( "ComplexValues", "\nThis class holds a set of Symbols and their associated complex values.\nThis is used when numerically evaluating an equation using complex maths.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty set of values") );
        bp::scope ComplexValues_scope( ComplexValues_exposer );
        ComplexValues_exposer.def( bp::init< QList< SireCAS::SymbolComplex > const & >(( bp::arg("values") ), "Construct from a list of values") );
        ComplexValues_exposer.def( bp::init< QHash< SireCAS::Symbol, SireMaths::Complex > const & >(( bp::arg("values") ), "Construct from a hash of values indexed by symbol") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const & >(( bp::arg("symval0") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7"), bp::arg("symval8") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const &, SireCAS::SymbolComplex const & >(( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7"), bp::arg("symval8"), bp::arg("symval9") ), "Construct from the passed values") );
        ComplexValues_exposer.def( bp::init< SireCAS::Values const & >(( bp::arg("other") ), "Construct from Values") );
        ComplexValues_exposer.def( bp::init< SireCAS::ComplexValues const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0") )
                , "" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7"), bp::arg("symval8") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::add
        
            typedef void ( ::SireCAS::ComplexValues::*add_function_type)( ::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const &,::SireCAS::SymbolComplex const & ) ;
            add_function_type add_function_value( &::SireCAS::ComplexValues::add );
            
            ComplexValues_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symval0"), bp::arg("symval1"), bp::arg("symval2"), bp::arg("symval3"), bp::arg("symval4"), bp::arg("symval5"), bp::arg("symval6"), bp::arg("symval7"), bp::arg("symval8"), bp::arg("symval9") )
                , "Add the passed values" );
        
        }
        { //::SireCAS::ComplexValues::set
        
            typedef void ( ::SireCAS::ComplexValues::*set_function_type)( ::SireCAS::Symbol const &,::SireMaths::Complex const & ) ;
            set_function_type set_function_value( &::SireCAS::ComplexValues::set );
            
            ComplexValues_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("symbol"), bp::arg("value") )
                , "" );
        
        }
        { //::SireCAS::ComplexValues::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ComplexValues::typeName );
            
            ComplexValues_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::ComplexValues::value
        
            typedef ::SireMaths::Complex ( ::SireCAS::ComplexValues::*value_function_type)( ::SireCAS::Symbol const & ) const;
            value_function_type value_function_value( &::SireCAS::ComplexValues::value );
            
            ComplexValues_exposer.def( 
                "value"
                , value_function_value
                , ( bp::arg("sym") )
                , "Return the value of the Symbol with ID id, or 0.0 if there is no such symbol" );
        
        }
        { //::SireCAS::ComplexValues::values
        
            typedef ::QHash< unsigned int, SireMaths::Complex > const & ( ::SireCAS::ComplexValues::*values_function_type)(  ) const;
            values_function_type values_function_value( &::SireCAS::ComplexValues::values );
            
            ComplexValues_exposer.def( 
                "values"
                , values_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireCAS::ComplexValues::what
        
            typedef char const * ( ::SireCAS::ComplexValues::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ComplexValues::what );
            
            ComplexValues_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ComplexValues_exposer.staticmethod( "typeName" );
        ComplexValues_exposer.def( "__copy__", &__copy__);
        ComplexValues_exposer.def( "__deepcopy__", &__copy__);
        ComplexValues_exposer.def( "clone", &__copy__);
        ComplexValues_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ComplexValues >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ComplexValues_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ComplexValues >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ComplexValues_exposer.def( "__str__", &pvt_get_name);
        ComplexValues_exposer.def( "__repr__", &pvt_get_name);
    }

}
