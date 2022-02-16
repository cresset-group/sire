// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SingleFunc.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "identities.h"

#include "singlefunc.h"

#include "values.h"

#include "singlefunc.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_SingleFunc_class(){

    { //::SireCAS::SingleFunc
        typedef bp::class_< SireCAS::SingleFunc, bp::bases< SireCAS::ExBase >, boost::noncopyable > SingleFunc_exposer_t;
        SingleFunc_exposer_t SingleFunc_exposer = SingleFunc_exposer_t( "SingleFunc", "Base class of all single-expression functions (e.g. g( f(??) ))\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope SingleFunc_scope( SingleFunc_exposer );
        { //::SireCAS::SingleFunc::argument
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::SingleFunc::*argument_function_type)(  ) const;
            argument_function_type argument_function_value( &::SireCAS::SingleFunc::argument );
            
            SingleFunc_exposer.def( 
                "argument"
                , argument_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireCAS::SingleFunc::children
        
            typedef ::SireCAS::Expressions ( ::SireCAS::SingleFunc::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireCAS::SingleFunc::children );
            
            SingleFunc_exposer.def( 
                "children"
                , children_function_value
                , "Return the child expression of this function" );
        
        }
        { //::SireCAS::SingleFunc::conjugate
        
            typedef ::SireCAS::Expression ( ::SireCAS::SingleFunc::*conjugate_function_type)(  ) const;
            conjugate_function_type conjugate_function_value( &::SireCAS::SingleFunc::conjugate );
            
            SingleFunc_exposer.def( 
                "conjugate"
                , conjugate_function_value
                , "Return the conjugate of this function" );
        
        }
        { //::SireCAS::SingleFunc::differentiate
        
            typedef ::SireCAS::Expression ( ::SireCAS::SingleFunc::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::SingleFunc::differentiate );
            
            SingleFunc_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") )
                , "Return the differential of this function with respect to symbol" );
        
        }
        { //::SireCAS::SingleFunc::expand
        
            typedef ::QList< SireCAS::Factor > ( ::SireCAS::SingleFunc::*expand_function_type)( ::SireCAS::Symbol const & ) const;
            expand_function_type expand_function_value( &::SireCAS::SingleFunc::expand );
            
            SingleFunc_exposer.def( 
                "expand"
                , expand_function_value
                , ( bp::arg("symbol") )
                , "" );
        
        }
        { //::SireCAS::SingleFunc::functions
        
            typedef ::SireCAS::Functions ( ::SireCAS::SingleFunc::*functions_function_type)(  ) const;
            functions_function_type functions_function_value( &::SireCAS::SingleFunc::functions );
            
            SingleFunc_exposer.def( 
                "functions"
                , functions_function_value
                , "Return the functions used in this function" );
        
        }
        { //::SireCAS::SingleFunc::hash
        
            typedef ::uint ( ::SireCAS::SingleFunc::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::SingleFunc::hash );
            
            SingleFunc_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireCAS::SingleFunc::integrate
        
            typedef ::SireCAS::Expression ( ::SireCAS::SingleFunc::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::SingleFunc::integrate );
            
            SingleFunc_exposer.def( 
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") )
                , "Return the integral of this function with respect to symbol" );
        
        }
        { //::SireCAS::SingleFunc::isComplex
        
            typedef bool ( ::SireCAS::SingleFunc::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::SingleFunc::isComplex );
            
            SingleFunc_exposer.def( 
                "isComplex"
                , isComplex_function_value
                , "Return whether this is complex" );
        
        }
        { //::SireCAS::SingleFunc::isCompound
        
            typedef bool ( ::SireCAS::SingleFunc::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::SingleFunc::isCompound );
            
            SingleFunc_exposer.def( 
                "isCompound"
                , isCompound_function_value
                , "A function is not compound" );
        
        }
        { //::SireCAS::SingleFunc::isConstant
        
            typedef bool ( ::SireCAS::SingleFunc::*isConstant_function_type)(  ) const;
            isConstant_function_type isConstant_function_value( &::SireCAS::SingleFunc::isConstant );
            
            SingleFunc_exposer.def( 
                "isConstant"
                , isConstant_function_value
                , "Return whether or not this is constant" );
        
        }
        { //::SireCAS::SingleFunc::isFunction
        
            typedef bool ( ::SireCAS::SingleFunc::*isFunction_function_type)( ::SireCAS::Symbol const & ) const;
            isFunction_function_type isFunction_function_value( &::SireCAS::SingleFunc::isFunction );
            
            SingleFunc_exposer.def( 
                "isFunction"
                , isFunction_function_value
                , ( bp::arg("symbol") )
                , "Return if this is a function of symbol" );
        
        }
        { //::SireCAS::SingleFunc::operator=
        
            typedef ::SireCAS::SingleFunc & ( ::SireCAS::SingleFunc::*assign_function_type)( ::SireCAS::SingleFunc const & ) ;
            assign_function_type assign_function_value( &::SireCAS::SingleFunc::operator= );
            
            SingleFunc_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireCAS::SingleFunc::substitute
        
            typedef ::SireCAS::Expression ( ::SireCAS::SingleFunc::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireCAS::SingleFunc::substitute );
            
            SingleFunc_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , "Substitute into this expression" );
        
        }
        { //::SireCAS::SingleFunc::symbols
        
            typedef ::SireCAS::Symbols ( ::SireCAS::SingleFunc::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::SingleFunc::symbols );
            
            SingleFunc_exposer.def( 
                "symbols"
                , symbols_function_value
                , "Return the symbols used in this function" );
        
        }
        { //::SireCAS::SingleFunc::toOpenMMString
        
            typedef ::QString ( ::SireCAS::SingleFunc::*toOpenMMString_function_type)(  ) const;
            toOpenMMString_function_type toOpenMMString_function_value( &::SireCAS::SingleFunc::toOpenMMString );
            
            SingleFunc_exposer.def( 
                "toOpenMMString"
                , toOpenMMString_function_value
                , "Return a string representation of this function in the OpenMM syntax" );
        
        }
        { //::SireCAS::SingleFunc::toString
        
            typedef ::QString ( ::SireCAS::SingleFunc::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::SingleFunc::toString );
            
            SingleFunc_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this function" );
        
        }
        { //::SireCAS::SingleFunc::x
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::SingleFunc::*x_function_type)(  ) const;
            x_function_type x_function_value( &::SireCAS::SingleFunc::x );
            
            SingleFunc_exposer.def( 
                "x"
                , x_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        SingleFunc_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::SingleFunc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SingleFunc_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::SingleFunc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SingleFunc_exposer.def_pickle(sire_pickle_suite< ::SireCAS::SingleFunc >());
        SingleFunc_exposer.def( "__str__", &__str__< ::SireCAS::SingleFunc > );
        SingleFunc_exposer.def( "__repr__", &__str__< ::SireCAS::SingleFunc > );
        SingleFunc_exposer.def( "__hash__", &::SireCAS::SingleFunc::hash );
    }

}
