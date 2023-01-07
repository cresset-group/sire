// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "IDOrSet_MonitorID_.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireSystem/errors.h"

#include "monitorid.h"

#include "monitoridx.h"

#include "monitorname.h"

#include "systemmonitors.h"

#include "monitorid.h"

SireID::IDOrSet<SireSystem::MonitorID> __copy__(const SireID::IDOrSet<SireSystem::MonitorID> &other){ return SireID::IDOrSet<SireSystem::MonitorID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_IDOrSet_MonitorID__class(){

    { //::SireID::IDOrSet< SireSystem::MonitorID >
        typedef bp::class_< SireID::IDOrSet< SireSystem::MonitorID >, bp::bases< SireSystem::MonitorID, SireID::ID > > IDOrSet_MonitorID__exposer_t;
        IDOrSet_MonitorID__exposer_t IDOrSet_MonitorID__exposer = IDOrSet_MonitorID__exposer_t( "IDOrSet_MonitorID_", "", bp::init< >("") );
        bp::scope IDOrSet_MonitorID__scope( IDOrSet_MonitorID__exposer );
        IDOrSet_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const & >(( bp::arg("id") ), "") );
        IDOrSet_MonitorID__exposer.def( bp::init< SireSystem::MonitorID const &, SireSystem::MonitorID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDOrSet_MonitorID__exposer.def( bp::init< QList< SireSystem::MonitorIdentifier > const & >(( bp::arg("ids") ), "") );
        IDOrSet_MonitorID__exposer.def( bp::init< SireID::IDOrSet< SireSystem::MonitorID > const & >(( bp::arg("ids") ), "") );
        IDOrSet_MonitorID__exposer.def( bp::init< SireID::IDOrSet< SireSystem::MonitorID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDOrSet< SireSystem::MonitorID >::IDs

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::QSet< SireSystem::MonitorIdentifier > const & ( ::SireID::IDOrSet< SireSystem::MonitorID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::IDs );

            IDOrSet_MonitorID__exposer.def(
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::hash

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::uint ( ::SireID::IDOrSet< SireSystem::MonitorID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::hash );

            IDOrSet_MonitorID__exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::isNull

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef bool ( ::SireID::IDOrSet< SireSystem::MonitorID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::isNull );

            IDOrSet_MonitorID__exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::map

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::QList< SireSystem::MonitorName > ( ::SireID::IDOrSet< SireSystem::MonitorID >::*map_function_type)( ::SireID::IDOrSet< SireSystem::MonitorID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::map );

            IDOrSet_MonitorID__exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );

        }
        IDOrSet_MonitorID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDOrSet_MonitorID__exposer.def( bp::self != bp::self );
        IDOrSet_MonitorID__exposer.def( bp::self != bp::other< SireSystem::MonitorID >() );
        { //::SireID::IDOrSet< SireSystem::MonitorID >::operator=

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::IDOrSet< SireSystem::MonitorID > & ( ::SireID::IDOrSet< SireSystem::MonitorID >::*assign_function_type)( ::SireID::IDOrSet< SireSystem::MonitorID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::operator= );

            IDOrSet_MonitorID__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::operator=

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::SireID::IDOrSet< SireSystem::MonitorID > & ( ::SireID::IDOrSet< SireSystem::MonitorID >::*assign_function_type)( ::SireSystem::MonitorID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::operator= );

            IDOrSet_MonitorID__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        IDOrSet_MonitorID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDOrSet_MonitorID__exposer.def( bp::self == bp::self );
        IDOrSet_MonitorID__exposer.def( bp::self == bp::other< SireSystem::MonitorID >() );
        { //::SireID::IDOrSet< SireSystem::MonitorID >::toString

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef ::QString ( ::SireID::IDOrSet< SireSystem::MonitorID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::toString );

            IDOrSet_MonitorID__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::typeName

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::typeName );

            IDOrSet_MonitorID__exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::IDOrSet< SireSystem::MonitorID >::what

            typedef SireID::IDOrSet< SireSystem::MonitorID > exported_class_t;
            typedef char const * ( ::SireID::IDOrSet< SireSystem::MonitorID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDOrSet< SireSystem::MonitorID >::what );

            IDOrSet_MonitorID__exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        IDOrSet_MonitorID__exposer.staticmethod( "typeName" );
        IDOrSet_MonitorID__exposer.def( "__copy__", &__copy__);
        IDOrSet_MonitorID__exposer.def( "__deepcopy__", &__copy__);
        IDOrSet_MonitorID__exposer.def( "clone", &__copy__);
        IDOrSet_MonitorID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDOrSet<SireSystem::MonitorID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_MonitorID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDOrSet<SireSystem::MonitorID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_MonitorID__exposer.def_pickle(sire_pickle_suite< ::SireID::IDOrSet<SireSystem::MonitorID> >());
        IDOrSet_MonitorID__exposer.def( "__str__", &__str__< ::SireID::IDOrSet<SireSystem::MonitorID> > );
        IDOrSet_MonitorID__exposer.def( "__repr__", &__str__< ::SireID::IDOrSet<SireSystem::MonitorID> > );
        IDOrSet_MonitorID__exposer.def( "__hash__", &::SireID::IDOrSet<SireSystem::MonitorID>::hash );
    }

}
