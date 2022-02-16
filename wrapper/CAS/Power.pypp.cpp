// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Power.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireError/errors.h"

#include "SireMaths/complex.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "identities.h"

#include "integrationconstant.h"

#include "power.h"

#include "powerconstant.h"

#include "values.h"

#include <QDebug>

#include "power.h"

SireCAS::Power __copy__(const SireCAS::Power &other){ return SireCAS::Power(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Power_class(){

    { //::SireCAS::Power
        typedef bp::class_< SireCAS::Power, bp::bases< SireCAS::PowerFunction, SireCAS::ExBase > > Power_exposer_t;
        Power_exposer_t Power_exposer = Power_exposer_t( "Power", "\nThis class represents an expression raised to a generic power (e.g. x^y). This is also the route to raising expressions to real-number powers, and the base of the implementation of the exp() and invlog_10() functions.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a null power") );
        bp::scope Power_scope( Power_exposer );
        Power_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("base"), bp::arg("power") ), "Construct a power that represents core^power") );
        Power_exposer.def( bp::init< SireCAS::Power const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::Power::core
        
            typedef ::SireCAS::Expression ( ::SireCAS::Power::*core_function_type)(  ) const;
            core_function_type core_function_value( &::SireCAS::Power::core );
            
            Power_exposer.def( 
                "core"
                , core_function_value
                , "" );
        
        }
        { //::SireCAS::Power::evaluate
        
            typedef double ( ::SireCAS::Power::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Power::evaluate );
            
            Power_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this power - this could be dodgy for negative bases with\nnon-integer powers" );
        
        }
        { //::SireCAS::Power::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Power::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Power::evaluate );
            
            Power_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this power - this could be dodgy for negative bases with\nnon-integer powers" );
        
        }
        { //::SireCAS::Power::hash
        
            typedef ::uint ( ::SireCAS::Power::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::Power::hash );
            
            Power_exposer.def( 
                "hash"
                , hash_function_value
                , "Return a hash for this power" );
        
        }
        { //::SireCAS::Power::isCompound
        
            typedef bool ( ::SireCAS::Power::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::Power::isCompound );
            
            Power_exposer.def( 
                "isCompound"
                , isCompound_function_value
                , "" );
        
        }
        Power_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Power::power
        
            typedef ::SireCAS::Expression ( ::SireCAS::Power::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::Power::power );
            
            Power_exposer.def( 
                "power"
                , power_function_value
                , "" );
        
        }
        { //::SireCAS::Power::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Power::typeName );
            
            Power_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::Power::what
        
            typedef char const * ( ::SireCAS::Power::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Power::what );
            
            Power_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        Power_exposer.staticmethod( "typeName" );
        Power_exposer.def( "__copy__", &__copy__);
        Power_exposer.def( "__deepcopy__", &__copy__);
        Power_exposer.def( "clone", &__copy__);
        Power_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Power >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Power_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Power >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Power_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Power >());
        Power_exposer.def( "__str__", &__str__< ::SireCAS::Power > );
        Power_exposer.def( "__repr__", &__str__< ::SireCAS::Power > );
        Power_exposer.def( "__hash__", &::SireCAS::Power::hash );
    }

}
