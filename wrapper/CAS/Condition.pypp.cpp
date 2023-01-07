// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Condition.pypp.hpp"

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

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Condition_class(){

    { //::SireCAS::Condition
        typedef bp::class_< SireCAS::Condition, bp::bases< SireCAS::ExBase >, boost::noncopyable > Condition_exposer_t;
        Condition_exposer_t Condition_exposer = Condition_exposer_t( "Condition", "This is the base class of all conditional statements\n(e.g. x < 2y, or z == 3w)\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope Condition_scope( Condition_exposer );
        { //::SireCAS::Condition::alwaysFalse

            typedef bool ( ::SireCAS::Condition::*alwaysFalse_function_type)(  ) const;
            alwaysFalse_function_type alwaysFalse_function_value( &::SireCAS::Condition::alwaysFalse );

            Condition_exposer.def(
                "alwaysFalse"
                , alwaysFalse_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::Condition::alwaysTrue

            typedef bool ( ::SireCAS::Condition::*alwaysTrue_function_type)(  ) const;
            alwaysTrue_function_type alwaysTrue_function_value( &::SireCAS::Condition::alwaysTrue );

            Condition_exposer.def(
                "alwaysTrue"
                , alwaysTrue_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::Condition::children

            typedef ::SireCAS::Expressions ( ::SireCAS::Condition::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireCAS::Condition::children );

            Condition_exposer.def(
                "children"
                , children_function_value
                , bp::release_gil_policy()
                , "Return all of the child expressions in this condition" );

        }
        { //::SireCAS::Condition::conjugate

            typedef ::SireCAS::Expression ( ::SireCAS::Condition::*conjugate_function_type)(  ) const;
            conjugate_function_type conjugate_function_value( &::SireCAS::Condition::conjugate );

            Condition_exposer.def(
                "conjugate"
                , conjugate_function_value
                , bp::release_gil_policy()
                , "The complex conjugate of a condition is the condition" );

        }
        { //::SireCAS::Condition::differentiate

            typedef ::SireCAS::Expression ( ::SireCAS::Condition::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::Condition::differentiate );

            Condition_exposer.def(
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Differentiate this expression" );

        }
        { //::SireCAS::Condition::evaluate

            typedef double ( ::SireCAS::Condition::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Condition::evaluate );

            Condition_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this expression - this returns 1 if it is true, else it\nreturns 0 if it is false" );

        }
        { //::SireCAS::Condition::evaluate

            typedef ::SireMaths::Complex ( ::SireCAS::Condition::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Condition::evaluate );

            Condition_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this expression - this returns 1 if it is true, else\nit returns 0 if it is false" );

        }
        { //::SireCAS::Condition::evaluateCondition

            typedef bool ( ::SireCAS::Condition::*evaluateCondition_function_type)( ::SireCAS::Values const & ) const;
            evaluateCondition_function_type evaluateCondition_function_value( &::SireCAS::Condition::evaluateCondition );

            Condition_exposer.def(
                "evaluateCondition"
                , evaluateCondition_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evalute this condition, returning whether or not it is true or false" );

        }
        { //::SireCAS::Condition::evaluateCondition

            typedef bool ( ::SireCAS::Condition::*evaluateCondition_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluateCondition_function_type evaluateCondition_function_value( &::SireCAS::Condition::evaluateCondition );

            Condition_exposer.def(
                "evaluateCondition"
                , evaluateCondition_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evalute this condition, returning whether or not it is true or false" );

        }
        { //::SireCAS::Condition::expand

            typedef ::QList< SireCAS::Factor > ( ::SireCAS::Condition::*expand_function_type)( ::SireCAS::Symbol const & ) const;
            expand_function_type expand_function_value( &::SireCAS::Condition::expand );

            Condition_exposer.def(
                "expand"
                , expand_function_value
                , ( bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Expand this condition into factors of the passed symbol" );

        }
        { //::SireCAS::Condition::functions

            typedef ::SireCAS::Functions ( ::SireCAS::Condition::*functions_function_type)(  ) const;
            functions_function_type functions_function_value( &::SireCAS::Condition::functions );

            Condition_exposer.def(
                "functions"
                , functions_function_value
                , bp::release_gil_policy()
                , "Return the functions in this expression" );

        }
        { //::SireCAS::Condition::hash

            typedef ::uint ( ::SireCAS::Condition::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::Condition::hash );

            Condition_exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "Hash this condition" );

        }
        { //::SireCAS::Condition::integrate

            typedef ::SireCAS::Expression ( ::SireCAS::Condition::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::Condition::integrate );

            Condition_exposer.def(
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Integrate this expression" );

        }
        { //::SireCAS::Condition::isComplex

            typedef bool ( ::SireCAS::Condition::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::Condition::isComplex );

            Condition_exposer.def(
                "isComplex"
                , isComplex_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a complex condition" );

        }
        { //::SireCAS::Condition::isCompound

            typedef bool ( ::SireCAS::Condition::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::Condition::isCompound );

            Condition_exposer.def(
                "isCompound"
                , isCompound_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a compound expression" );

        }
        { //::SireCAS::Condition::isConstant

            typedef bool ( ::SireCAS::Condition::*isConstant_function_type)(  ) const;
            isConstant_function_type isConstant_function_value( &::SireCAS::Condition::isConstant );

            Condition_exposer.def(
                "isConstant"
                , isConstant_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a constant" );

        }
        { //::SireCAS::Condition::isFunction

            typedef bool ( ::SireCAS::Condition::*isFunction_function_type)( ::SireCAS::Symbol const & ) const;
            isFunction_function_type isFunction_function_value( &::SireCAS::Condition::isFunction );

            Condition_exposer.def(
                "isFunction"
                , isFunction_function_value
                , ( bp::arg("arg0") )
                , bp::release_gil_policy()
                , "Return whether or not this function is a function of symbol" );

        }
        { //::SireCAS::Condition::isNull

            typedef bool ( ::SireCAS::Condition::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireCAS::Condition::isNull );

            Condition_exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is null" );

        }
        { //::SireCAS::Condition::leftHandSide

            typedef ::SireCAS::Expression const & ( ::SireCAS::Condition::*leftHandSide_function_type)(  ) const;
            leftHandSide_function_type leftHandSide_function_value( &::SireCAS::Condition::leftHandSide );

            Condition_exposer.def(
                "leftHandSide"
                , leftHandSide_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the left hand side of this condition" );

        }
        { //::SireCAS::Condition::rightHandSide

            typedef ::SireCAS::Expression const & ( ::SireCAS::Condition::*rightHandSide_function_type)(  ) const;
            rightHandSide_function_type rightHandSide_function_value( &::SireCAS::Condition::rightHandSide );

            Condition_exposer.def(
                "rightHandSide"
                , rightHandSide_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the right hand side of this condition" );

        }
        { //::SireCAS::Condition::simplify

            typedef ::SireCAS::Expression ( ::SireCAS::Condition::*simplify_function_type)( int ) const;
            simplify_function_type simplify_function_value( &::SireCAS::Condition::simplify );

            Condition_exposer.def(
                "simplify"
                , simplify_function_value
                , ( bp::arg("options")=(int)(0) )
                , "Simplify this condition" );

        }
        { //::SireCAS::Condition::substitute

            typedef ::SireCAS::Expression ( ::SireCAS::Condition::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireCAS::Condition::substitute );

            Condition_exposer.def(
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , bp::release_gil_policy()
                , "Substitute in the passed identities" );

        }
        { //::SireCAS::Condition::symbols

            typedef ::SireCAS::Symbols ( ::SireCAS::Condition::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::Condition::symbols );

            Condition_exposer.def(
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "Return the symbols used in this expression" );

        }
        { //::SireCAS::Condition::toString

            typedef ::QString ( ::SireCAS::Condition::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::Condition::toString );

            Condition_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this expression" );

        }
        { //::SireCAS::Condition::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Condition::typeName );

            Condition_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Condition_exposer.staticmethod( "typeName" );
        Condition_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Condition >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Condition_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Condition >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Condition_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Condition >());
        Condition_exposer.def( "__str__", &__str__< ::SireCAS::Condition > );
        Condition_exposer.def( "__repr__", &__str__< ::SireCAS::Condition > );
        Condition_exposer.def( "__hash__", &::SireCAS::Condition::hash );
    }

}
