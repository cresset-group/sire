// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Specify_SegID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

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

#include "segid.h"

#include "segidentifier.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "segid.h"

SireID::Specify<SireMol::SegID> __copy__(const SireID::Specify<SireMol::SegID> &other){ return SireID::Specify<SireMol::SegID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Specify_SegID__class(){

    { //::SireID::Specify< SireMol::SegID >
        typedef bp::class_< SireID::Specify< SireMol::SegID >, bp::bases< SireMol::SegID, SireID::ID > > Specify_SegID__exposer_t;
        Specify_SegID__exposer_t Specify_SegID__exposer = Specify_SegID__exposer_t( "Specify_SegID_", "", bp::init< >("") );
        bp::scope Specify_SegID__scope( Specify_SegID__exposer );
        Specify_SegID__exposer.def( bp::init< SireMol::SegID const &, qint64 >(( bp::arg("id"), bp::arg("index") ), "") );
        Specify_SegID__exposer.def( bp::init< SireMol::SegID const &, qint64, qint64 >(( bp::arg("id"), bp::arg("start"), bp::arg("end") ), "") );
        Specify_SegID__exposer.def( bp::init< SireMol::SegID const &, qint64, qint64, qint64 >(( bp::arg("id"), bp::arg("start"), bp::arg("end"), bp::arg("increment") ), "") );
        Specify_SegID__exposer.def( bp::init< SireMol::SegID const &, SireBase::Range const & >(( bp::arg("id"), bp::arg("range") ), "") );
        Specify_SegID__exposer.def( bp::init< SireID::Specify< SireMol::SegID > const & >(( bp::arg("other") ), "") );
        { //::SireID::Specify< SireMol::SegID >::hash
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::uint ( ::SireID::Specify< SireMol::SegID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::Specify< SireMol::SegID >::hash );
            
            Specify_SegID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::isNull
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef bool ( ::SireID::Specify< SireMol::SegID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::Specify< SireMol::SegID >::isNull );
            
            Specify_SegID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::map
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::QList< SireMol::SegIdx > ( ::SireID::Specify< SireMol::SegID >::*map_function_type)( ::SireMol::SegID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::Specify< SireMol::SegID >::map );
            
            Specify_SegID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        Specify_SegID__exposer.def( bp::self != bp::self );
        Specify_SegID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::Specify< SireMol::SegID >::operator()
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__call___function_type)( ::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::SegID >::operator() );
            
            Specify_SegID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::operator()
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__call___function_type)( ::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::SegID >::operator() );
            
            Specify_SegID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::operator()
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__call___function_type)( ::qint64,::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::SegID >::operator() );
            
            Specify_SegID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end"), bp::arg("increment") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::operator()
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__call___function_type)( ::SireBase::Range const & ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::SegID >::operator() );
            
            Specify_SegID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::operator=
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > & ( ::SireID::Specify< SireMol::SegID >::*assign_function_type)( ::SireID::Specify< SireMol::SegID > const & ) ;
            assign_function_type assign_function_value( &::SireID::Specify< SireMol::SegID >::operator= );
            
            Specify_SegID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Specify_SegID__exposer.def( bp::self == bp::self );
        Specify_SegID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::Specify< SireMol::SegID >::operator[]
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__getitem___function_type)( ::qint64 ) const;
            __getitem___function_type __getitem___function_value( &::SireID::Specify< SireMol::SegID >::operator[] );
            
            Specify_SegID__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::operator[]
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::SireID::Specify< SireMol::SegID > ( ::SireID::Specify< SireMol::SegID >::*__getitem___function_type)( ::SireBase::Range const & ) const;
            __getitem___function_type __getitem___function_value( &::SireID::Specify< SireMol::SegID >::operator[] );
            
            Specify_SegID__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::toString
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef ::QString ( ::SireID::Specify< SireMol::SegID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::Specify< SireMol::SegID >::toString );
            
            Specify_SegID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::typeName
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::Specify< SireMol::SegID >::typeName );
            
            Specify_SegID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::Specify< SireMol::SegID >::what
        
            typedef SireID::Specify< SireMol::SegID > exported_class_t;
            typedef char const * ( ::SireID::Specify< SireMol::SegID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::Specify< SireMol::SegID >::what );
            
            Specify_SegID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Specify_SegID__exposer.staticmethod( "typeName" );
        Specify_SegID__exposer.def( "__copy__", &__copy__);
        Specify_SegID__exposer.def( "__deepcopy__", &__copy__);
        Specify_SegID__exposer.def( "clone", &__copy__);
        Specify_SegID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::Specify<SireMol::SegID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_SegID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::Specify<SireMol::SegID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_SegID__exposer.def_pickle(sire_pickle_suite< ::SireID::Specify<SireMol::SegID> >());
        Specify_SegID__exposer.def( "__str__", &__str__< ::SireID::Specify<SireMol::SegID> > );
        Specify_SegID__exposer.def( "__repr__", &__str__< ::SireID::Specify<SireMol::SegID> > );
        Specify_SegID__exposer.def( "__hash__", &::SireID::Specify<SireMol::SegID>::hash );
    }

}
