// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "RepExMove.pypp.hpp"

namespace bp = boost::python;

#include "SireCluster/cluster.h"

#include "SireCluster/node.h"

#include "SireCluster/nodes.h"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "repexmove.h"

#include "replica.h"

#include "replicas.h"

#include "suprasubsim.h"

#include "suprasystem.h"

#include <QDebug>

#include <QPair>

#include "repexmove.h"

SireMove::RepExMove __copy__(const SireMove::RepExMove &other){ return SireMove::RepExMove(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_RepExMove_class(){

    { //::SireMove::RepExMove
        typedef bp::class_< SireMove::RepExMove, bp::bases< SireMove::SupraMove, SireBase::Property > > RepExMove_exposer_t;
        RepExMove_exposer_t RepExMove_exposer = RepExMove_exposer_t( "RepExMove", "This class is used to perform replica exchange moves on a collection\nof Replicas. Each move involves running a block of sampling\non each of the replicas, and then performing replice exchange swaps\nand tests between pairs.\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope RepExMove_scope( RepExMove_exposer );
        RepExMove_exposer.def( bp::init< SireMove::RepExMove const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::RepExMove::acceptanceRatio

            typedef double ( ::SireMove::RepExMove::*acceptanceRatio_function_type)(  ) const;
            acceptanceRatio_function_type acceptanceRatio_function_value( &::SireMove::RepExMove::acceptanceRatio );

            RepExMove_exposer.def(
                "acceptanceRatio"
                , acceptanceRatio_function_value
                , bp::release_gil_policy()
                , "Return the average acceptance ratio of the replica exchange\ntests over all replicas" );

        }
        { //::SireMove::RepExMove::clearStatistics

            typedef void ( ::SireMove::RepExMove::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::RepExMove::clearStatistics );

            RepExMove_exposer.def(
                "clearStatistics"
                , clearStatistics_function_value
                , bp::release_gil_policy()
                , "Clear the move statistics" );

        }
        { //::SireMove::RepExMove::generator

            typedef ::SireMaths::RanGenerator const & ( ::SireMove::RepExMove::*generator_function_type)(  ) const;
            generator_function_type generator_function_value( &::SireMove::RepExMove::generator );

            RepExMove_exposer.def(
                "generator"
                , generator_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the random number generator used for the replica exchange tests" );

        }
        { //::SireMove::RepExMove::move

            typedef void ( ::SireMove::RepExMove::*move_function_type)( ::SireMove::SupraSystem &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::RepExMove::move );

            RepExMove_exposer.def(
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats") )
                , bp::release_gil_policy()
                , "Perform nmoves replica exchange moves (block of sampling for all\nreplicas, then replica exchange test between all pairs),\nof the system system (which must be a Replicas object), optionally\nrecording statistics if record_stats is true\nThrow: SireError::invalid_cast\n" );

        }
        { //::SireMove::RepExMove::nAccepted

            typedef int ( ::SireMove::RepExMove::*nAccepted_function_type)(  ) const;
            nAccepted_function_type nAccepted_function_value( &::SireMove::RepExMove::nAccepted );

            RepExMove_exposer.def(
                "nAccepted"
                , nAccepted_function_value
                , bp::release_gil_policy()
                , "Return the total number of accepted replica exchange tests" );

        }
        { //::SireMove::RepExMove::nAttempted

            typedef int ( ::SireMove::RepExMove::*nAttempted_function_type)(  ) const;
            nAttempted_function_type nAttempted_function_value( &::SireMove::RepExMove::nAttempted );

            RepExMove_exposer.def(
                "nAttempted"
                , nAttempted_function_value
                , bp::release_gil_policy()
                , "Return the total number of accepted replica exchange tests" );

        }
        { //::SireMove::RepExMove::nRejected

            typedef int ( ::SireMove::RepExMove::*nRejected_function_type)(  ) const;
            nRejected_function_type nRejected_function_value( &::SireMove::RepExMove::nRejected );

            RepExMove_exposer.def(
                "nRejected"
                , nRejected_function_value
                , bp::release_gil_policy()
                , "Return the total number of rejected replica exchange tests" );

        }
        RepExMove_exposer.def( bp::self != bp::self );
        { //::SireMove::RepExMove::operator=

            typedef ::SireMove::RepExMove & ( ::SireMove::RepExMove::*assign_function_type)( ::SireMove::RepExMove const & ) ;
            assign_function_type assign_function_value( &::SireMove::RepExMove::operator= );

            RepExMove_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        RepExMove_exposer.def( bp::self == bp::self );
        { //::SireMove::RepExMove::setDisableSwaps

            typedef void ( ::SireMove::RepExMove::*setDisableSwaps_function_type)( bool ) ;
            setDisableSwaps_function_type setDisableSwaps_function_value( &::SireMove::RepExMove::setDisableSwaps );

            RepExMove_exposer.def(
                "setDisableSwaps"
                , setDisableSwaps_function_value
                , ( bp::arg("disable") )
                , bp::release_gil_policy()
                , "Set disabling of swap moves" );

        }
        { //::SireMove::RepExMove::setGenerator

            typedef void ( ::SireMove::RepExMove::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::RepExMove::setGenerator );

            RepExMove_exposer.def(
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("generator") )
                , bp::release_gil_policy()
                , "Set the random number generator used for the replica exchange tests" );

        }
        { //::SireMove::RepExMove::setSwapMonitors

            typedef void ( ::SireMove::RepExMove::*setSwapMonitors_function_type)( bool ) ;
            setSwapMonitors_function_type setSwapMonitors_function_value( &::SireMove::RepExMove::setSwapMonitors );

            RepExMove_exposer.def(
                "setSwapMonitors"
                , setSwapMonitors_function_value
                , ( bp::arg("swap_monitors") )
                , bp::release_gil_policy()
                , "Set whether or not to swap the system monitors when we swap the systems" );

        }
        { //::SireMove::RepExMove::swapMovesDisabled

            typedef bool ( ::SireMove::RepExMove::*swapMovesDisabled_function_type)(  ) const;
            swapMovesDisabled_function_type swapMovesDisabled_function_value( &::SireMove::RepExMove::swapMovesDisabled );

            RepExMove_exposer.def(
                "swapMovesDisabled"
                , swapMovesDisabled_function_value
                , bp::release_gil_policy()
                , "Return whether or not swap moves are disabled" );

        }
        { //::SireMove::RepExMove::toString

            typedef ::QString ( ::SireMove::RepExMove::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::RepExMove::toString );

            RepExMove_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );

        }
        { //::SireMove::RepExMove::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::RepExMove::typeName );

            RepExMove_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        RepExMove_exposer.staticmethod( "typeName" );
        RepExMove_exposer.def( "__copy__", &__copy__);
        RepExMove_exposer.def( "__deepcopy__", &__copy__);
        RepExMove_exposer.def( "clone", &__copy__);
        RepExMove_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::RepExMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        RepExMove_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::RepExMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        RepExMove_exposer.def_pickle(sire_pickle_suite< ::SireMove::RepExMove >());
        RepExMove_exposer.def( "__str__", &__str__< ::SireMove::RepExMove > );
        RepExMove_exposer.def( "__repr__", &__str__< ::SireMove::RepExMove > );
    }

}
