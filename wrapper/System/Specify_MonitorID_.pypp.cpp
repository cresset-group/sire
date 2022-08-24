// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Specify_MonitorID_.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireSystem/errors.h"

#include "monitorid.h"

#include "monitoridx.h"

#include "monitorname.h"

#include "systemmonitors.h"

#include "monitorid.h"

SireID::Specify<SireSystem::MonitorID> __copy__(const SireID::Specify<SireSystem::MonitorID> &other){ return SireID::Specify<SireSystem::MonitorID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Specify_MonitorID__class(){

    { //::SireID::Specify< SireSystem::MonitorID >
        typedef bp::class_< SireID::Specify< SireSystem::MonitorID >, bp::bases< SireSystem::MonitorID, SireID::ID > > Specify_MonitorID__exposer_t;
        Specify_MonitorID__exposer_t Specify_MonitorID__exposer = Specify_MonitorID__exposer_t( "Specify_MonitorID_", "", bp::init< >("") );
        bp::scope Specify_MonitorID__scope( Specify_MonitorID__exposer );
        Specify_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const &, qint64 >(( bp::arg("id"), bp::arg("index") ), "") );
        Specify_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const &, qint64, qint64 >(( bp::arg("id"), bp::arg("start"), bp::arg("end") ), "") );
        Specify_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const &, qint64, qint64, qint64 >(( bp::arg("id"), bp::arg("start"), bp::arg("end"), bp::arg("increment") ), "") );
        Specify_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const &, SireBase::Range const & >(( bp::arg("id"), bp::arg("range") ), "") );
        Specify_MonitorID__exposer.def( bp::init< SireID::Specify< SireSystem::MonitorID > const & >(( bp::arg("other") ), "") );
        { //::SireID::Specify< SireSystem::MonitorID >::hash
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::uint ( ::SireID::Specify< SireSystem::MonitorID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::Specify< SireSystem::MonitorID >::hash );
            
            Specify_MonitorID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::isNull
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef bool ( ::SireID::Specify< SireSystem::MonitorID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::Specify< SireSystem::MonitorID >::isNull );
            
            Specify_MonitorID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::map
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::QList< SireSystem::MonitorName > ( ::SireID::Specify< SireSystem::MonitorID >::*map_function_type)( ::SireSystem::MonitorID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::Specify< SireSystem::MonitorID >::map );
            
            Specify_MonitorID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        Specify_MonitorID__exposer.def( bp::self != bp::self );
        Specify_MonitorID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::Specify< SireSystem::MonitorID >::operator()
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__call___function_type)( ::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator() );
            
            Specify_MonitorID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::operator()
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__call___function_type)( ::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator() );
            
            Specify_MonitorID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::operator()
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__call___function_type)( ::qint64,::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator() );
            
            Specify_MonitorID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end"), bp::arg("increment") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::operator()
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__call___function_type)( ::SireBase::Range const & ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator() );
            
            Specify_MonitorID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::operator=
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > & ( ::SireID::Specify< SireSystem::MonitorID >::*assign_function_type)( ::SireID::Specify< SireSystem::MonitorID > const & ) ;
            assign_function_type assign_function_value( &::SireID::Specify< SireSystem::MonitorID >::operator= );
            
            Specify_MonitorID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Specify_MonitorID__exposer.def( bp::self == bp::self );
        Specify_MonitorID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::Specify< SireSystem::MonitorID >::operator[]
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__getitem___function_type)( ::qint64 ) const;
            __getitem___function_type __getitem___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator[] );
            
            Specify_MonitorID__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::operator[]
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::Specify< SireSystem::MonitorID > ( ::SireID::Specify< SireSystem::MonitorID >::*__getitem___function_type)( ::SireBase::Range const & ) const;
            __getitem___function_type __getitem___function_value( &::SireID::Specify< SireSystem::MonitorID >::operator[] );
            
            Specify_MonitorID__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::toString
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef ::QString ( ::SireID::Specify< SireSystem::MonitorID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::Specify< SireSystem::MonitorID >::toString );
            
            Specify_MonitorID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::typeName
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::Specify< SireSystem::MonitorID >::typeName );
            
            Specify_MonitorID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireSystem::MonitorID >::what
        
            typedef SireID::Specify< SireSystem::MonitorID > exported_class_t;
            typedef char const * ( ::SireID::Specify< SireSystem::MonitorID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::Specify< SireSystem::MonitorID >::what );
            
            Specify_MonitorID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Specify_MonitorID__exposer.staticmethod( "typeName" );
        Specify_MonitorID__exposer.def( "__copy__", &__copy__);
        Specify_MonitorID__exposer.def( "__deepcopy__", &__copy__);
        Specify_MonitorID__exposer.def( "clone", &__copy__);
        Specify_MonitorID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::Specify<SireSystem::MonitorID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_MonitorID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::Specify<SireSystem::MonitorID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_MonitorID__exposer.def_pickle(sire_pickle_suite< ::SireID::Specify<SireSystem::MonitorID> >());
        Specify_MonitorID__exposer.def( "__str__", &__str__< ::SireID::Specify<SireSystem::MonitorID> > );
        Specify_MonitorID__exposer.def( "__repr__", &__str__< ::SireID::Specify<SireSystem::MonitorID> > );
        Specify_MonitorID__exposer.def( "__hash__", &::SireID::Specify<SireSystem::MonitorID>::hash );
    }

}
