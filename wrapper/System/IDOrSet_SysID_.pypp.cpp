// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "IDOrSet_SysID_.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireSystem/errors.h"

#include "sysid.h"

#include "sysidx.h"

#include "sysname.h"

#include "sysid.h"

SireID::IDOrSet<SireSystem::SysID> __copy__(const SireID::IDOrSet<SireSystem::SysID> &other){ return SireID::IDOrSet<SireSystem::SysID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_IDOrSet_SysID__class(){

    { //::SireID::IDOrSet< SireSystem::SysID >
        typedef bp::class_< SireID::IDOrSet< SireSystem::SysID >, bp::bases< SireSystem::SysID, SireID::ID > > IDOrSet_SysID__exposer_t;
        IDOrSet_SysID__exposer_t IDOrSet_SysID__exposer = IDOrSet_SysID__exposer_t( "IDOrSet_SysID_", "", bp::init< >("") );
        bp::scope IDOrSet_SysID__scope( IDOrSet_SysID__exposer );
        IDOrSet_SysID__exposer.def( bp::init< SireSystem::SysID const & >(( bp::arg("id") ), "") );
        IDOrSet_SysID__exposer.def( bp::init< SireSystem::SysID const &, SireSystem::SysID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDOrSet_SysID__exposer.def( bp::init< QList< SireSystem::SysIdentifier > const & >(( bp::arg("ids") ), "") );
        IDOrSet_SysID__exposer.def( bp::init< SireID::IDOrSet< SireSystem::SysID > const & >(( bp::arg("ids") ), "") );
        IDOrSet_SysID__exposer.def( bp::init< SireID::IDOrSet< SireSystem::SysID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDOrSet< SireSystem::SysID >::IDs
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::QSet< SireSystem::SysIdentifier > const & ( ::SireID::IDOrSet< SireSystem::SysID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDOrSet< SireSystem::SysID >::IDs );
            
            IDOrSet_SysID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::hash
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::uint ( ::SireID::IDOrSet< SireSystem::SysID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDOrSet< SireSystem::SysID >::hash );
            
            IDOrSet_SysID__exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::isNull
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef bool ( ::SireID::IDOrSet< SireSystem::SysID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDOrSet< SireSystem::SysID >::isNull );
            
            IDOrSet_SysID__exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::map
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::QList< SireSystem::SysIdx > ( ::SireID::IDOrSet< SireSystem::SysID >::*map_function_type)( ::SireID::IDOrSet< SireSystem::SysID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDOrSet< SireSystem::SysID >::map );
            
            IDOrSet_SysID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , "" );
        
        }
        IDOrSet_SysID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDOrSet_SysID__exposer.def( bp::self != bp::self );
        IDOrSet_SysID__exposer.def( bp::self != bp::other< SireSystem::SysID >() );
        { //::SireID::IDOrSet< SireSystem::SysID >::operator=
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::SireID::IDOrSet< SireSystem::SysID > & ( ::SireID::IDOrSet< SireSystem::SysID >::*assign_function_type)( ::SireID::IDOrSet< SireSystem::SysID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireSystem::SysID >::operator= );
            
            IDOrSet_SysID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::operator=
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::SireID::IDOrSet< SireSystem::SysID > & ( ::SireID::IDOrSet< SireSystem::SysID >::*assign_function_type)( ::SireSystem::SysID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireSystem::SysID >::operator= );
            
            IDOrSet_SysID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDOrSet_SysID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDOrSet_SysID__exposer.def( bp::self == bp::self );
        IDOrSet_SysID__exposer.def( bp::self == bp::other< SireSystem::SysID >() );
        { //::SireID::IDOrSet< SireSystem::SysID >::toString
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef ::QString ( ::SireID::IDOrSet< SireSystem::SysID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDOrSet< SireSystem::SysID >::toString );
            
            IDOrSet_SysID__exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::typeName
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDOrSet< SireSystem::SysID >::typeName );
            
            IDOrSet_SysID__exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireID::IDOrSet< SireSystem::SysID >::what
        
            typedef SireID::IDOrSet< SireSystem::SysID > exported_class_t;
            typedef char const * ( ::SireID::IDOrSet< SireSystem::SysID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDOrSet< SireSystem::SysID >::what );
            
            IDOrSet_SysID__exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        IDOrSet_SysID__exposer.staticmethod( "typeName" );
        IDOrSet_SysID__exposer.def( "__copy__", &__copy__);
        IDOrSet_SysID__exposer.def( "__deepcopy__", &__copy__);
        IDOrSet_SysID__exposer.def( "clone", &__copy__);
        IDOrSet_SysID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDOrSet<SireSystem::SysID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_SysID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDOrSet<SireSystem::SysID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_SysID__exposer.def( "__str__", &__str__< ::SireID::IDOrSet<SireSystem::SysID> > );
        IDOrSet_SysID__exposer.def( "__repr__", &__str__< ::SireID::IDOrSet<SireSystem::SysID> > );
        IDOrSet_SysID__exposer.def( "__hash__", &::SireID::IDOrSet<SireSystem::SysID>::hash );
    }

}
