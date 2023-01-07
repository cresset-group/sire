// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Min.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expression.h"

#include "identities.h"

#include "minmax.h"

#include "minmax.h"

SireCAS::Min __copy__(const SireCAS::Min &other){ return SireCAS::Min(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Min_class(){

    { //::SireCAS::Min
        typedef bp::class_< SireCAS::Min, bp::bases< SireCAS::DoubleFunc, SireCAS::ExBase > > Min_exposer_t;
        Min_exposer_t Min_exposer = Min_exposer_t( "Min", "Minimum value of two expressions", bp::init< >("Constructor") );
        bp::scope Min_scope( Min_exposer );
        Min_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("x"), bp::arg("y") ), "Construct min(x(), y())") );
        Min_exposer.def( bp::init< SireCAS::Min const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::Min::evaluate

            typedef double ( ::SireCAS::Min::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Min::evaluate );

            Min_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this function" );

        }
        { //::SireCAS::Min::evaluate

            typedef ::SireMaths::Complex ( ::SireCAS::Min::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Min::evaluate );

            Min_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Complex evaluation" );

        }
        Min_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Min::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Min::typeName );

            Min_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::Min::what

            typedef char const * ( ::SireCAS::Min::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Min::what );

            Min_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Min_exposer.staticmethod( "typeName" );
        Min_exposer.def( "__copy__", &__copy__);
        Min_exposer.def( "__deepcopy__", &__copy__);
        Min_exposer.def( "clone", &__copy__);
        Min_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Min >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Min_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Min >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Min_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Min >());
        Min_exposer.def( "__str__", &__str__< ::SireCAS::Min > );
        Min_exposer.def( "__repr__", &__str__< ::SireCAS::Min > );
        Min_exposer.def( "__hash__", &::SireCAS::Min::hash );
    }

}
