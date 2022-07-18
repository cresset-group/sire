// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "IDAndSet_MGID_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/incremint.h"

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "mgid.h"

#include "mgidentifier.h"

#include "mgidx.h"

#include "mgname.h"

#include "mgnum.h"

#include "moleculegroups.h"

#include "tostring.h"

#include "mgid.h"

SireID::IDAndSet<SireMol::MGID> __copy__(const SireID::IDAndSet<SireMol::MGID> &other){ return SireID::IDAndSet<SireMol::MGID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_IDAndSet_MGID__class(){

    { //::SireID::IDAndSet< SireMol::MGID >
        typedef bp::class_< SireID::IDAndSet< SireMol::MGID >, bp::bases< SireMol::MGID, SireID::ID > > IDAndSet_MGID__exposer_t;
        IDAndSet_MGID__exposer_t IDAndSet_MGID__exposer = IDAndSet_MGID__exposer_t( "IDAndSet_MGID_", "", bp::init< >("") );
        bp::scope IDAndSet_MGID__scope( IDAndSet_MGID__exposer );
        IDAndSet_MGID__exposer.def( bp::init< SireMol::MGID const & >(( bp::arg("id") ), "") );
        IDAndSet_MGID__exposer.def( bp::init< SireMol::MGID const &, SireMol::MGID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDAndSet_MGID__exposer.def( bp::init< QList< SireMol::MGIdentifier > const & >(( bp::arg("ids") ), "") );
        IDAndSet_MGID__exposer.def( bp::init< SireID::IDAndSet< SireMol::MGID > const & >(( bp::arg("ids") ), "") );
        IDAndSet_MGID__exposer.def( bp::init< SireID::IDAndSet< SireMol::MGID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDAndSet< SireMol::MGID >::IDs
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::QSet< SireMol::MGIdentifier > const & ( ::SireID::IDAndSet< SireMol::MGID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDAndSet< SireMol::MGID >::IDs );
            
            IDAndSet_MGID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::hash
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::uint ( ::SireID::IDAndSet< SireMol::MGID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDAndSet< SireMol::MGID >::hash );
            
            IDAndSet_MGID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::isNull
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef bool ( ::SireID::IDAndSet< SireMol::MGID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDAndSet< SireMol::MGID >::isNull );
            
            IDAndSet_MGID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::map
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::QList< SireMol::MGNum > ( ::SireID::IDAndSet< SireMol::MGID >::*map_function_type)( ::SireID::IDAndSet< SireMol::MGID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDAndSet< SireMol::MGID >::map );
            
            IDAndSet_MGID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        IDAndSet_MGID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDAndSet_MGID__exposer.def( bp::self != bp::self );
        IDAndSet_MGID__exposer.def( bp::self != bp::other< SireMol::MGID >() );
        { //::SireID::IDAndSet< SireMol::MGID >::operator=
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::SireID::IDAndSet< SireMol::MGID > & ( ::SireID::IDAndSet< SireMol::MGID >::*assign_function_type)( ::SireID::IDAndSet< SireMol::MGID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDAndSet< SireMol::MGID >::operator= );
            
            IDAndSet_MGID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::operator=
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::SireID::IDAndSet< SireMol::MGID > & ( ::SireID::IDAndSet< SireMol::MGID >::*assign_function_type)( ::SireMol::MGID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDAndSet< SireMol::MGID >::operator= );
            
            IDAndSet_MGID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDAndSet_MGID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDAndSet_MGID__exposer.def( bp::self == bp::self );
        IDAndSet_MGID__exposer.def( bp::self == bp::other< SireMol::MGID >() );
        { //::SireID::IDAndSet< SireMol::MGID >::toString
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef ::QString ( ::SireID::IDAndSet< SireMol::MGID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDAndSet< SireMol::MGID >::toString );
            
            IDAndSet_MGID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::typeName
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDAndSet< SireMol::MGID >::typeName );
            
            IDAndSet_MGID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::MGID >::what
        
            typedef SireID::IDAndSet< SireMol::MGID > exported_class_t;
            typedef char const * ( ::SireID::IDAndSet< SireMol::MGID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDAndSet< SireMol::MGID >::what );
            
            IDAndSet_MGID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IDAndSet_MGID__exposer.staticmethod( "typeName" );
        IDAndSet_MGID__exposer.def( "__copy__", &__copy__);
        IDAndSet_MGID__exposer.def( "__deepcopy__", &__copy__);
        IDAndSet_MGID__exposer.def( "clone", &__copy__);
        IDAndSet_MGID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDAndSet<SireMol::MGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAndSet_MGID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDAndSet<SireMol::MGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAndSet_MGID__exposer.def_pickle(sire_pickle_suite< ::SireID::IDAndSet<SireMol::MGID> >());
        IDAndSet_MGID__exposer.def( "__str__", &__str__< ::SireID::IDAndSet<SireMol::MGID> > );
        IDAndSet_MGID__exposer.def( "__repr__", &__str__< ::SireID::IDAndSet<SireMol::MGID> > );
        IDAndSet_MGID__exposer.def( "__hash__", &::SireID::IDAndSet<SireMol::MGID>::hash );
    }

}
