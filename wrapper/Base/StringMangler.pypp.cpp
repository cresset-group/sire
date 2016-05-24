// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "StringMangler.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "stringmangler.h"

#include <QMutex>

#include "stringmangler.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_StringMangler_class(){

    { //::SireBase::StringMangler
        typedef bp::class_< SireBase::StringMangler, bp::bases< SireBase::Property >, boost::noncopyable > StringMangler_exposer_t;
        StringMangler_exposer_t StringMangler_exposer = StringMangler_exposer_t( "StringMangler", "This is the base class of all string mangling functions.\nA string mangler is just a simple function that performs\nsome transformations on an input string, e.g. changing its\ncase, trimming away extra spaces etc.\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope StringMangler_scope( StringMangler_exposer );
        { //::SireBase::StringMangler::mangle
        
            typedef ::QString ( ::SireBase::StringMangler::*mangle_function_type)( ::QString const & ) const;
            mangle_function_type mangle_function_value( &::SireBase::StringMangler::mangle );
            
            StringMangler_exposer.def( 
                "mangle"
                , mangle_function_value
                , ( bp::arg("input") )
                , "" );
        
        }
        { //::SireBase::StringMangler::null
        
            typedef ::SireBase::NoMangling const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireBase::StringMangler::null );
            
            StringMangler_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::StringMangler::operator()
        
            typedef ::QString ( ::SireBase::StringMangler::*__call___function_type)( ::QString const & ) const;
            __call___function_type __call___function_value( &::SireBase::StringMangler::operator() );
            
            StringMangler_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("input") )
                , "" );
        
        }
        { //::SireBase::StringMangler::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::StringMangler::typeName );
            
            StringMangler_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        StringMangler_exposer.staticmethod( "null" );
        StringMangler_exposer.staticmethod( "typeName" );
        StringMangler_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::StringMangler >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringMangler_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::StringMangler >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringMangler_exposer.def( "__str__", &__str__< ::SireBase::StringMangler > );
        StringMangler_exposer.def( "__repr__", &__str__< ::SireBase::StringMangler > );
    }

}
