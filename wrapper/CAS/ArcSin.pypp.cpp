// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ArcSin.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "identities.h"

#include "invtrigfuncs.h"

#include "trigfuncs.h"

#include "invtrigfuncs.h"

SireCAS::ArcSin __copy__(const SireCAS::ArcSin &other){ return SireCAS::ArcSin(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ArcSin_class(){

    { //::SireCAS::ArcSin
        typedef bp::class_< SireCAS::ArcSin, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > ArcSin_exposer_t;
        ArcSin_exposer_t ArcSin_exposer = ArcSin_exposer_t( "ArcSin", "Inverse-sine", bp::init< >("Null constructor") );
        bp::scope ArcSin_scope( ArcSin_exposer );
        ArcSin_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        ArcSin_exposer.def( bp::init< SireCAS::ArcSin const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ArcSin::evaluate

            typedef double ( ::SireCAS::ArcSin::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcSin::evaluate );

            ArcSin_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this function" );

        }
        { //::SireCAS::ArcSin::evaluate

            typedef ::SireMaths::Complex ( ::SireCAS::ArcSin::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcSin::evaluate );

            ArcSin_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Complex evaluation" );

        }
        ArcSin_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::ArcSin::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ArcSin::typeName );

            ArcSin_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::ArcSin::what

            typedef char const * ( ::SireCAS::ArcSin::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ArcSin::what );

            ArcSin_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ArcSin_exposer.staticmethod( "typeName" );
        ArcSin_exposer.def( "__copy__", &__copy__);
        ArcSin_exposer.def( "__deepcopy__", &__copy__);
        ArcSin_exposer.def( "clone", &__copy__);
        ArcSin_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ArcSin >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcSin_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ArcSin >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcSin_exposer.def_pickle(sire_pickle_suite< ::SireCAS::ArcSin >());
        ArcSin_exposer.def( "__str__", &__str__< ::SireCAS::ArcSin > );
        ArcSin_exposer.def( "__repr__", &__str__< ::SireCAS::ArcSin > );
        ArcSin_exposer.def( "__hash__", &::SireCAS::ArcSin::hash );
    }

}
