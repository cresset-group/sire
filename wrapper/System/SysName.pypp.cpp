// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SysName.pypp.hpp"

namespace bp = boost::python;

#include "sysname.h"

#include "sysname.h"

SireSystem::SysName __copy__(const SireSystem::SysName &other){ return SireSystem::SysName(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_SysName_class(){

    { //::SireSystem::SysName
        typedef bp::class_< SireSystem::SysName, bp::bases< SireSystem::SysID, SireID::ID, SireID::Name > > SysName_exposer_t;
        SysName_exposer_t SysName_exposer = SysName_exposer_t( "SysName", "This class holds the name of a simulation system\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope SysName_scope( SysName_exposer );
        SysName_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        SysName_exposer.def( bp::init< SireSystem::SysName const & >(( bp::arg("other") ), "") );
        { //::SireSystem::SysName::hash
        
            typedef ::uint ( ::SireSystem::SysName::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireSystem::SysName::hash );
            
            SysName_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireSystem::SysName::isNull
        
            typedef bool ( ::SireSystem::SysName::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireSystem::SysName::isNull );
            
            SysName_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireSystem::SysName::map
        
            typedef ::QList< SireSystem::SysIdx > ( ::SireSystem::SysName::*map_function_type)( ::SireSystem::Systems const & ) const;
            map_function_type map_function_value( &::SireSystem::SysName::map );
            
            SysName_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("systems") )
                , "" );
        
        }
        SysName_exposer.def( bp::self != bp::self );
        { //::SireSystem::SysName::operator=
        
            typedef ::SireSystem::SysName & ( ::SireSystem::SysName::*assign_function_type)( ::SireSystem::SysName const & ) ;
            assign_function_type assign_function_value( &::SireSystem::SysName::operator= );
            
            SysName_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SysName_exposer.def( bp::self == bp::other< SireID::ID >() );
        SysName_exposer.def( bp::self == bp::self );
        { //::SireSystem::SysName::toString
        
            typedef ::QString ( ::SireSystem::SysName::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::SysName::toString );
            
            SysName_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireSystem::SysName::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::SysName::typeName );
            
            SysName_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireSystem::SysName::what
        
            typedef char const * ( ::SireSystem::SysName::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireSystem::SysName::what );
            
            SysName_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        SysName_exposer.staticmethod( "typeName" );
        SysName_exposer.def( "__copy__", &__copy__);
        SysName_exposer.def( "__deepcopy__", &__copy__);
        SysName_exposer.def( "clone", &__copy__);
        SysName_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::SysName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SysName_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::SysName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SysName_exposer.def_pickle(sire_pickle_suite< ::SireSystem::SysName >());
        SysName_exposer.def( "__str__", &__str__< ::SireSystem::SysName > );
        SysName_exposer.def( "__repr__", &__str__< ::SireSystem::SysName > );
        SysName_exposer.def( "__hash__", &::SireSystem::SysName::hash );
    }

}
