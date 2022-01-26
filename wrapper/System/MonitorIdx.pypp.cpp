// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MonitorIdx.pypp.hpp"

namespace bp = boost::python;

#include "monitoridx.h"

#include "monitoridx.h"

#include "systemmonitors.h"

#include "monitorname.h"

SireSystem::MonitorIdx __copy__(const SireSystem::MonitorIdx &other){ return SireSystem::MonitorIdx(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MonitorIdx_class(){

    { //::SireSystem::MonitorIdx
        typedef bp::class_< SireSystem::MonitorIdx, bp::bases< SireSystem::MonitorID, SireID::ID, SireID::IndexBase > > MonitorIdx_exposer_t;
        MonitorIdx_exposer_t MonitorIdx_exposer = MonitorIdx_exposer_t( "MonitorIdx", "This is an ID object that is used to index system monitors (e.g. index\nin a list or array).\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope MonitorIdx_scope( MonitorIdx_exposer );
        MonitorIdx_exposer.def( bp::init< qint32 >(( bp::arg("idx") ), "") );
        MonitorIdx_exposer.def( bp::init< SireSystem::MonitorIdx const & >(( bp::arg("other") ), "") );
        { //::SireSystem::MonitorIdx::hash
        
            typedef ::uint ( ::SireSystem::MonitorIdx::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireSystem::MonitorIdx::hash );
            
            MonitorIdx_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::isNull
        
            typedef bool ( ::SireSystem::MonitorIdx::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireSystem::MonitorIdx::isNull );
            
            MonitorIdx_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::map
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::MonitorIdx::*map_function_type)( ::SireSystem::SystemMonitors const & ) const;
            map_function_type map_function_value( &::SireSystem::MonitorIdx::map );
            
            MonitorIdx_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("monitors") )
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::null
        
            typedef ::SireSystem::MonitorIdx ( *null_function_type )(  );
            null_function_type null_function_value( &::SireSystem::MonitorIdx::null );
            
            MonitorIdx_exposer.def( 
                "null"
                , null_function_value
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::operator=
        
            typedef ::SireSystem::MonitorIdx & ( ::SireSystem::MonitorIdx::*assign_function_type)( ::SireSystem::MonitorIdx const & ) ;
            assign_function_type assign_function_value( &::SireSystem::MonitorIdx::operator= );
            
            MonitorIdx_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::toString
        
            typedef ::QString ( ::SireSystem::MonitorIdx::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::MonitorIdx::toString );
            
            MonitorIdx_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::MonitorIdx::typeName );
            
            MonitorIdx_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireSystem::MonitorIdx::what
        
            typedef char const * ( ::SireSystem::MonitorIdx::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireSystem::MonitorIdx::what );
            
            MonitorIdx_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MonitorIdx_exposer.staticmethod( "null" );
        MonitorIdx_exposer.staticmethod( "typeName" );
        MonitorIdx_exposer.def( "__copy__", &__copy__);
        MonitorIdx_exposer.def( "__deepcopy__", &__copy__);
        MonitorIdx_exposer.def( "clone", &__copy__);
        MonitorIdx_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::MonitorIdx >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MonitorIdx_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::MonitorIdx >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MonitorIdx_exposer.def_pickle(sire_pickle_suite< ::SireSystem::MonitorIdx >());
        MonitorIdx_exposer.def( "__str__", &__str__< ::SireSystem::MonitorIdx > );
        MonitorIdx_exposer.def( "__repr__", &__str__< ::SireSystem::MonitorIdx > );
        MonitorIdx_exposer.def( "__hash__", &::SireSystem::MonitorIdx::hash );
    }

}
