// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "MolResNum.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molresid.h"

#include "residue.h"

#include "selector.hpp"

#include <QDebug>

#include "molresid.h"

SireMol::MolResNum __copy__(const SireMol::MolResNum &other){ return SireMol::MolResNum(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MolResNum_class(){

    { //::SireMol::MolResNum
        typedef bp::class_< SireMol::MolResNum, bp::bases< SireMol::ResID, SireID::ID > > MolResNum_exposer_t;
        MolResNum_exposer_t MolResNum_exposer = MolResNum_exposer_t( "MolResNum", "This class represents an ID that is used to identify\na specific residue using both the residue and\nmolecule number\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a MolResNum that matches everything") );
        bp::scope MolResNum_scope( MolResNum_exposer );
        MolResNum_exposer.def( bp::init< SireMol::MolNum const &, SireMol::ResNum const & >(( bp::arg("molnum"), bp::arg("resnum") ), "Construct a MolResNum that matches the residue resnum in the molecule molnum") );
        MolResNum_exposer.def( bp::init< SireMol::ResNum const &, SireMol::MolNum const & >(( bp::arg("resnum"), bp::arg("molnum") ), "Construct a MolResNum that matches the residue resnum in the molecule molnum") );
        MolResNum_exposer.def( bp::init< SireMol::MolResNum const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::MolResNum::hash
        
            typedef ::uint ( ::SireMol::MolResNum::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::MolResNum::hash );
            
            MolResNum_exposer.def( 
                "hash"
                , hash_function_value
                , "Return a hash of this ID" );
        
        }
        { //::SireMol::MolResNum::isNull
        
            typedef bool ( ::SireMol::MolResNum::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::MolResNum::isNull );
            
            MolResNum_exposer.def( 
                "isNull"
                , isNull_function_value
                , "Return whether or not this is null" );
        
        }
        { //::SireMol::MolResNum::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolResNum::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::MolResNum::map );
            
            MolResNum_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , "Map this ID to the indicies of the matching residues\nThrow: SireMol::missing_residue\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MolResNum::molNum
        
            typedef ::SireMol::MolNum const & ( ::SireMol::MolResNum::*molNum_function_type)(  ) const;
            molNum_function_type molNum_function_value( &::SireMol::MolResNum::molNum );
            
            MolResNum_exposer.def( 
                "molNum"
                , molNum_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the MolNum part of this match" );
        
        }
        MolResNum_exposer.def( bp::self != bp::self );
        { //::SireMol::MolResNum::operator=
        
            typedef ::SireMol::MolResNum & ( ::SireMol::MolResNum::*assign_function_type)( ::SireMol::MolResNum const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolResNum::operator= );
            
            MolResNum_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MolResNum_exposer.def( bp::self == bp::other< SireID::ID >() );
        MolResNum_exposer.def( bp::self == bp::self );
        { //::SireMol::MolResNum::resNum
        
            typedef ::SireMol::ResNum const & ( ::SireMol::MolResNum::*resNum_function_type)(  ) const;
            resNum_function_type resNum_function_value( &::SireMol::MolResNum::resNum );
            
            MolResNum_exposer.def( 
                "resNum"
                , resNum_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the ResNum part of this match" );
        
        }
        { //::SireMol::MolResNum::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResNum::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResNum::selectAllFrom );
            
            MolResNum_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolResNum::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResNum::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResNum::selectAllFrom );
            
            MolResNum_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolResNum::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResNum::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResNum::selectAllFrom );
            
            MolResNum_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::MolResNum::toString
        
            typedef ::QString ( ::SireMol::MolResNum::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolResNum::toString );
            
            MolResNum_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this ID" );
        
        }
        { //::SireMol::MolResNum::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolResNum::typeName );
            
            MolResNum_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::MolResNum::what
        
            typedef char const * ( ::SireMol::MolResNum::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::MolResNum::what );
            
            MolResNum_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MolResNum_exposer.staticmethod( "typeName" );
        MolResNum_exposer.def( "__copy__", &__copy__);
        MolResNum_exposer.def( "__deepcopy__", &__copy__);
        MolResNum_exposer.def( "clone", &__copy__);
        MolResNum_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolResNum >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolResNum_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolResNum >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolResNum_exposer.def_pickle(sire_pickle_suite< ::SireMol::MolResNum >());
        MolResNum_exposer.def( "__str__", &__str__< ::SireMol::MolResNum > );
        MolResNum_exposer.def( "__repr__", &__str__< ::SireMol::MolResNum > );
        MolResNum_exposer.def( "__hash__", &::SireMol::MolResNum::hash );
    }

}
