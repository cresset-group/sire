// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MatchAll_ChainID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "atom.h"

#include "chain.h"

#include "chainid.h"

#include "chainidentifier.h"

#include "chainresid.h"

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

#include "chainid.h"

SireID::MatchAll<SireMol::ChainID> __copy__(const SireID::MatchAll<SireMol::ChainID> &other){ return SireID::MatchAll<SireMol::ChainID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MatchAll_ChainID__class(){

    { //::SireID::MatchAll< SireMol::ChainID >
        typedef bp::class_< SireID::MatchAll< SireMol::ChainID >, bp::bases< SireMol::ChainID, SireID::ID > > MatchAll_ChainID__exposer_t;
        MatchAll_ChainID__exposer_t MatchAll_ChainID__exposer = MatchAll_ChainID__exposer_t( "MatchAll_ChainID_", "", bp::init< >("") );
        bp::scope MatchAll_ChainID__scope( MatchAll_ChainID__exposer );
        MatchAll_ChainID__exposer.def( bp::init< SireID::MatchAll< SireMol::ChainID > const & >(( bp::arg("other") ), "") );
        { //::SireID::MatchAll< SireMol::ChainID >::hash
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef ::uint ( ::SireID::MatchAll< SireMol::ChainID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::MatchAll< SireMol::ChainID >::hash );
            
            MatchAll_ChainID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::ChainID >::isNull
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef bool ( ::SireID::MatchAll< SireMol::ChainID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::MatchAll< SireMol::ChainID >::isNull );
            
            MatchAll_ChainID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::ChainID >::map
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef ::QList< SireMol::ChainIdx > ( ::SireID::MatchAll< SireMol::ChainID >::*map_function_type)( ::SireMol::ChainID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::MatchAll< SireMol::ChainID >::map );
            
            MatchAll_ChainID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        MatchAll_ChainID__exposer.def( bp::self != bp::self );
        MatchAll_ChainID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::ChainID >::operator=
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef ::SireID::MatchAll< SireMol::ChainID > & ( ::SireID::MatchAll< SireMol::ChainID >::*assign_function_type)( ::SireID::MatchAll< SireMol::ChainID > const & ) ;
            assign_function_type assign_function_value( &::SireID::MatchAll< SireMol::ChainID >::operator= );
            
            MatchAll_ChainID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MatchAll_ChainID__exposer.def( bp::self == bp::self );
        MatchAll_ChainID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::ChainID >::toString
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef ::QString ( ::SireID::MatchAll< SireMol::ChainID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::MatchAll< SireMol::ChainID >::toString );
            
            MatchAll_ChainID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::ChainID >::typeName
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::MatchAll< SireMol::ChainID >::typeName );
            
            MatchAll_ChainID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::ChainID >::what
        
            typedef SireID::MatchAll< SireMol::ChainID > exported_class_t;
            typedef char const * ( ::SireID::MatchAll< SireMol::ChainID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::MatchAll< SireMol::ChainID >::what );
            
            MatchAll_ChainID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MatchAll_ChainID__exposer.staticmethod( "typeName" );
        MatchAll_ChainID__exposer.def( "__copy__", &__copy__);
        MatchAll_ChainID__exposer.def( "__deepcopy__", &__copy__);
        MatchAll_ChainID__exposer.def( "clone", &__copy__);
        MatchAll_ChainID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::MatchAll<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_ChainID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::MatchAll<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_ChainID__exposer.def_pickle(sire_pickle_suite< ::SireID::MatchAll<SireMol::ChainID> >());
        MatchAll_ChainID__exposer.def( "__str__", &__str__< ::SireID::MatchAll<SireMol::ChainID> > );
        MatchAll_ChainID__exposer.def( "__repr__", &__str__< ::SireID::MatchAll<SireMol::ChainID> > );
        MatchAll_ChainID__exposer.def( "__hash__", &::SireID::MatchAll<SireMol::ChainID>::hash );
    }

}
