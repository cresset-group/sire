// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJWorkspace.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "cljworkspace.h"

#include <QThreadStorage>

#include <QVarLengthArray>

#include "cljworkspace.h"

SireMM::CLJWorkspace __copy__(const SireMM::CLJWorkspace &other){ return SireMM::CLJWorkspace(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_CLJWorkspace_class(){

    { //::SireMM::CLJWorkspace
        typedef bp::class_< SireMM::CLJWorkspace > CLJWorkspace_exposer_t;
        CLJWorkspace_exposer_t CLJWorkspace_exposer = CLJWorkspace_exposer_t( "CLJWorkspace", "This class provides a workspace in which to hold the details of the changes\nthat occur in a CLJ forcefield during a Monte Carlo move. The class is optimised\nto avoid copying or duplicating data during Sires copy-on-write copying\n(e.g. the memory allocated in a workspace will always be available for the\nnew copy of a forcefield rather than the old, which, if things work correctly,\nwill mean that there should be no memory allocation during simple MC moves...)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope CLJWorkspace_scope( CLJWorkspace_exposer );
        CLJWorkspace_exposer.def( bp::init< SireMM::CLJWorkspace const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJWorkspace::accept
        
            typedef void ( ::SireMM::CLJWorkspace::*accept_function_type)( ::SireMM::CLJBoxes & ) ;
            accept_function_type accept_function_value( &::SireMM::CLJWorkspace::accept );
            
            CLJWorkspace_exposer.def( 
                "accept"
                , accept_function_value
                , ( bp::arg("boxes") )
                , bp::release_gil_policy()
                , "Accept this workspace - this clears the recalc_from_scratch flag as it\nsignals that we have put the CLJBoxes into a sane state" );
        
        }
        { //::SireMM::CLJWorkspace::at
        
            typedef ::SireMM::CLJDelta const & ( ::SireMM::CLJWorkspace::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMM::CLJWorkspace::at );
            
            CLJWorkspace_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the ith delta" );
        
        }
        { //::SireMM::CLJWorkspace::changedAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJWorkspace::*changedAtoms_function_type)(  ) const;
            changedAtoms_function_type changedAtoms_function_value( &::SireMM::CLJWorkspace::changedAtoms );
            
            CLJWorkspace_exposer.def( 
                "changedAtoms"
                , changedAtoms_function_value
                , bp::release_gil_policy()
                , "Merge all of the deltas together into a single set of changed CLJAtoms that\ncan be used for the change in energy calculation" );
        
        }
        { //::SireMM::CLJWorkspace::clear
        
            typedef void ( ::SireMM::CLJWorkspace::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMM::CLJWorkspace::clear );
            
            CLJWorkspace_exposer.def( 
                "clear"
                , clear_function_value
                , bp::release_gil_policy()
                , "Clear this workspace" );
        
        }
        { //::SireMM::CLJWorkspace::commit
        
            typedef ::QVector< SireMM::CLJBoxIndex > ( ::SireMM::CLJWorkspace::*commit_function_type)( ::SireMM::CLJBoxes &,::SireMM::CLJDelta const & ) ;
            commit_function_type commit_function_value( &::SireMM::CLJWorkspace::commit );
            
            CLJWorkspace_exposer.def( 
                "commit"
                , commit_function_value
                , ( bp::arg("boxes"), bp::arg("delta") )
                , bp::release_gil_policy()
                , "Commit the changes in the passed delta into the passed CLJBoxes" );
        
        }
        { //::SireMM::CLJWorkspace::count
        
            typedef int ( ::SireMM::CLJWorkspace::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMM::CLJWorkspace::count );
            
            CLJWorkspace_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "Return the number of deltas" );
        
        }
        { //::SireMM::CLJWorkspace::getitem
        
            typedef ::SireMM::CLJDelta ( ::SireMM::CLJWorkspace::*getitem_function_type)( int ) const;
            getitem_function_type getitem_function_value( &::SireMM::CLJWorkspace::getitem );
            
            CLJWorkspace_exposer.def( 
                "getitem"
                , getitem_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the ith delta" );
        
        }
        { //::SireMM::CLJWorkspace::isEmpty
        
            typedef bool ( ::SireMM::CLJWorkspace::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::CLJWorkspace::isEmpty );
            
            CLJWorkspace_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this workspace is empty" );
        
        }
        { //::SireMM::CLJWorkspace::isSingleID
        
            typedef bool ( ::SireMM::CLJWorkspace::*isSingleID_function_type)(  ) const;
            isSingleID_function_type isSingleID_function_value( &::SireMM::CLJWorkspace::isSingleID );
            
            CLJWorkspace_exposer.def( 
                "isSingleID"
                , isSingleID_function_value
                , bp::release_gil_policy()
                , "Return whether or not this workspace contains deltas with a single\nID (a single CLJAtoms ID)" );
        
        }
        { //::SireMM::CLJWorkspace::merge
        
            typedef ::boost::tuples::tuple< SireMM::CLJAtoms, SireMM::CLJAtoms, SireMM::CLJAtoms, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJWorkspace::*merge_function_type)(  ) const;
            merge_function_type merge_function_value( &::SireMM::CLJWorkspace::merge );
            
            CLJWorkspace_exposer.def( 
                "merge"
                , merge_function_value
                , bp::release_gil_policy()
                , "Merge all of the deltas together to return the tuple of the\nchanged, old and new atoms. This is equivalent to calling\nchangedAtoms(), oldAtoms() and newAtoms() and placing them\ninto a tuple. This is more efficient than three separate calls" );
        
        }
        { //::SireMM::CLJWorkspace::mustRecalculateFromScratch
        
            typedef void ( ::SireMM::CLJWorkspace::*mustRecalculateFromScratch_function_type)( ::SireMM::CLJBoxes & ) ;
            mustRecalculateFromScratch_function_type mustRecalculateFromScratch_function_value( &::SireMM::CLJWorkspace::mustRecalculateFromScratch );
            
            CLJWorkspace_exposer.def( 
                "mustRecalculateFromScratch"
                , mustRecalculateFromScratch_function_value
                , ( bp::arg("boxes") )
                , bp::release_gil_policy()
                , "Tell the workspace that we are now recalculating everything from scratch" );
        
        }
        { //::SireMM::CLJWorkspace::nDeltas
        
            typedef int ( ::SireMM::CLJWorkspace::*nDeltas_function_type)(  ) const;
            nDeltas_function_type nDeltas_function_value( &::SireMM::CLJWorkspace::nDeltas );
            
            CLJWorkspace_exposer.def( 
                "nDeltas"
                , nDeltas_function_value
                , bp::release_gil_policy()
                , "Return the number of deltas in this workspace" );
        
        }
        { //::SireMM::CLJWorkspace::needsAccepting
        
            typedef bool ( ::SireMM::CLJWorkspace::*needsAccepting_function_type)(  ) const;
            needsAccepting_function_type needsAccepting_function_value( &::SireMM::CLJWorkspace::needsAccepting );
            
            CLJWorkspace_exposer.def( 
                "needsAccepting"
                , needsAccepting_function_value
                , bp::release_gil_policy()
                , "Return whether or not this workspace needs accepting" );
        
        }
        { //::SireMM::CLJWorkspace::newAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJWorkspace::*newAtoms_function_type)(  ) const;
            newAtoms_function_type newAtoms_function_value( &::SireMM::CLJWorkspace::newAtoms );
            
            CLJWorkspace_exposer.def( 
                "newAtoms"
                , newAtoms_function_value
                , bp::release_gil_policy()
                , "Merge all of the new atoms from the deltas together into a single\nset of new CLJAtoms that can be used for the change in energy calculation" );
        
        }
        { //::SireMM::CLJWorkspace::oldAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJWorkspace::*oldAtoms_function_type)(  ) const;
            oldAtoms_function_type oldAtoms_function_value( &::SireMM::CLJWorkspace::oldAtoms );
            
            CLJWorkspace_exposer.def( 
                "oldAtoms"
                , oldAtoms_function_value
                , bp::release_gil_policy()
                , "Merge all of the old atoms from the deltas together into a single\nset of old CLJAtoms that can be used for the change in energy calculation" );
        
        }
        CLJWorkspace_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJWorkspace::operator=
        
            typedef ::SireMM::CLJWorkspace & ( ::SireMM::CLJWorkspace::*assign_function_type)( ::SireMM::CLJWorkspace const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJWorkspace::operator= );
            
            CLJWorkspace_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CLJWorkspace_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJWorkspace::operator[]
        
            typedef ::SireMM::CLJDelta const & ( ::SireMM::CLJWorkspace::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::CLJWorkspace::operator[] );
            
            CLJWorkspace_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::CLJWorkspace::push
        
            typedef ::SireMM::CLJDelta ( ::SireMM::CLJWorkspace::*push_function_type)( ::SireMM::CLJBoxes &,::QVector< SireMM::CLJBoxIndex > const &,::SireMM::CLJAtoms const &,::SireMM::CLJDelta const & ) ;
            push_function_type push_function_value( &::SireMM::CLJWorkspace::push );
            
            CLJWorkspace_exposer.def( 
                "push"
                , push_function_value
                , ( bp::arg("boxes"), bp::arg("old_atoms"), bp::arg("new_atoms"), bp::arg("old_delta") )
                , bp::release_gil_policy()
                , "Push the passed change onto the workspace. This changes the atoms in the\npassed CLJBoxes from their values in old_atoms to their values in the\npassed new_atoms. The last CLJDelta used for these atoms is supplied as\nold_delta, and this returns the new CLJDelta for these atoms." );
        
        }
        { //::SireMM::CLJWorkspace::recalculatingFromScratch
        
            typedef bool ( ::SireMM::CLJWorkspace::*recalculatingFromScratch_function_type)(  ) const;
            recalculatingFromScratch_function_type recalculatingFromScratch_function_value( &::SireMM::CLJWorkspace::recalculatingFromScratch );
            
            CLJWorkspace_exposer.def( 
                "recalculatingFromScratch"
                , recalculatingFromScratch_function_value
                , bp::release_gil_policy()
                , "Return whether or not we are recalculating everything from scratch" );
        
        }
        { //::SireMM::CLJWorkspace::removeSameIDAtoms
        
            typedef void ( ::SireMM::CLJWorkspace::*removeSameIDAtoms_function_type)( ::SireMM::CLJBoxes & ) ;
            removeSameIDAtoms_function_type removeSameIDAtoms_function_value( &::SireMM::CLJWorkspace::removeSameIDAtoms );
            
            CLJWorkspace_exposer.def( 
                "removeSameIDAtoms"
                , removeSameIDAtoms_function_value
                , ( bp::arg("boxes") )
                , bp::release_gil_policy()
                , "Internal function used to fully remove atoms that have not been\nremoved because they all have the same ID. This is used when the\noptimisation of not removing same ID atoms would break the energy\ncalculation, e.g. if we have multiple CLJGroups and have multiple\nchanged IDs across these groups" );
        
        }
        { //::SireMM::CLJWorkspace::revert
        
            typedef ::QVector< SireMM::CLJBoxIndex > ( ::SireMM::CLJWorkspace::*revert_function_type)( ::SireMM::CLJBoxes &,::SireMM::CLJDelta const & ) ;
            revert_function_type revert_function_value( &::SireMM::CLJWorkspace::revert );
            
            CLJWorkspace_exposer.def( 
                "revert"
                , revert_function_value
                , ( bp::arg("boxes"), bp::arg("delta") )
                , bp::release_gil_policy()
                , "Revert the changes supplied in the passed delta" );
        
        }
        { //::SireMM::CLJWorkspace::size
        
            typedef int ( ::SireMM::CLJWorkspace::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMM::CLJWorkspace::size );
            
            CLJWorkspace_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "Return the number of deltas" );
        
        }
        { //::SireMM::CLJWorkspace::toString
        
            typedef ::QString ( ::SireMM::CLJWorkspace::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJWorkspace::toString );
            
            CLJWorkspace_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJWorkspace::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJWorkspace::typeName );
            
            CLJWorkspace_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJWorkspace::what
        
            typedef char const * ( ::SireMM::CLJWorkspace::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJWorkspace::what );
            
            CLJWorkspace_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CLJWorkspace_exposer.staticmethod( "typeName" );
        CLJWorkspace_exposer.def( "__copy__", &__copy__);
        CLJWorkspace_exposer.def( "__deepcopy__", &__copy__);
        CLJWorkspace_exposer.def( "clone", &__copy__);
        CLJWorkspace_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJWorkspace >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJWorkspace_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJWorkspace >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJWorkspace_exposer.def_pickle(sire_pickle_suite< ::SireMM::CLJWorkspace >());
        CLJWorkspace_exposer.def( "__str__", &__str__< ::SireMM::CLJWorkspace > );
        CLJWorkspace_exposer.def( "__repr__", &__str__< ::SireMM::CLJWorkspace > );
        CLJWorkspace_exposer.def( "__len__", &__len_size< ::SireMM::CLJWorkspace > );
        CLJWorkspace_exposer.def( "__getitem__", &::SireMM::CLJWorkspace::getitem );
    }

}
