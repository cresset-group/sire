// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "GreaterOrEqualThan.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireError/errors.h"

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "complexvalues.h"

#include "conditional.h"

#include "expressions.h"

#include "functions.h"

#include "identities.h"

#include "symbols.h"

#include "values.h"

#include "conditional.h"

SireCAS::GreaterOrEqualThan __copy__(const SireCAS::GreaterOrEqualThan &other){ return SireCAS::GreaterOrEqualThan(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_GreaterOrEqualThan_class(){

    { //::SireCAS::GreaterOrEqualThan
        typedef bp::class_< SireCAS::GreaterOrEqualThan, bp::bases< SireCAS::Condition, SireCAS::ExBase > > GreaterOrEqualThan_exposer_t;
        GreaterOrEqualThan_exposer_t GreaterOrEqualThan_exposer = GreaterOrEqualThan_exposer_t( "GreaterOrEqualThan", "This is a conditional function that returns whether or\nnot the first expression is greater than or equal to\nthe second expression\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope GreaterOrEqualThan_scope( GreaterOrEqualThan_exposer );
        GreaterOrEqualThan_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("left_hand_side"), bp::arg("right_hand_side") ), "Construct to compare left_hand_side with right_hand_side") );
        GreaterOrEqualThan_exposer.def( bp::init< SireCAS::GreaterOrEqualThan const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::GreaterOrEqualThan::alwaysFalse
        
            typedef bool ( ::SireCAS::GreaterOrEqualThan::*alwaysFalse_function_type)(  ) const;
            alwaysFalse_function_type alwaysFalse_function_value( &::SireCAS::GreaterOrEqualThan::alwaysFalse );
            
            GreaterOrEqualThan_exposer.def( 
                "alwaysFalse"
                , alwaysFalse_function_value
                , bp::release_gil_policy()
                , "Return whether or not we can be absolutely sure that this\ncondition will always be false. Note that this doesnt try\ntoo hard, so some things that are always false may not\nbe reported here as being always false, e.g. x > x + 1" );
        
        }
        { //::SireCAS::GreaterOrEqualThan::alwaysTrue
        
            typedef bool ( ::SireCAS::GreaterOrEqualThan::*alwaysTrue_function_type)(  ) const;
            alwaysTrue_function_type alwaysTrue_function_value( &::SireCAS::GreaterOrEqualThan::alwaysTrue );
            
            GreaterOrEqualThan_exposer.def( 
                "alwaysTrue"
                , alwaysTrue_function_value
                , bp::release_gil_policy()
                , "Return whether or not we can be absolutely sure that this\ncondition will always be true. Note that this doesnt try\ntoo hard, so some things that are always true may not\nbe reported here as being always true, e.g. x + 1 > x" );
        
        }
        { //::SireCAS::GreaterOrEqualThan::operator=
        
            typedef ::SireCAS::GreaterOrEqualThan & ( ::SireCAS::GreaterOrEqualThan::*assign_function_type)( ::SireCAS::GreaterOrEqualThan const & ) ;
            assign_function_type assign_function_value( &::SireCAS::GreaterOrEqualThan::operator= );
            
            GreaterOrEqualThan_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GreaterOrEqualThan_exposer.def( bp::self == bp::self );
        GreaterOrEqualThan_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::GreaterOrEqualThan::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::GreaterOrEqualThan::typeName );
            
            GreaterOrEqualThan_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::GreaterOrEqualThan::what
        
            typedef char const * ( ::SireCAS::GreaterOrEqualThan::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::GreaterOrEqualThan::what );
            
            GreaterOrEqualThan_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        GreaterOrEqualThan_exposer.staticmethod( "typeName" );
        GreaterOrEqualThan_exposer.def( "__copy__", &__copy__);
        GreaterOrEqualThan_exposer.def( "__deepcopy__", &__copy__);
        GreaterOrEqualThan_exposer.def( "clone", &__copy__);
        GreaterOrEqualThan_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::GreaterOrEqualThan >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GreaterOrEqualThan_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::GreaterOrEqualThan >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GreaterOrEqualThan_exposer.def_pickle(sire_pickle_suite< ::SireCAS::GreaterOrEqualThan >());
        GreaterOrEqualThan_exposer.def( "__str__", &__str__< ::SireCAS::GreaterOrEqualThan > );
        GreaterOrEqualThan_exposer.def( "__repr__", &__str__< ::SireCAS::GreaterOrEqualThan > );
        GreaterOrEqualThan_exposer.def( "__hash__", &::SireCAS::GreaterOrEqualThan::hash );
    }

}
