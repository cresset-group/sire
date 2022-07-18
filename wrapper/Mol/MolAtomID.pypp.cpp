// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "MolAtomID.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "molatomid.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "selector.hpp"

#include <QDebug>

#include "molatomid.h"

SireMol::MolAtomID __copy__(const SireMol::MolAtomID &other){ return SireMol::MolAtomID(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MolAtomID_class(){

    { //::SireMol::MolAtomID
        typedef bp::class_< SireMol::MolAtomID, bp::bases< SireMol::AtomID, SireID::ID > > MolAtomID_exposer_t;
        MolAtomID_exposer_t MolAtomID_exposer = MolAtomID_exposer_t( "MolAtomID", "This class represents an ID that is used to identify\na specific atom (or atoms) in a specific molecule\n(of molecules)\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a MolAtomID that matches everything") );
        bp::scope MolAtomID_scope( MolAtomID_exposer );
        MolAtomID_exposer.def( bp::init< SireMol::MolID const &, SireMol::AtomID const & >(( bp::arg("molid"), bp::arg("atomid") ), "Construct a MolAtomID that matches the atoms identified by atomid\nin the molecules identified by molid") );
        MolAtomID_exposer.def( bp::init< SireMol::AtomID const &, SireMol::MolID const & >(( bp::arg("atomid"), bp::arg("molid") ), "Construct a MolAtomID that matches the atoms identified by atomid\nin the molecules identified by molid") );
        MolAtomID_exposer.def( bp::init< boost::tuples::tuple< SireMol::MolIdentifier, SireMol::AtomIdentifier, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > const & >(( bp::arg("molatomid") ), "Construct a MolAtomID that matches the specified atoms in the specified\nmolecules") );
        MolAtomID_exposer.def( bp::init< boost::tuples::tuple< SireMol::AtomIdentifier, SireMol::MolIdentifier, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > const & >(( bp::arg("molatomid") ), "Construct a MolAtomID that matches the specified atoms in the specified\nmolecules") );
        MolAtomID_exposer.def( bp::init< SireMol::MolAtomID const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::MolAtomID::atomID
        
            typedef ::SireMol::AtomID const & ( ::SireMol::MolAtomID::*atomID_function_type)(  ) const;
            atomID_function_type atomID_function_value( &::SireMol::MolAtomID::atomID );
            
            MolAtomID_exposer.def( 
                "atomID"
                , atomID_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the AtomID part of this match" );
        
        }
        { //::SireMol::MolAtomID::hash
        
            typedef ::uint ( ::SireMol::MolAtomID::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::MolAtomID::hash );
            
            MolAtomID_exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "Return a hash of this ID" );
        
        }
        { //::SireMol::MolAtomID::isNull
        
            typedef bool ( ::SireMol::MolAtomID::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::MolAtomID::isNull );
            
            MolAtomID_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is null" );
        
        }
        { //::SireMol::MolAtomID::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolAtomID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::MolAtomID::map );
            
            MolAtomID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "Map this ID to the indicies of the matching atoms\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MolAtomID::molID
        
            typedef ::SireMol::MolID const & ( ::SireMol::MolAtomID::*molID_function_type)(  ) const;
            molID_function_type molID_function_value( &::SireMol::MolAtomID::molID );
            
            MolAtomID_exposer.def( 
                "molID"
                , molID_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the MolID part of this match" );
        
        }
        MolAtomID_exposer.def( bp::self != bp::self );
        { //::SireMol::MolAtomID::operator=
        
            typedef ::SireMol::MolAtomID & ( ::SireMol::MolAtomID::*assign_function_type)( ::SireMol::MolAtomID const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolAtomID::operator= );
            
            MolAtomID_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MolAtomID_exposer.def( bp::self == bp::other< SireID::ID >() );
        MolAtomID_exposer.def( bp::self == bp::self );
        { //::SireMol::MolAtomID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Atom > > ( ::SireMol::MolAtomID::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolAtomID::selectAllFrom );
            
            MolAtomID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolAtomID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Atom > > ( ::SireMol::MolAtomID::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolAtomID::selectAllFrom );
            
            MolAtomID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolAtomID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Atom > > ( ::SireMol::MolAtomID::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolAtomID::selectAllFrom );
            
            MolAtomID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolAtomID::toString
        
            typedef ::QString ( ::SireMol::MolAtomID::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolAtomID::toString );
            
            MolAtomID_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this ID" );
        
        }
        { //::SireMol::MolAtomID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolAtomID::typeName );
            
            MolAtomID_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::MolAtomID::what
        
            typedef char const * ( ::SireMol::MolAtomID::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::MolAtomID::what );
            
            MolAtomID_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MolAtomID_exposer.staticmethod( "typeName" );
        MolAtomID_exposer.def( "__copy__", &__copy__);
        MolAtomID_exposer.def( "__deepcopy__", &__copy__);
        MolAtomID_exposer.def( "clone", &__copy__);
        MolAtomID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolAtomID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolAtomID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolAtomID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolAtomID_exposer.def_pickle(sire_pickle_suite< ::SireMol::MolAtomID >());
        MolAtomID_exposer.def( "__str__", &__str__< ::SireMol::MolAtomID > );
        MolAtomID_exposer.def( "__repr__", &__str__< ::SireMol::MolAtomID > );
        MolAtomID_exposer.def( "__hash__", &::SireMol::MolAtomID::hash );
    }

}
