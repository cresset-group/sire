// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Accumulator.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "accumulator.h"

#include "histogram.h"

#include <QDebug>

#include <QMutex>

#include <cmath>

#include "accumulator.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Accumulator_class(){

    { //::SireMaths::Accumulator
        typedef bp::class_< SireMaths::Accumulator, bp::bases< SireBase::Property >, boost::noncopyable > Accumulator_exposer_t;
        Accumulator_exposer_t Accumulator_exposer = Accumulator_exposer_t( "Accumulator", "This is the base class of all Accumulators - these are objects\nthat can accumulate values and calculate properties of that\ncollection of values - e.g. they could accumulate the values\nso that the mean average could be collected, or so that the\nmaximum and minimum values could be determined etc.\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope Accumulator_scope( Accumulator_exposer );
        { //::SireMaths::Accumulator::accumulate

            typedef void ( ::SireMaths::Accumulator::*accumulate_function_type)( double ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::Accumulator::accumulate );

            Accumulator_exposer.def(
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "Accumulate the value value onto the sample" );

        }
        { //::SireMaths::Accumulator::accumulate

            typedef void ( ::SireMaths::Accumulator::*accumulate_function_type)( ::QVector< double > const & ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::Accumulator::accumulate );

            Accumulator_exposer.def(
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Accumulate many values" );

        }
        { //::SireMaths::Accumulator::accumulate

            typedef void ( ::SireMaths::Accumulator::*accumulate_function_type)( ::QList< double > const & ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::Accumulator::accumulate );

            Accumulator_exposer.def(
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Accumulate many values" );

        }
        { //::SireMaths::Accumulator::clear

            typedef void ( ::SireMaths::Accumulator::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMaths::Accumulator::clear );

            Accumulator_exposer.def(
                "clear"
                , clear_function_value
                , bp::release_gil_policy()
                , "Completely clear the statistics in this accumulator" );

        }
        { //::SireMaths::Accumulator::nSamples

            typedef int ( ::SireMaths::Accumulator::*nSamples_function_type)(  ) const;
            nSamples_function_type nSamples_function_value( &::SireMaths::Accumulator::nSamples );

            Accumulator_exposer.def(
                "nSamples"
                , nSamples_function_value
                , bp::release_gil_policy()
                , "Return the number of values that have been sampled" );

        }
        { //::SireMaths::Accumulator::null

            typedef ::SireMaths::NullAccumulator const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMaths::Accumulator::null );

            Accumulator_exposer.def(
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMaths::Accumulator::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Accumulator::typeName );

            Accumulator_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Accumulator_exposer.staticmethod( "null" );
        Accumulator_exposer.staticmethod( "typeName" );
        Accumulator_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Accumulator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Accumulator_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Accumulator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Accumulator_exposer.def_pickle(sire_pickle_suite< ::SireMaths::Accumulator >());
        Accumulator_exposer.def( "__str__", &__str__< ::SireMaths::Accumulator > );
        Accumulator_exposer.def( "__repr__", &__str__< ::SireMaths::Accumulator > );
    }

}
