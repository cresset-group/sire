// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ExpAverage.pypp.hpp"

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

SireMaths::ExpAverage __copy__(const SireMaths::ExpAverage &other){ return SireMaths::ExpAverage(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ExpAverage_class(){

    { //::SireMaths::ExpAverage
        typedef bp::class_< SireMaths::ExpAverage, bp::bases< SireMaths::Accumulator, SireBase::Property > > ExpAverage_exposer_t;
        ExpAverage_exposer_t ExpAverage_exposer = ExpAverage_exposer_t( "ExpAverage", "This class is used to accumulate the exponential average\nof a collection of values - this is the average formed\nas;\n\navg =  scale  ln( Mean of e^(valuescale) )\n\nIt is used to weight the average, e.g. if scale = -kT\nthen this Boltzmann weights the average\n\nAuthor: Christopher Woods\n", bp::init< bp::optional< double > >(( bp::arg("scale")=1 ), "Construct an empty average using the passed scale factor.\nThrow: SireError::invalid_arg\n") );
        bp::scope ExpAverage_scope( ExpAverage_exposer );
        ExpAverage_exposer.def( bp::init< SireMaths::ExpAverage const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMaths::ExpAverage::accumulate

            typedef void ( ::SireMaths::ExpAverage::*accumulate_function_type)( double ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::ExpAverage::accumulate );

            ExpAverage_exposer.def(
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "Accumulate the passed value onto the average" );

        }
        { //::SireMaths::ExpAverage::average

            typedef double ( ::SireMaths::ExpAverage::*average_function_type)(  ) const;
            average_function_type average_function_value( &::SireMaths::ExpAverage::average );

            ExpAverage_exposer.def(
                "average"
                , average_function_value
                , bp::release_gil_policy()
                , "Return the average value" );

        }
        { //::SireMaths::ExpAverage::average2

            typedef double ( ::SireMaths::ExpAverage::*average2_function_type)(  ) const;
            average2_function_type average2_function_value( &::SireMaths::ExpAverage::average2 );

            ExpAverage_exposer.def(
                "average2"
                , average2_function_value
                , bp::release_gil_policy()
                , "Return the average of the squared value" );

        }
        { //::SireMaths::ExpAverage::clear

            typedef void ( ::SireMaths::ExpAverage::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMaths::ExpAverage::clear );

            ExpAverage_exposer.def(
                "clear"
                , clear_function_value
                , bp::release_gil_policy()
                , "Completely clear the statistics in this accumulator" );

        }
        ExpAverage_exposer.def( bp::self != bp::self );
        ExpAverage_exposer.def( bp::self + bp::self );
        { //::SireMaths::ExpAverage::operator=

            typedef ::SireMaths::ExpAverage & ( ::SireMaths::ExpAverage::*assign_function_type)( ::SireMaths::ExpAverage const & ) ;
            assign_function_type assign_function_value( &::SireMaths::ExpAverage::operator= );

            ExpAverage_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        ExpAverage_exposer.def( bp::self == bp::self );
        { //::SireMaths::ExpAverage::toString

            typedef ::QString ( ::SireMaths::ExpAverage::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::ExpAverage::toString );

            ExpAverage_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMaths::ExpAverage::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::ExpAverage::typeName );

            ExpAverage_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ExpAverage_exposer.staticmethod( "typeName" );
        ExpAverage_exposer.def( "__copy__", &__copy__);
        ExpAverage_exposer.def( "__deepcopy__", &__copy__);
        ExpAverage_exposer.def( "clone", &__copy__);
        ExpAverage_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::ExpAverage >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ExpAverage_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::ExpAverage >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ExpAverage_exposer.def_pickle(sire_pickle_suite< ::SireMaths::ExpAverage >());
        ExpAverage_exposer.def( "__str__", &__str__< ::SireMaths::ExpAverage > );
        ExpAverage_exposer.def( "__repr__", &__str__< ::SireMaths::ExpAverage > );
    }

}
