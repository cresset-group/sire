// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "IDOrSet_CGID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "cgid.h"

#include "cgidentifier.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "cgid.h"

SireID::IDOrSet<SireMol::CGID> __copy__(const SireID::IDOrSet<SireMol::CGID> &other){ return SireID::IDOrSet<SireMol::CGID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_IDOrSet_CGID__class(){

    { //::SireID::IDOrSet< SireMol::CGID >
        typedef bp::class_< SireID::IDOrSet< SireMol::CGID >, bp::bases< SireMol::CGID, SireID::ID > > IDOrSet_CGID__exposer_t;
        IDOrSet_CGID__exposer_t IDOrSet_CGID__exposer = IDOrSet_CGID__exposer_t( "IDOrSet_CGID_", "", bp::init< >("") );
        bp::scope IDOrSet_CGID__scope( IDOrSet_CGID__exposer );
        IDOrSet_CGID__exposer.def( bp::init< SireMol::CGID const & >(( bp::arg("id") ), "") );
        IDOrSet_CGID__exposer.def( bp::init< SireMol::CGID const &, SireMol::CGID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDOrSet_CGID__exposer.def( bp::init< QList< SireMol::CGIdentifier > const & >(( bp::arg("ids") ), "") );
        IDOrSet_CGID__exposer.def( bp::init< SireID::IDOrSet< SireMol::CGID > const & >(( bp::arg("ids") ), "") );
        IDOrSet_CGID__exposer.def( bp::init< SireID::IDOrSet< SireMol::CGID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDOrSet< SireMol::CGID >::IDs
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::QSet< SireMol::CGIdentifier > const & ( ::SireID::IDOrSet< SireMol::CGID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDOrSet< SireMol::CGID >::IDs );
            
            IDOrSet_CGID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::hash
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::uint ( ::SireID::IDOrSet< SireMol::CGID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDOrSet< SireMol::CGID >::hash );
            
            IDOrSet_CGID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::isNull
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef bool ( ::SireID::IDOrSet< SireMol::CGID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDOrSet< SireMol::CGID >::isNull );
            
            IDOrSet_CGID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::map
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::QList< SireMol::CGIdx > ( ::SireID::IDOrSet< SireMol::CGID >::*map_function_type)( ::SireID::IDOrSet< SireMol::CGID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDOrSet< SireMol::CGID >::map );
            
            IDOrSet_CGID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        IDOrSet_CGID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDOrSet_CGID__exposer.def( bp::self != bp::self );
        IDOrSet_CGID__exposer.def( bp::self != bp::other< SireMol::CGID >() );
        { //::SireID::IDOrSet< SireMol::CGID >::operator=
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::SireID::IDOrSet< SireMol::CGID > & ( ::SireID::IDOrSet< SireMol::CGID >::*assign_function_type)( ::SireID::IDOrSet< SireMol::CGID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireMol::CGID >::operator= );
            
            IDOrSet_CGID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::operator=
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::SireID::IDOrSet< SireMol::CGID > & ( ::SireID::IDOrSet< SireMol::CGID >::*assign_function_type)( ::SireMol::CGID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireMol::CGID >::operator= );
            
            IDOrSet_CGID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDOrSet_CGID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDOrSet_CGID__exposer.def( bp::self == bp::self );
        IDOrSet_CGID__exposer.def( bp::self == bp::other< SireMol::CGID >() );
        { //::SireID::IDOrSet< SireMol::CGID >::toString
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef ::QString ( ::SireID::IDOrSet< SireMol::CGID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDOrSet< SireMol::CGID >::toString );
            
            IDOrSet_CGID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::typeName
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDOrSet< SireMol::CGID >::typeName );
            
            IDOrSet_CGID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::CGID >::what
        
            typedef SireID::IDOrSet< SireMol::CGID > exported_class_t;
            typedef char const * ( ::SireID::IDOrSet< SireMol::CGID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDOrSet< SireMol::CGID >::what );
            
            IDOrSet_CGID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IDOrSet_CGID__exposer.staticmethod( "typeName" );
        IDOrSet_CGID__exposer.def( "__copy__", &__copy__);
        IDOrSet_CGID__exposer.def( "__deepcopy__", &__copy__);
        IDOrSet_CGID__exposer.def( "clone", &__copy__);
        IDOrSet_CGID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDOrSet<SireMol::CGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_CGID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDOrSet<SireMol::CGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_CGID__exposer.def_pickle(sire_pickle_suite< ::SireID::IDOrSet<SireMol::CGID> >());
        IDOrSet_CGID__exposer.def( "__str__", &__str__< ::SireID::IDOrSet<SireMol::CGID> > );
        IDOrSet_CGID__exposer.def( "__repr__", &__str__< ::SireID::IDOrSet<SireMol::CGID> > );
        IDOrSet_CGID__exposer.def( "__hash__", &::SireID::IDOrSet<SireMol::CGID>::hash );
    }

}
