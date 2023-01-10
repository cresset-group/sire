// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "IntegerPower.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expression.h"

#include "expressions.h"

#include "identities.h"

#include "integrationconstant.h"

#include "powerconstant.h"

#include "symbol.h"

#include "symbols.h"

#include "values.h"

#include <QDebug>

#include "powerconstant.h"

SireCAS::IntegerPower __copy__(const SireCAS::IntegerPower &other){ return SireCAS::IntegerPower(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_IntegerPower_class(){

    { //::SireCAS::IntegerPower
        typedef bp::class_< SireCAS::IntegerPower, bp::bases< SireCAS::PowerFunction, SireCAS::ExBase > > IntegerPower_exposer_t;
        IntegerPower_exposer_t IntegerPower_exposer = IntegerPower_exposer_t( "IntegerPower", "This class represents an expression raised to a constant integer power", bp::init< >("Null constructor") );
        bp::scope IntegerPower_scope( IntegerPower_exposer );
        IntegerPower_exposer.def( bp::init< SireCAS::Expression const &, int >(( bp::arg("expression"), bp::arg("power") ), "Construct expression^power") );
        IntegerPower_exposer.def( bp::init< SireCAS::IntegerPower const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::IntegerPower::evaluate
        
            typedef double ( ::SireCAS::IntegerPower::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::IntegerPower::evaluate );
            
            IntegerPower_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this power" );
        
        }
        { //::SireCAS::IntegerPower::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::IntegerPower::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::IntegerPower::evaluate );
            
            IntegerPower_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this power" );
        
        }
        { //::SireCAS::IntegerPower::hash
        
            typedef ::uint ( ::SireCAS::IntegerPower::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::IntegerPower::hash );
            
            IntegerPower_exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "Return a hash of this power" );
        
        }
        IntegerPower_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::IntegerPower::power
        
            typedef ::SireCAS::Expression ( ::SireCAS::IntegerPower::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::IntegerPower::power );
            
            IntegerPower_exposer.def( 
                "power"
                , power_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::IntegerPower::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::IntegerPower::typeName );
            
            IntegerPower_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::IntegerPower::what
        
            typedef char const * ( ::SireCAS::IntegerPower::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::IntegerPower::what );
            
            IntegerPower_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IntegerPower_exposer.staticmethod( "typeName" );
        IntegerPower_exposer.def( "__copy__", &__copy__);
        IntegerPower_exposer.def( "__deepcopy__", &__copy__);
        IntegerPower_exposer.def( "clone", &__copy__);
        IntegerPower_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::IntegerPower >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntegerPower_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::IntegerPower >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntegerPower_exposer.def_pickle(sire_pickle_suite< ::SireCAS::IntegerPower >());
        IntegerPower_exposer.def( "__str__", &__str__< ::SireCAS::IntegerPower > );
        IntegerPower_exposer.def( "__repr__", &__str__< ::SireCAS::IntegerPower > );
        IntegerPower_exposer.def( "__hash__", &::SireCAS::IntegerPower::hash );
    }

}
