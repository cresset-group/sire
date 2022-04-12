// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ResID.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "chain.h"

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

#include "resid.h"

#include "residentifier.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "withres.h"

#include "resid.h"

#include "Helpers/str.hpp"

void register_ResID_class(){

    { //::SireMol::ResID
        typedef bp::class_< SireMol::ResID, bp::bases< SireID::ID >, boost::noncopyable > ResID_exposer_t;
        ResID_exposer_t ResID_exposer = ResID_exposer_t( "ResID", "This is the base class of all identifiers that are used\nto identify a residue within a molecule\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope ResID_scope( ResID_exposer );
        { //::SireMol::ResID::any
        
            typedef ::SireID::MatchAll< SireMol::ResID > ( *any_function_type )(  );
            any_function_type any_function_value( &::SireMol::ResID::any );
            
            ResID_exposer.def( 
                "any"
                , any_function_value
                , "Return a match for all residues" );
        
        }
        { //::SireMol::ResID::atom
        
            typedef ::SireMol::AtomsIn< SireMol::ResID > ( ::SireMol::ResID::*atom_function_type)( int ) const;
            atom_function_type atom_function_value( &::SireMol::ResID::atom );
            
            ResID_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("i") )
                , "Return a specific atom in the matching residues" );
        
        }
        { //::SireMol::ResID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ResID > ( ::SireMol::ResID::*atoms_function_type)(  ) const;
            atoms_function_type atoms_function_value( &::SireMol::ResID::atoms );
            
            ResID_exposer.def( 
                "atoms"
                , atoms_function_value
                , "Return the atoms in the matching residues" );
        
        }
        { //::SireMol::ResID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ResID > ( ::SireMol::ResID::*atoms_function_type)( int,int ) const;
            atoms_function_type atoms_function_value( &::SireMol::ResID::atoms );
            
            ResID_exposer.def( 
                "atoms"
                , atoms_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "Return a range of atoms in the matching residues" );
        
        }
        { //::SireMol::ResID::chains
        
            typedef ::SireMol::ChainsWithRes ( ::SireMol::ResID::*chains_function_type)(  ) const;
            chains_function_type chains_function_value( &::SireMol::ResID::chains );
            
            ResID_exposer.def( 
                "chains"
                , chains_function_value
                , "Return a Chain ID that matches chains that contain residues\nthat match this Residue ID" );
        
        }
        { //::SireMol::ResID::fromString
        
            typedef ::SireMol::ResIdentifier ( *fromString_function_type )( ::QString const & );
            fromString_function_type fromString_function_value( &::SireMol::ResID::fromString );
            
            ResID_exposer.def( 
                "fromString"
                , fromString_function_value
                , ( bp::arg("id") )
                , "" );
        
        }
        { //::SireMol::ResID::inverse
        
            typedef ::SireID::InvertMatch< SireMol::ResID > ( ::SireMol::ResID::*inverse_function_type)(  ) const;
            inverse_function_type inverse_function_value( &::SireMol::ResID::inverse );
            
            ResID_exposer.def( 
                "inverse"
                , inverse_function_value
                , "Invert this match" );
        
        }
        { //::SireMol::ResID::invert
        
            typedef ::SireID::InvertMatch< SireMol::ResID > ( ::SireMol::ResID::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMol::ResID::invert );
            
            ResID_exposer.def( 
                "invert"
                , invert_function_value
                , "Invert this match" );
        
        }
        { //::SireMol::ResID::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::ResID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::ResID::map );
            
            ResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , "Map this ID back to the indicies of the residues in the molecule,\nusing the passed MoleculeInfo to do the mapping" );
        
        }
        { //::SireMol::ResID::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::ResID::*map_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            map_function_type map_function_value( &::SireMol::ResID::map );
            
            ResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Map this ResID to the atoms in the passed molecule view\nThrow: SireMol::missing_residue\nThrow: SireError::invalid_index\n" );
        
        }
        ResID_exposer.def( !bp::self );
        ResID_exposer.def( bp::self & bp::self );
        ResID_exposer.def( bp::self & bp::other< SireMol::ChainID >() );
        ResID_exposer.def( bp::self & bp::other< SireMol::AtomID >() );
        ResID_exposer.def( bp::self & bp::other< SireMol::SegID >() );
        ResID_exposer.def( bp::self & bp::other< SireMol::CGID >() );
        { //::SireMol::ResID::operator()
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__call___function_type)( ::SireBase::Range const & ) const;
            __call___function_type __call___function_value( &::SireMol::ResID::operator() );
            
            ResID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireMol::ResID::operator()
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__call___function_type)( ::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ResID::operator() );
            
            ResID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::ResID::operator()
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__call___function_type)( ::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ResID::operator() );
            
            ResID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end") )
                , "" );
        
        }
        { //::SireMol::ResID::operator()
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__call___function_type)( ::qint64,::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ResID::operator() );
            
            ResID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end"), bp::arg("increment") )
                , "" );
        
        }
        ResID_exposer.def( bp::self * bp::self );
        ResID_exposer.def( bp::self * bp::other< SireMol::AtomID >() );
        ResID_exposer.def( bp::self * bp::other< SireMol::ChainID >() );
        ResID_exposer.def( bp::self + bp::self );
        ResID_exposer.def( bp::self + bp::other< SireMol::ChainID >() );
        ResID_exposer.def( bp::self + bp::other< SireMol::AtomID >() );
        ResID_exposer.def( bp::self + bp::other< SireMol::SegID >() );
        ResID_exposer.def( bp::self + bp::other< SireMol::CGID >() );
        ResID_exposer.def( bp::self - bp::self );
        ResID_exposer.def( bp::self - bp::other< SireMol::ChainID >() );
        ResID_exposer.def( bp::self - bp::other< SireMol::AtomID >() );
        ResID_exposer.def( bp::self - bp::other< SireMol::SegID >() );
        ResID_exposer.def( bp::self - bp::other< SireMol::CGID >() );
        ResID_exposer.def( -bp::self );
        { //::SireMol::ResID::operator[]
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__getitem___function_type)( ::qint64 ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResID::operator[] );
            
            ResID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::ResID::operator[]
        
            typedef ::SireID::Specify< SireMol::ResID > ( ::SireMol::ResID::*__getitem___function_type)( ::SireBase::Range const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResID::operator[] );
            
            ResID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        ResID_exposer.def( bp::self | bp::self );
        ResID_exposer.def( bp::self | bp::other< SireMol::AtomID >() );
        ResID_exposer.def( bp::self | bp::other< SireMol::ChainID >() );
        { //::SireMol::ResID::selectAllFrom
        
            typedef ::SireMol::Selector< SireMol::Residue > ( ::SireMol::ResID::*selectAllFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ResID::selectAllFrom );
            
            ResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Select all the atoms from the passed view that match this ID\nThrow: SireMol::missing_residue\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_residue\n" );
        
        }
        { //::SireMol::ResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::ResID::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ResID::selectAllFrom );
            
            ResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return all of the atoms from the molecules that match\nthis ID\nThrow: SireMol::missing_residue\n" );
        
        }
        { //::SireMol::ResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::ResID::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ResID::selectAllFrom );
            
            ResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the atoms from the molecule group molgroup that match\nthis ID\nThrow: SireMol::missing_residue\n" );
        
        }
        { //::SireMol::ResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::ResID::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ResID::selectAllFrom );
            
            ResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the set of atoms that match this ID in the molecule groups\nset molgroups\nThrow: SireMol::missing_residue\n" );
        
        }
        { //::SireMol::ResID::selectFrom
        
            typedef ::SireMol::Residue ( ::SireMol::ResID::*selectFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ResID::selectFrom );
            
            ResID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Select the atom from the passed view that matches this ID\nThrow: SireMol::missing_residue\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_residue\n" );
        
        }
        { //::SireMol::ResID::selectFrom
        
            typedef ::SireMol::Residue ( ::SireMol::ResID::*selectFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ResID::selectFrom );
            
            ResID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the atom from the molecules molecules that matches\nthis ID\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\n" );
        
        }
        { //::SireMol::ResID::selectFrom
        
            typedef ::SireMol::Residue ( ::SireMol::ResID::*selectFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ResID::selectFrom );
            
            ResID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the atom from the molecule group molgroup that matches\nthis ID\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\n" );
        
        }
        { //::SireMol::ResID::selectFrom
        
            typedef ::SireMol::Residue ( ::SireMol::ResID::*selectFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ResID::selectFrom );
            
            ResID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the atom from the molecule groups molgroups that matches\nthis ID\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\n" );
        
        }
        { //::SireMol::ResID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ResID::typeName );
            
            ResID_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        ResID_exposer.staticmethod( "any" );
        ResID_exposer.staticmethod( "fromString" );
        ResID_exposer.staticmethod( "typeName" );
        ResID_exposer.def( "__str__", &__str__< ::SireMol::ResID > );
        ResID_exposer.def( "__repr__", &__str__< ::SireMol::ResID > );
        ResID_exposer.def( "__hash__", &::SireMol::ResID::hash );
    }

}
