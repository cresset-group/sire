// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "TwoAtomFunctions.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/console.h"

#include "SireCAS/symbols.h"

#include "SireError/errors.h"

#include "SireMol/atommatcher.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "sireglobal.h"

#include "twoatomfunctions.h"

#include "twoatomfunctions.h"

#include "SireMol/moleculedata.h"

SireMM::TwoAtomFunctions __copy__(const SireMM::TwoAtomFunctions &other){ return SireMM::TwoAtomFunctions(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_TwoAtomFunctions_class(){

    { //::SireMM::TwoAtomFunctions
        typedef bp::class_< SireMM::TwoAtomFunctions, bp::bases< SireMM::AtomFunctions, SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > TwoAtomFunctions_exposer_t;
        TwoAtomFunctions_exposer_t TwoAtomFunctions_exposer = TwoAtomFunctions_exposer_t( "TwoAtomFunctions", "This class holds the set of TwoAtomFunction potentials that\nact between the atoms in a molecule\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope TwoAtomFunctions_scope( TwoAtomFunctions_exposer );
        TwoAtomFunctions_exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("moldata") ), "Construct the container to hold the set of two-atom functions\nfor the molecule whose data is in moldata") );
        TwoAtomFunctions_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "Construct the container to hold the set of two-atom functions\nfor the molecule whose layout is in molinfo") );
        TwoAtomFunctions_exposer.def( bp::init< SireMM::TwoAtomFunctions const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::SireMol::AtomIdx ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Clear all functions that involve the atom atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::SireMol::AtomID const & ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Clear any function that acts on the atoms identified by atom\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("atom0"), bp::arg("atom1") )
                , bp::release_gil_policy()
                , "Clear any function that acts between the atoms atom0 and atom1\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const & ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("atom0"), bp::arg("atom1") )
                , bp::release_gil_policy()
                , "Clear any function that acts between the atoms atom0 and atom1\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::SireMol::BondID const & ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("bondid") )
                , bp::release_gil_policy()
                , "Clear the potential that acts over the bond identified by bondid\nNote that this removes both 1-2 and 2-1\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)( ::QList< SireMol::AtomIdx > const &,bool ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , ( bp::arg("atoms"), bp::arg("exclusive")=(bool)(true) )
                , "Clear all functions that invole any of the atoms in atoms\n  - if exclusive is true, then this only removes functions\n  that exclusively involve these atoms - if false, then\n  if removes functions that involve any of these atoms\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::clear
        
            typedef void ( ::SireMM::TwoAtomFunctions::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMM::TwoAtomFunctions::clear );
            
            TwoAtomFunctions_exposer.def( 
                "clear"
                , clear_function_value
                , bp::release_gil_policy()
                , "Completely clear all of the functions from this set" );
        
        }
        { //::SireMM::TwoAtomFunctions::force
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*force_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::TwoAtomFunctions::force );
            
            TwoAtomFunctions_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\nbetween the atoms atom0 and atom1\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::force
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*force_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::TwoAtomFunctions::force );
            
            TwoAtomFunctions_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\nbetween the atoms atom0 and atom1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::force
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*force_function_type)( ::SireMol::BondID const &,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::TwoAtomFunctions::force );
            
            TwoAtomFunctions_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("bondid"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\non the bond identified by bondid\nThis searches first for the function 1-2, and if that is not\nfound then it returns the function for 2-1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::forces
        
            typedef ::QVector< SireMM::TwoAtomFunction > ( ::SireMM::TwoAtomFunctions::*forces_function_type)( ::SireCAS::Symbol const & ) const;
            forces_function_type forces_function_value( &::SireMM::TwoAtomFunctions::forces );
            
            TwoAtomFunctions_exposer.def( 
                "forces"
                , forces_function_value
                , ( bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force functions acting between the identified\npairs of atoms, for the given symbol" );
        
        }
        { //::SireMM::TwoAtomFunctions::includeOnly
        
            typedef ::SireMM::TwoAtomFunctions ( ::SireMM::TwoAtomFunctions::*includeOnly_function_type)( ::SireMol::AtomSelection const &,bool ) const;
            includeOnly_function_type includeOnly_function_value( &::SireMM::TwoAtomFunctions::includeOnly );
            
            TwoAtomFunctions_exposer.def( 
                "includeOnly"
                , includeOnly_function_value
                , ( bp::arg("selection"), bp::arg("isstrict")=(bool)(true) )
                , "Return the set of functions where only functions that involve the\natoms in selected_atoms are included. If isstrict is true, then\nonly include functions where all of the atoms are in selected_atoms,\nwhile if isstrict is false, include functions where at least one\natom is in selected_atoms" );
        
        }
        { //::SireMM::TwoAtomFunctions::isEmpty
        
            typedef bool ( ::SireMM::TwoAtomFunctions::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::TwoAtomFunctions::isEmpty );
            
            TwoAtomFunctions_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is empty (has no potentials for any internals)" );
        
        }
        { //::SireMM::TwoAtomFunctions::merge
        
            typedef ::SireBase::PropertyList ( ::SireMM::TwoAtomFunctions::*merge_function_type)( ::SireMol::MolViewProperty const &,::SireMol::AtomIdxMapping const &,::QString const &,::SireBase::PropertyMap const & ) const;
            merge_function_type merge_function_value( &::SireMM::TwoAtomFunctions::merge );
            
            TwoAtomFunctions_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("other"), bp::arg("mapping"), bp::arg("ghost")=::QString( ), bp::arg("map")=SireBase::PropertyMap() )
                , "Merge this property with another property" );
        
        }
        { //::SireMM::TwoAtomFunctions::nFunctions
        
            typedef int ( ::SireMM::TwoAtomFunctions::*nFunctions_function_type)(  ) const;
            nFunctions_function_type nFunctions_function_value( &::SireMM::TwoAtomFunctions::nFunctions );
            
            TwoAtomFunctions_exposer.def( 
                "nFunctions"
                , nFunctions_function_value
                , bp::release_gil_policy()
                , "This returns the total number of functions in this set" );
        
        }
        TwoAtomFunctions_exposer.def( bp::self != bp::self );
        { //::SireMM::TwoAtomFunctions::operator=
        
            typedef ::SireMM::TwoAtomFunctions & ( ::SireMM::TwoAtomFunctions::*assign_function_type)( ::SireMM::TwoAtomFunctions const & ) ;
            assign_function_type assign_function_value( &::SireMM::TwoAtomFunctions::operator= );
            
            TwoAtomFunctions_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        TwoAtomFunctions_exposer.def( bp::self == bp::self );
        { //::SireMM::TwoAtomFunctions::potential
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*potential_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx ) const;
            potential_function_type potential_function_value( &::SireMM::TwoAtomFunctions::potential );
            
            TwoAtomFunctions_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("atom0"), bp::arg("atom1") )
                , bp::release_gil_policy()
                , "Return the function acting between the atoms atom0 and atom1.\nThis returns an empty expression if there is no expression between\nthese atoms\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_atom\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::potential
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*potential_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const & ) const;
            potential_function_type potential_function_value( &::SireMM::TwoAtomFunctions::potential );
            
            TwoAtomFunctions_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("atom0"), bp::arg("atom1") )
                , bp::release_gil_policy()
                , "Return the function acting between the atoms atom0 and atom1.\nThis returns an empty expression if there is no expression between\nthese atoms\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::potential
        
            typedef ::SireCAS::Expression ( ::SireMM::TwoAtomFunctions::*potential_function_type)( ::SireMol::BondID const & ) const;
            potential_function_type potential_function_value( &::SireMM::TwoAtomFunctions::potential );
            
            TwoAtomFunctions_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("bondid") )
                , bp::release_gil_policy()
                , "Return the function acting on the bond identified by bondid.\nThis returns an empty expression if there is no expression on\nthis bond\nThis searches first for the function 1-2, and if that is not\nfound then it returns the function for 2-1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::potentials
        
            typedef ::QVector< SireMM::TwoAtomFunction > ( ::SireMM::TwoAtomFunctions::*potentials_function_type)(  ) const;
            potentials_function_type potentials_function_value( &::SireMM::TwoAtomFunctions::potentials );
            
            TwoAtomFunctions_exposer.def( 
                "potentials"
                , potentials_function_value
                , bp::release_gil_policy()
                , "Return the potential energy functions acting between the identified\npairs of atoms" );
        
        }
        { //::SireMM::TwoAtomFunctions::potentials
        
            typedef ::QVector< SireMM::TwoAtomFunction > ( ::SireMM::TwoAtomFunctions::*potentials_function_type)( ::QList< SireMol::AtomIdx > const &,bool ) const;
            potentials_function_type potentials_function_value( &::SireMM::TwoAtomFunctions::potentials );
            
            TwoAtomFunctions_exposer.def( 
                "potentials"
                , potentials_function_value
                , ( bp::arg("atoms"), bp::arg("exclusive")=(bool)(true) )
                , "Return the potential energy functions acting between the identified\npairs of atoms - if exclusive is true then only return potentials where\nboth atoms are in the bond\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::set
        
            typedef void ( ::SireMM::TwoAtomFunctions::*set_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::TwoAtomFunctions::set );
            
            TwoAtomFunctions_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used by atoms atom0 and atom1\nto be equal to expression - this replaces any existing expression\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_atom\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::set
        
            typedef void ( ::SireMM::TwoAtomFunctions::*set_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::TwoAtomFunctions::set );
            
            TwoAtomFunctions_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used by atoms atom0 and atom1\nto be equal to expression - this replaces any existing expression\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::set
        
            typedef void ( ::SireMM::TwoAtomFunctions::*set_function_type)( ::SireMol::BondID const &,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::TwoAtomFunctions::set );
            
            TwoAtomFunctions_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("bondid"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used for the bond identified by bondid\nto be equal to expression - this replaces any existing expression\nNote that this replaces both 1-2 and 2-1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::TwoAtomFunctions::substitute
        
            typedef void ( ::SireMM::TwoAtomFunctions::*substitute_function_type)( ::SireCAS::Identities const & ) ;
            substitute_function_type substitute_function_value( &::SireMM::TwoAtomFunctions::substitute );
            
            TwoAtomFunctions_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , bp::release_gil_policy()
                , "Perform the substitutions contained in identities in all of\nthe expressions in this set. This could be useful if you have\ndefined these expressions with respect to a lambda parameter,\nand now want to set that value of lambda" );
        
        }
        { //::SireMM::TwoAtomFunctions::toString
        
            typedef ::QString ( ::SireMM::TwoAtomFunctions::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::TwoAtomFunctions::toString );
            
            TwoAtomFunctions_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation" );
        
        }
        { //::SireMM::TwoAtomFunctions::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::TwoAtomFunctions::typeName );
            
            TwoAtomFunctions_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        TwoAtomFunctions_exposer.staticmethod( "typeName" );
        TwoAtomFunctions_exposer.def( "__copy__", &__copy__<SireMM::TwoAtomFunctions>);
        TwoAtomFunctions_exposer.def( "__deepcopy__", &__copy__<SireMM::TwoAtomFunctions>);
        TwoAtomFunctions_exposer.def( "clone", &__copy__<SireMM::TwoAtomFunctions>);
        TwoAtomFunctions_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::TwoAtomFunctions >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TwoAtomFunctions_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::TwoAtomFunctions >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TwoAtomFunctions_exposer.def_pickle(sire_pickle_suite< ::SireMM::TwoAtomFunctions >());
        TwoAtomFunctions_exposer.def( "__str__", &__str__< ::SireMM::TwoAtomFunctions > );
        TwoAtomFunctions_exposer.def( "__repr__", &__str__< ::SireMM::TwoAtomFunctions > );
    }

}
