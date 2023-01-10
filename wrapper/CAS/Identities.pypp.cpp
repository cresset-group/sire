// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Identities.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "function.h"

#include "identities.h"

#include "symbol.h"

#include "identities.h"

SireCAS::Identities __copy__(const SireCAS::Identities &other){ return SireCAS::Identities(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Identities_class(){

    { //::SireCAS::Identities
        typedef bp::class_< SireCAS::Identities > Identities_exposer_t;
        Identities_exposer_t Identities_exposer = Identities_exposer_t( "Identities", "This class holds a collection of identities.\nThese are symbols, and the expressions that they are equal to,\ne.g. x == y.squared() + sin(z). These identities can then be\nsubstituted into expressions, with all instances of the variable\nbeing replaced by the equivalent expression.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty set of identities") );
        bp::scope Identities_scope( Identities_exposer );
        Identities_exposer.def( bp::init< QList< SireCAS::SymbolExpression > const & >(( bp::arg("expressions") ), "Construct from a list of passed expressions") );
        Identities_exposer.def( bp::init< QHash< SireCAS::Symbol, SireCAS::Expression > const & >(( bp::arg("expressions") ), "Construct with a hash of expressions indexed by symbol") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const & >(( bp::arg("symex0") ), "Construct with the passed expressions") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7"), bp::arg("symex8") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const &, SireCAS::SymbolExpression const & >(( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7"), bp::arg("symex8"), bp::arg("symex9") ), "Construct from the passed values") );
        Identities_exposer.def( bp::init< SireCAS::Identities const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7"), bp::arg("symex8") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::add
        
            typedef void ( ::SireCAS::Identities::*add_function_type)( ::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const &,::SireCAS::SymbolExpression const & ) ;
            add_function_type add_function_value( &::SireCAS::Identities::add );
            
            Identities_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("symex0"), bp::arg("symex1"), bp::arg("symex2"), bp::arg("symex3"), bp::arg("symex4"), bp::arg("symex5"), bp::arg("symex6"), bp::arg("symex7"), bp::arg("symex8"), bp::arg("symex9") )
                , bp::release_gil_policy()
                , "Add the passed expressions" );
        
        }
        { //::SireCAS::Identities::contains
        
            typedef bool ( ::SireCAS::Identities::*contains_function_type)( ::SireCAS::Symbol const & ) const;
            contains_function_type contains_function_value( &::SireCAS::Identities::contains );
            
            Identities_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("sym") )
                , bp::release_gil_policy()
                , "Return whether or not this set of identities contains an identity for\nthe symbol symbol" );
        
        }
        { //::SireCAS::Identities::contains
        
            typedef bool ( ::SireCAS::Identities::*contains_function_type)( ::SireCAS::Function const & ) const;
            contains_function_type contains_function_value( &::SireCAS::Identities::contains );
            
            Identities_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("func") )
                , bp::release_gil_policy()
                , "Return whether or not this set of identities contains an identity for\nthe function func (or one of its relations)" );
        
        }
        { //::SireCAS::Identities::expression
        
            typedef ::SireCAS::Expression ( ::SireCAS::Identities::*expression_function_type)( ::SireCAS::Symbol const & ) const;
            expression_function_type expression_function_value( &::SireCAS::Identities::expression );
            
            Identities_exposer.def( 
                "expression"
                , expression_function_value
                , ( bp::arg("sym") )
                , bp::release_gil_policy()
                , "Return the associated expression for symbol, or an expression containing\nthis symbol if there is no such expression" );
        
        }
        { //::SireCAS::Identities::function
        
            typedef ::SireCAS::Function ( ::SireCAS::Identities::*function_function_type)( ::SireCAS::Function const & ) const;
            function_function_type function_function_value( &::SireCAS::Identities::function );
            
            Identities_exposer.def( 
                "function"
                , function_function_value
                , ( bp::arg("func") )
                , bp::release_gil_policy()
                , "Return the actual form of the function func stored in this set of\nidentities, or the null function if it is not present here" );
        
        }
        Identities_exposer.def( bp::self != bp::self );
        Identities_exposer.def( bp::self == bp::self );
        { //::SireCAS::Identities::operator[]
        
            typedef ::SireCAS::Expression ( ::SireCAS::Identities::*__getitem___function_type)( ::SireCAS::Symbol const & ) const;
            __getitem___function_type __getitem___function_value( &::SireCAS::Identities::operator[] );
            
            Identities_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("sym") )
                , "" );
        
        }
        { //::SireCAS::Identities::set
        
            typedef void ( ::SireCAS::Identities::*set_function_type)( ::SireCAS::Symbol const &,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireCAS::Identities::set );
            
            Identities_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("symbol"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the Symbol symbol equal to expression" );
        
        }
        { //::SireCAS::Identities::symbols
        
            typedef ::QList< SireCAS::Symbol > ( ::SireCAS::Identities::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::Identities::symbols );
            
            Identities_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "Return a list of the symbols that are present in this set" );
        
        }
        { //::SireCAS::Identities::toString
        
            typedef ::QString ( ::SireCAS::Identities::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::Identities::toString );
            
            Identities_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::Identities::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Identities::typeName );
            
            Identities_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::Identities::what
        
            typedef char const * ( ::SireCAS::Identities::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Identities::what );
            
            Identities_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Identities_exposer.staticmethod( "typeName" );
        Identities_exposer.def( "__copy__", &__copy__);
        Identities_exposer.def( "__deepcopy__", &__copy__);
        Identities_exposer.def( "clone", &__copy__);
        Identities_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Identities >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Identities_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Identities >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Identities_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Identities >());
        Identities_exposer.def( "__str__", &__str__< ::SireCAS::Identities > );
        Identities_exposer.def( "__repr__", &__str__< ::SireCAS::Identities > );
    }

}
