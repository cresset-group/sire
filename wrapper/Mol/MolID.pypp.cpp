// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "MolID.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/incremint.h"

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atomidx.h"

#include "mgidx.h"

#include "molatomid.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molid.h"

#include "molidx.h"

#include "molname.h"

#include "molnum.h"

#include "mover.hpp"

#include "specifymol.h"

#include "tostring.h"

#include "molid.h"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MolID_class(){

    { //::SireMol::MolID
        typedef bp::class_< SireMol::MolID, bp::bases< SireID::ID >, boost::noncopyable > MolID_exposer_t;
        MolID_exposer_t MolID_exposer = MolID_exposer_t( "MolID", "This is the base class of all identifiers that are used\nto identify a Molecule\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope MolID_scope( MolID_exposer );
        { //::SireMol::MolID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolID::*map_function_type)( ::SireMol::Molecules const & ) const;
            map_function_type map_function_value( &::SireMol::MolID::map );
            
            MolID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molecules") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::MolID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolID::*map_function_type)( ::SireMol::MoleculeGroup const & ) const;
            map_function_type map_function_value( &::SireMol::MolID::map );
            
            MolID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::MolID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolID::*map_function_type)( ::SireMol::MolGroupsBase const & ) const;
            map_function_type map_function_value( &::SireMol::MolID::map );
            
            MolID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molgroupsbase") )
                , bp::release_gil_policy()
                , "" );
        
        }
        MolID_exposer.def( bp::self & bp::self );
        MolID_exposer.def( bp::self & bp::other< SireMol::AtomID >() );
        { //::SireMol::MolID::operator()
        
            typedef ::SireMol::SpecifyMol ( ::SireMol::MolID::*__call___function_type)( int ) const;
            __call___function_type __call___function_value( &::SireMol::MolID::operator() );
            
            MolID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::MolID::operator()
        
            typedef ::SireMol::SpecifyMol ( ::SireMol::MolID::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireMol::MolID::operator() );
            
            MolID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        MolID_exposer.def( bp::self * bp::self );
        MolID_exposer.def( bp::self * bp::other< SireMol::AtomID >() );
        MolID_exposer.def( bp::self + bp::self );
        MolID_exposer.def( bp::self + bp::other< SireMol::AtomID >() );
        { //::SireMol::MolID::operator[]
        
            typedef ::SireMol::SpecifyMol ( ::SireMol::MolID::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::MolID::operator[] );
            
            MolID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        MolID_exposer.def( bp::self | bp::self );
        MolID_exposer.def( bp::self | bp::other< SireMol::AtomID >() );
        { //::SireMol::MolID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolID::typeName );
            
            MolID_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MolID_exposer.staticmethod( "typeName" );
        MolID_exposer.def( "__str__", &__str__< ::SireMol::MolID > );
        MolID_exposer.def( "__repr__", &__str__< ::SireMol::MolID > );
        MolID_exposer.def( "__hash__", &::SireMol::MolID::hash );
    }

}
