// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "LJException.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/incremint.h"

#include "SireBase/quickcopy.hpp"

#include "SireStream/datastream.h"

#include "SireStream/magic_error.h"

#include "SireStream/shareddatastream.h"

#include "atomljs.h"

#include <QMutex>

#include <QUuid>

#include "atomljs.h"

SireMM::LJException __copy__(const SireMM::LJException &other){ return SireMM::LJException(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_LJException_class(){

    { //::SireMM::LJException
        typedef bp::class_< SireMM::LJException > LJException_exposer_t;
        LJException_exposer_t LJException_exposer = LJException_exposer_t( "LJException", "This class represents a single LJException. It combines\nthe LJExceptionID with the LJ1264Parameter value that\nis used to represent the exception\n", bp::init< >("") );
        bp::scope LJException_scope( LJException_exposer );
        LJException_exposer.def( bp::init< SireMM::LJ1264Parameter const & >(( bp::arg("value") ), "") );
        LJException_exposer.def( bp::init< SireMM::LJExceptionID const &, SireMM::LJ1264Parameter const & >(( bp::arg("id"), bp::arg("value") ), "") );
        LJException_exposer.def( bp::init< SireMM::LJException const & >(( bp::arg("other") ), "") );
        { //::SireMM::LJException::ID
        
            typedef ::SireMM::LJExceptionID ( ::SireMM::LJException::*ID_function_type)(  ) const;
            ID_function_type ID_function_value( &::SireMM::LJException::ID );
            
            LJException_exposer.def( 
                "ID"
                , ID_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJException::getPair
        
            typedef ::SireMM::LJException ( ::SireMM::LJException::*getPair_function_type)(  ) const;
            getPair_function_type getPair_function_value( &::SireMM::LJException::getPair );
            
            LJException_exposer.def( 
                "getPair"
                , getPair_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        LJException_exposer.def( bp::self != bp::self );
        { //::SireMM::LJException::operator=
        
            typedef ::SireMM::LJException & ( ::SireMM::LJException::*assign_function_type)( ::SireMM::LJException const & ) ;
            assign_function_type assign_function_value( &::SireMM::LJException::operator= );
            
            LJException_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        LJException_exposer.def( bp::self == bp::self );
        { //::SireMM::LJException::pairsWith
        
            typedef bool ( ::SireMM::LJException::*pairsWith_function_type)( ::SireMM::LJException const & ) const;
            pairsWith_function_type pairsWith_function_value( &::SireMM::LJException::pairsWith );
            
            LJException_exposer.def( 
                "pairsWith"
                , pairsWith_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJException::toString
        
            typedef ::QString ( ::SireMM::LJException::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::LJException::toString );
            
            LJException_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJException::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::LJException::typeName );
            
            LJException_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJException::value
        
            typedef ::SireMM::LJ1264Parameter ( ::SireMM::LJException::*value_function_type)(  ) const;
            value_function_type value_function_value( &::SireMM::LJException::value );
            
            LJException_exposer.def( 
                "value"
                , value_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJException::what
        
            typedef char const * ( ::SireMM::LJException::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::LJException::what );
            
            LJException_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        LJException_exposer.staticmethod( "typeName" );
        LJException_exposer.def( "__copy__", &__copy__);
        LJException_exposer.def( "__deepcopy__", &__copy__);
        LJException_exposer.def( "clone", &__copy__);
        LJException_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJException >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJException_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJException >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJException_exposer.def_pickle(sire_pickle_suite< ::SireMM::LJException >());
        LJException_exposer.def( "__str__", &__str__< ::SireMM::LJException > );
        LJException_exposer.def( "__repr__", &__str__< ::SireMM::LJException > );
    }

}
