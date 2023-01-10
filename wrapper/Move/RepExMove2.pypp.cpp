// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "RepExMove2.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "repexmove2.h"

#include "replica.h"

#include "replicas.h"

#include "suprasubsim.h"

#include "suprasystem.h"

#include "tbb/task.h"

#include <QDebug>

#include <QVector>

#include "repexmove2.h"

SireMove::RepExMove2 __copy__(const SireMove::RepExMove2 &other){ return SireMove::RepExMove2(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_RepExMove2_class(){

    { //::SireMove::RepExMove2
        typedef bp::class_< SireMove::RepExMove2, bp::bases< SireMove::SupraMove, SireBase::Property > > RepExMove2_exposer_t;
        RepExMove2_exposer_t RepExMove2_exposer = RepExMove2_exposer_t( "RepExMove2", "This class is used to perform replica exchange moves on a collection\nof Replicas. Each move involves running a block of sampling\non each of the replicas, and then performing replice exchange swaps\nand tests between pairs.\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope RepExMove2_scope( RepExMove2_exposer );
        RepExMove2_exposer.def( bp::init< SireMove::RepExMove2 const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::RepExMove2::acceptanceRatio
        
            typedef double ( ::SireMove::RepExMove2::*acceptanceRatio_function_type)(  ) const;
            acceptanceRatio_function_type acceptanceRatio_function_value( &::SireMove::RepExMove2::acceptanceRatio );
            
            RepExMove2_exposer.def( 
                "acceptanceRatio"
                , acceptanceRatio_function_value
                , bp::release_gil_policy()
                , "Return the average acceptance ratio of the replica exchange\ntests over all replicas" );
        
        }
        { //::SireMove::RepExMove2::clearStatistics
        
            typedef void ( ::SireMove::RepExMove2::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::RepExMove2::clearStatistics );
            
            RepExMove2_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , bp::release_gil_policy()
                , "Clear the move statistics" );
        
        }
        { //::SireMove::RepExMove2::generator
        
            typedef ::SireMaths::RanGenerator const & ( ::SireMove::RepExMove2::*generator_function_type)(  ) const;
            generator_function_type generator_function_value( &::SireMove::RepExMove2::generator );
            
            RepExMove2_exposer.def( 
                "generator"
                , generator_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the random number generator used for the replica exchange tests" );
        
        }
        { //::SireMove::RepExMove2::move
        
            typedef void ( ::SireMove::RepExMove2::*move_function_type)( ::SireMove::SupraSystem &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::RepExMove2::move );
            
            RepExMove2_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats") )
                , bp::release_gil_policy()
                , "Perform nmoves replica exchange moves (block of sampling for all\nreplicas, then replica exchange test between all pairs),\nof the system system (which must be a Replicas object), optionally\nrecording statistics if record_stats is true\nThrow: SireError::invalid_cast\n" );
        
        }
        { //::SireMove::RepExMove2::nAccepted
        
            typedef int ( ::SireMove::RepExMove2::*nAccepted_function_type)(  ) const;
            nAccepted_function_type nAccepted_function_value( &::SireMove::RepExMove2::nAccepted );
            
            RepExMove2_exposer.def( 
                "nAccepted"
                , nAccepted_function_value
                , bp::release_gil_policy()
                , "Return the total number of accepted replica exchange tests" );
        
        }
        { //::SireMove::RepExMove2::nAttempted
        
            typedef int ( ::SireMove::RepExMove2::*nAttempted_function_type)(  ) const;
            nAttempted_function_type nAttempted_function_value( &::SireMove::RepExMove2::nAttempted );
            
            RepExMove2_exposer.def( 
                "nAttempted"
                , nAttempted_function_value
                , bp::release_gil_policy()
                , "Return the total number of accepted replica exchange tests" );
        
        }
        { //::SireMove::RepExMove2::nRejected
        
            typedef int ( ::SireMove::RepExMove2::*nRejected_function_type)(  ) const;
            nRejected_function_type nRejected_function_value( &::SireMove::RepExMove2::nRejected );
            
            RepExMove2_exposer.def( 
                "nRejected"
                , nRejected_function_value
                , bp::release_gil_policy()
                , "Return the total number of rejected replica exchange tests" );
        
        }
        RepExMove2_exposer.def( bp::self != bp::self );
        { //::SireMove::RepExMove2::operator=
        
            typedef ::SireMove::RepExMove2 & ( ::SireMove::RepExMove2::*assign_function_type)( ::SireMove::RepExMove2 const & ) ;
            assign_function_type assign_function_value( &::SireMove::RepExMove2::operator= );
            
            RepExMove2_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        RepExMove2_exposer.def( bp::self == bp::self );
        { //::SireMove::RepExMove2::setDisableSwaps
        
            typedef void ( ::SireMove::RepExMove2::*setDisableSwaps_function_type)( bool ) ;
            setDisableSwaps_function_type setDisableSwaps_function_value( &::SireMove::RepExMove2::setDisableSwaps );
            
            RepExMove2_exposer.def( 
                "setDisableSwaps"
                , setDisableSwaps_function_value
                , ( bp::arg("disable") )
                , bp::release_gil_policy()
                , "Set disabling of swap moves" );
        
        }
        { //::SireMove::RepExMove2::setGenerator
        
            typedef void ( ::SireMove::RepExMove2::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::RepExMove2::setGenerator );
            
            RepExMove2_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("generator") )
                , bp::release_gil_policy()
                , "Set the random number generator used for the replica exchange tests" );
        
        }
        { //::SireMove::RepExMove2::setSwapMonitors
        
            typedef void ( ::SireMove::RepExMove2::*setSwapMonitors_function_type)( bool ) ;
            setSwapMonitors_function_type setSwapMonitors_function_value( &::SireMove::RepExMove2::setSwapMonitors );
            
            RepExMove2_exposer.def( 
                "setSwapMonitors"
                , setSwapMonitors_function_value
                , ( bp::arg("swap_monitors") )
                , bp::release_gil_policy()
                , "Set whether or not to swap the system monitors when we swap the systems" );
        
        }
        { //::SireMove::RepExMove2::swapMovesDisabled
        
            typedef bool ( ::SireMove::RepExMove2::*swapMovesDisabled_function_type)(  ) const;
            swapMovesDisabled_function_type swapMovesDisabled_function_value( &::SireMove::RepExMove2::swapMovesDisabled );
            
            RepExMove2_exposer.def( 
                "swapMovesDisabled"
                , swapMovesDisabled_function_value
                , bp::release_gil_policy()
                , "Return whether or not swap moves are disabled" );
        
        }
        { //::SireMove::RepExMove2::toString
        
            typedef ::QString ( ::SireMove::RepExMove2::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::RepExMove2::toString );
            
            RepExMove2_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );
        
        }
        { //::SireMove::RepExMove2::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::RepExMove2::typeName );
            
            RepExMove2_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        RepExMove2_exposer.staticmethod( "typeName" );
        RepExMove2_exposer.def( "__copy__", &__copy__);
        RepExMove2_exposer.def( "__deepcopy__", &__copy__);
        RepExMove2_exposer.def( "clone", &__copy__);
        RepExMove2_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::RepExMove2 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        RepExMove2_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::RepExMove2 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        RepExMove2_exposer.def_pickle(sire_pickle_suite< ::SireMove::RepExMove2 >());
        RepExMove2_exposer.def( "__str__", &__str__< ::SireMove::RepExMove2 > );
        RepExMove2_exposer.def( "__repr__", &__str__< ::SireMove::RepExMove2 > );
    }

}
