// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ChainID.pypp.hpp"

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

#include "Helpers/str.hpp"

void register_ChainID_class(){

    { //::SireMol::ChainID
        typedef bp::class_< SireMol::ChainID, bp::bases< SireID::ID >, boost::noncopyable > ChainID_exposer_t;
        ChainID_exposer_t ChainID_exposer = ChainID_exposer_t( "ChainID", "This is the base class of all identifiers that are used\nto identify a chain within a molecule\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope ChainID_scope( ChainID_exposer );
        { //::SireMol::ChainID::any
        
            typedef ::SireID::MatchAll< SireMol::ChainID > ( *any_function_type )(  );
            any_function_type any_function_value( &::SireMol::ChainID::any );
            
            ChainID_exposer.def( 
                "any"
                , any_function_value
                , "Return a match for any chains" );
        
        }
        { //::SireMol::ChainID::atom
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atom_function_type)( int ) const;
            atom_function_type atom_function_value( &::SireMol::ChainID::atom );
            
            ChainID_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("i") )
                , "Return a specific atom in the matching residues" );
        
        }
        { //::SireMol::ChainID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atoms_function_type)(  ) const;
            atoms_function_type atoms_function_value( &::SireMol::ChainID::atoms );
            
            ChainID_exposer.def( 
                "atoms"
                , atoms_function_value
                , "Return the atoms in the matching residues" );
        
        }
        { //::SireMol::ChainID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atoms_function_type)( int,int ) const;
            atoms_function_type atoms_function_value( &::SireMol::ChainID::atoms );
            
            ChainID_exposer.def( 
                "atoms"
                , atoms_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "Return a range of atoms in the matching residues" );
        
        }
        { //::SireMol::ChainID::fromString
        
            typedef ::SireMol::ChainIdentifier ( *fromString_function_type )( ::QString const & );
            fromString_function_type fromString_function_value( &::SireMol::ChainID::fromString );
            
            ChainID_exposer.def( 
                "fromString"
                , fromString_function_value
                , ( bp::arg("id") )
                , "Return an AtomID constructed from the passed string" );
        
        }
        { //::SireMol::ChainID::inverse
        
            typedef ::SireID::InvertMatch< SireMol::ChainID > ( ::SireMol::ChainID::*inverse_function_type)(  ) const;
            inverse_function_type inverse_function_value( &::SireMol::ChainID::inverse );
            
            ChainID_exposer.def( 
                "inverse"
                , inverse_function_value
                , "Inverse this match" );
        
        }
        { //::SireMol::ChainID::invert
        
            typedef ::SireID::InvertMatch< SireMol::ChainID > ( ::SireMol::ChainID::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMol::ChainID::invert );
            
            ChainID_exposer.def( 
                "invert"
                , invert_function_value
                , "Inverse this match" );
        
        }
        { //::SireMol::ChainID::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::ChainID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::ChainID::map );
            
            ChainID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , "Map this ID back to the indicies of the chains in the molecule,\nusing the passed MoleculeInfo to do the mapping" );
        
        }
        { //::SireMol::ChainID::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::ChainID::*map_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            map_function_type map_function_value( &::SireMol::ChainID::map );
            
            ChainID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Map this ChainID to the chains in the passed molecule view\nThrow: SireMol::missing_chain\nThrow: SireError::invalid_index\n" );
        
        }
        ChainID_exposer.def( !bp::self );
        ChainID_exposer.def( bp::self & bp::self );
        ChainID_exposer.def( bp::self & bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::SegID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::CGID >() );
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( ::SireBase::Range const & ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( ::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( ::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end") )
                , "" );
        
        }
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( ::qint64,::qint64,::qint64 ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("start"), bp::arg("end"), bp::arg("increment") )
                , "" );
        
        }
        ChainID_exposer.def( bp::self * bp::self );
        ChainID_exposer.def( bp::self * bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self * bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self + bp::self );
        ChainID_exposer.def( bp::self + bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::SegID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::CGID >() );
        ChainID_exposer.def( bp::self - bp::self );
        ChainID_exposer.def( bp::self - bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self - bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self - bp::other< SireMol::SegID >() );
        ChainID_exposer.def( bp::self - bp::other< SireMol::CGID >() );
        ChainID_exposer.def( -bp::self );
        { //::SireMol::ChainID::operator[]
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__getitem___function_type)( ::qint64 ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ChainID::operator[] );
            
            ChainID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::ChainID::operator[]
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__getitem___function_type)( ::SireBase::Range const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ChainID::operator[] );
            
            ChainID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("range") )
                , "" );
        
        }
        ChainID_exposer.def( bp::self | bp::self );
        ChainID_exposer.def( bp::self | bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self | bp::other< SireMol::AtomID >() );
        { //::SireMol::ChainID::residue
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residue_function_type)( int ) const;
            residue_function_type residue_function_value( &::SireMol::ChainID::residue );
            
            ChainID_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("i") )
                , "Return a specific atom in the matching residues" );
        
        }
        { //::SireMol::ChainID::residues
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residues_function_type)(  ) const;
            residues_function_type residues_function_value( &::SireMol::ChainID::residues );
            
            ChainID_exposer.def( 
                "residues"
                , residues_function_value
                , "Return the atoms in the matching residues" );
        
        }
        { //::SireMol::ChainID::residues
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residues_function_type)( int,int ) const;
            residues_function_type residues_function_value( &::SireMol::ChainID::residues );
            
            ChainID_exposer.def( 
                "residues"
                , residues_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "Return a range of atoms in the matching residues" );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::SireMol::Selector< SireMol::Chain > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Select all the chains from the passed view that match this ID\nThrow: SireMol::missing_chain\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_chain\n" );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return all of the chains from the molecules that match\nthis ID\nThrow: SireMol::missing_chain\n" );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the chains from the molecule group molgroup that match\nthis ID\nThrow: SireMol::missing_chain\n" );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the set of chains that match this ID in the molecule groups\nset molgroups\nThrow: SireMol::missing_chain\n" );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , "Select the chain from the passed view that matches this ID\nThrow: SireMol::missing_chain\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_chain\n" );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the chain from the molecules molecules that matches\nthis ID\nThrow: SireMol::missing_chain\nThrow: SireMol::duplicate_chain\n" );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the chain from the molecule group molgroup that matches\nthis ID\nThrow: SireMol::missing_chain\nThrow: SireMol::duplicate_chain\n" );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the chain from the molecule groups molgroups that matches\nthis ID\nThrow: SireMol::missing_chain\nThrow: SireMol::duplicate_chain\n" );
        
        }
        { //::SireMol::ChainID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ChainID::typeName );
            
            ChainID_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        ChainID_exposer.staticmethod( "any" );
        ChainID_exposer.staticmethod( "fromString" );
        ChainID_exposer.staticmethod( "typeName" );
        ChainID_exposer.def( "__str__", &__str__< ::SireMol::ChainID > );
        ChainID_exposer.def( "__repr__", &__str__< ::SireMol::ChainID > );
        ChainID_exposer.def( "__hash__", &::SireMol::ChainID::hash );
    }

}
