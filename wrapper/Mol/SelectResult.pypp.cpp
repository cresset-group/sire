// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SelectResult.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/moleculegroup.h"

#include "SireMol/molecules.h"

#include "SireMol/parser.h"

#include "SireMol/select.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "select.h"

#include "select.h"

SireMol::SelectResult __copy__(const SireMol::SelectResult &other){ return SireMol::SelectResult(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_SelectResult_class(){

    { //::SireMol::SelectResult
        typedef bp::class_< SireMol::SelectResult, bp::bases< SireBase::Property > > SelectResult_exposer_t;
        SelectResult_exposer_t SelectResult_exposer = SelectResult_exposer_t( "SelectResult", "This class holds the result of a Select\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope SelectResult_scope( SelectResult_exposer );
        SelectResult_exposer.def( bp::init< SireMol::MolGroupsBase const & >(( bp::arg("molgroups") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("molgroup") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< SireMol::Molecules const & >(( bp::arg("molecules") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Molecule > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireBase::PropPtr< SireMol::MoleculeView > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Selector< SireMol::Atom > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Selector< SireMol::Residue > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Selector< SireMol::Chain > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Selector< SireMol::Segment > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::Selector< SireMol::CutGroup > > const & >(( bp::arg("views") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< QList< SireMol::ViewsOfMol > const & >(( bp::arg("molviews") ), "Construct from the passed molecules") );
        SelectResult_exposer.def( bp::init< SireMol::SelectResult const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::SelectResult::atoms
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*atoms_function_type)(  ) const;
            atoms_function_type atoms_function_value( &::SireMol::SelectResult::atoms );
            
            SelectResult_exposer.def( 
                "atoms"
                , atoms_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual atoms" );
        
        }
        { //::SireMol::SelectResult::chains
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*chains_function_type)(  ) const;
            chains_function_type chains_function_value( &::SireMol::SelectResult::chains );
            
            SelectResult_exposer.def( 
                "chains"
                , chains_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual chains" );
        
        }
        { //::SireMol::SelectResult::contains
        
            typedef bool ( ::SireMol::SelectResult::*contains_function_type)( ::SireMol::MolNum ) const;
            contains_function_type contains_function_value( &::SireMol::SelectResult::contains );
            
            SelectResult_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Return whether or not this set contains views of the molecule with\nnumber molnum" );
        
        }
        { //::SireMol::SelectResult::count
        
            typedef int ( ::SireMol::SelectResult::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::SelectResult::count );
            
            SelectResult_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "Return the number of views in this result" );
        
        }
        { //::SireMol::SelectResult::cutGroups
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*cutGroups_function_type)(  ) const;
            cutGroups_function_type cutGroups_function_value( &::SireMol::SelectResult::cutGroups );
            
            SelectResult_exposer.def( 
                "cutGroups"
                , cutGroups_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual cutgroups" );
        
        }
        { //::SireMol::SelectResult::getCommonType
        
            typedef ::QString ( ::SireMol::SelectResult::*getCommonType_function_type)(  ) const;
            getCommonType_function_type getCommonType_function_value( &::SireMol::SelectResult::getCommonType );
            
            SelectResult_exposer.def( 
                "getCommonType"
                , getCommonType_function_value
                , bp::release_gil_policy()
                , "Return the highest common type (e.g. SireMol::Atom, SireMol::Residue etc)\n  that suits all of the views in this result\n" );
        
        }
        { //::SireMol::SelectResult::isEmpty
        
            typedef bool ( ::SireMol::SelectResult::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::SelectResult::isEmpty );
            
            SelectResult_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is empty" );
        
        }
        { //::SireMol::SelectResult::join
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*join_function_type)(  ) const;
            join_function_type join_function_value( &::SireMol::SelectResult::join );
            
            SelectResult_exposer.def( 
                "join"
                , join_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views joined into single views" );
        
        }
        { //::SireMol::SelectResult::molNums
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::SelectResult::*molNums_function_type)(  ) const;
            molNums_function_type molNums_function_value( &::SireMol::SelectResult::molNums );
            
            SelectResult_exposer.def( 
                "molNums"
                , molNums_function_value
                , bp::release_gil_policy()
                , "Return the numbers of all molecules whose views are in this set,\nin the order they appear in this set" );
        
        }
        { //::SireMol::SelectResult::molecules
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*molecules_function_type)(  ) const;
            molecules_function_type molecules_function_value( &::SireMol::SelectResult::molecules );
            
            SelectResult_exposer.def( 
                "molecules"
                , molecules_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual molecules" );
        
        }
        { //::SireMol::SelectResult::move
        
            typedef ::SireMol::SelectResultMover ( ::SireMol::SelectResult::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMol::SelectResult::move );
            
            SelectResult_exposer.def( 
                "move"
                , move_function_value
                , bp::release_gil_policy()
                , "Return a object that can be used to move all of the views in this result" );
        
        }
        SelectResult_exposer.def( bp::self != bp::self );
        { //::SireMol::SelectResult::operator=
        
            typedef ::SireMol::SelectResult & ( ::SireMol::SelectResult::*assign_function_type)( ::SireMol::SelectResult const & ) ;
            assign_function_type assign_function_value( &::SireMol::SelectResult::operator= );
            
            SelectResult_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SelectResult_exposer.def( bp::self == bp::self );
        { //::SireMol::SelectResult::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMol::SelectResult::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::SelectResult::operator[] );
            
            SelectResult_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::SelectResult::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMol::SelectResult::*__getitem___function_type)( ::SireMol::MolNum ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::SelectResult::operator[] );
            
            SelectResult_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("molnum") )
                , "" );
        
        }
        { //::SireMol::SelectResult::residues
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*residues_function_type)(  ) const;
            residues_function_type residues_function_value( &::SireMol::SelectResult::residues );
            
            SelectResult_exposer.def( 
                "residues"
                , residues_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual residues" );
        
        }
        { //::SireMol::SelectResult::search
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*search_function_type)( ::QString const & ) const;
            search_function_type search_function_value( &::SireMol::SelectResult::search );
            
            SelectResult_exposer.def( 
                "search"
                , search_function_value
                , ( bp::arg("search_term") )
                , bp::release_gil_policy()
                , "Return the result of searching this result with search_term" );
        
        }
        { //::SireMol::SelectResult::segments
        
            typedef ::SireMol::SelectResult ( ::SireMol::SelectResult::*segments_function_type)(  ) const;
            segments_function_type segments_function_value( &::SireMol::SelectResult::segments );
            
            SelectResult_exposer.def( 
                "segments"
                , segments_function_value
                , bp::release_gil_policy()
                , "Return a copy of this result with all views split into individual segments" );
        
        }
        { //::SireMol::SelectResult::size
        
            typedef int ( ::SireMol::SelectResult::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::SelectResult::size );
            
            SelectResult_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "Return the number of views in this result" );
        
        }
        { //::SireMol::SelectResult::toGroup
        
            typedef ::SireMol::MoleculeGroup ( ::SireMol::SelectResult::*toGroup_function_type)(  ) const;
            toGroup_function_type toGroup_function_value( &::SireMol::SelectResult::toGroup );
            
            SelectResult_exposer.def( 
                "toGroup"
                , toGroup_function_value
                , bp::release_gil_policy()
                , "Return this result as a new molecule group" );
        
        }
        { //::SireMol::SelectResult::toGroup
        
            typedef ::SireMol::MoleculeGroup ( ::SireMol::SelectResult::*toGroup_function_type)( ::QString const & ) const;
            toGroup_function_type toGroup_function_value( &::SireMol::SelectResult::toGroup );
            
            SelectResult_exposer.def( 
                "toGroup"
                , toGroup_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "Return this result as a new molecule group called name" );
        
        }
        { //::SireMol::SelectResult::toList
        
            typedef ::QList< SireBase::PropPtr< SireMol::MoleculeView > > ( ::SireMol::SelectResult::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMol::SelectResult::toList );
            
            SelectResult_exposer.def( 
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::SelectResult::toMolecules
        
            typedef ::SireMol::Molecules ( ::SireMol::SelectResult::*toMolecules_function_type)(  ) const;
            toMolecules_function_type toMolecules_function_value( &::SireMol::SelectResult::toMolecules );
            
            SelectResult_exposer.def( 
                "toMolecules"
                , toMolecules_function_value
                , bp::release_gil_policy()
                , "Return this result as a set of Molecules" );
        
        }
        { //::SireMol::SelectResult::toString
        
            typedef ::QString ( ::SireMol::SelectResult::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::SelectResult::toString );
            
            SelectResult_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::SelectResult::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::SelectResult::typeName );
            
            SelectResult_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::SelectResult::views
        
            typedef ::QList< SireMol::ViewsOfMol > ( ::SireMol::SelectResult::*views_function_type)(  ) const;
            views_function_type views_function_value( &::SireMol::SelectResult::views );
            
            SelectResult_exposer.def( 
                "views"
                , views_function_value
                , bp::release_gil_policy()
                , "Return all of the views in this result, grouped by molecule" );
        
        }
        { //::SireMol::SelectResult::views
        
            typedef ::SireMol::ViewsOfMol ( ::SireMol::SelectResult::*views_function_type)( ::SireMol::MolNum ) const;
            views_function_type views_function_value( &::SireMol::SelectResult::views );
            
            SelectResult_exposer.def( 
                "views"
                , views_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Return all of the views of the molecule with number molnum. This\nreturns an empty set of views if the molecule is not in this set" );
        
        }
        { //::SireMol::SelectResult::what
        
            typedef char const * ( ::SireMol::SelectResult::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::SelectResult::what );
            
            SelectResult_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        SelectResult_exposer.staticmethod( "typeName" );
        SelectResult_exposer.def( "__copy__", &__copy__);
        SelectResult_exposer.def( "__deepcopy__", &__copy__);
        SelectResult_exposer.def( "clone", &__copy__);
        SelectResult_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::SelectResult >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SelectResult_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::SelectResult >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SelectResult_exposer.def_pickle(sire_pickle_suite< ::SireMol::SelectResult >());
        SelectResult_exposer.def( "__str__", &__str__< ::SireMol::SelectResult > );
        SelectResult_exposer.def( "__repr__", &__str__< ::SireMol::SelectResult > );
        SelectResult_exposer.def( "__len__", &__len_size< ::SireMol::SelectResult > );
    }

}
