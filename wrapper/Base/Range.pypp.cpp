// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Range.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "range.h"

#include "ranges.h"

#include "range.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Range_class(){

    { //::SireBase::Range
        typedef bp::class_< SireBase::Range, bp::bases< SireBase::Property >, boost::noncopyable > Range_exposer_t;
        Range_exposer_t Range_exposer = Range_exposer_t( "Range", "This class represents a range of integers.\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope Range_scope( Range_exposer );
        { //::SireBase::Range::atEnd

            typedef bool ( ::SireBase::Range::*atEnd_function_type)(  ) const;
            atEnd_function_type atEnd_function_value( &::SireBase::Range::atEnd );

            Range_exposer.def(
                "atEnd"
                , atEnd_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::Range::create

            typedef ::SireBase::RangePtr ( *create_function_type )( ::qint64 );
            create_function_type create_function_value( &::SireBase::Range::create );

            Range_exposer.def(
                "create"
                , create_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the range that represents the single value i" );

        }
        { //::SireBase::Range::create

            typedef ::SireBase::RangePtr ( *create_function_type )( ::qint64,::qint64 );
            create_function_type create_function_value( &::SireBase::Range::create );

            Range_exposer.def(
                "create"
                , create_function_value
                , ( bp::arg("start"), bp::arg("end") )
                , bp::release_gil_policy()
                , "Return the range that represents the range from [start,end)" );

        }
        { //::SireBase::Range::create

            typedef ::SireBase::RangePtr ( *create_function_type )( ::qint64,::qint64,::qint64 );
            create_function_type create_function_value( &::SireBase::Range::create );

            Range_exposer.def(
                "create"
                , create_function_value
                , ( bp::arg("start"), bp::arg("end"), bp::arg("increment") )
                , bp::release_gil_policy()
                , "Return the range that represents the range from [start,end,increment)" );

        }
        { //::SireBase::Range::hasNext

            typedef bool ( ::SireBase::Range::*hasNext_function_type)(  ) const;
            hasNext_function_type hasNext_function_value( &::SireBase::Range::hasNext );

            Range_exposer.def(
                "hasNext"
                , hasNext_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::Range::next

            typedef ::qint64 ( ::SireBase::Range::*next_function_type)(  ) ;
            next_function_type next_function_value( &::SireBase::Range::next );

            Range_exposer.def(
                "next"
                , next_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::Range::null

            typedef ::SireBase::Range const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireBase::Range::null );

            Range_exposer.def(
                "null"
                , null_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return a null simple range for null" );

        }
        { //::SireBase::Range::populate

            typedef ::SireBase::RangePtr ( ::SireBase::Range::*populate_function_type)( int ) const;
            populate_function_type populate_function_value( &::SireBase::Range::populate );

            Range_exposer.def(
                "populate"
                , populate_function_value
                , ( bp::arg("nitems") )
                , bp::release_gil_policy()
                , "" );

        }
        Range_exposer.staticmethod( "create" );
        Range_exposer.staticmethod( "null" );
        Range_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Range >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Range_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Range >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Range_exposer.def_pickle(sire_pickle_suite< ::SireBase::Range >());
        Range_exposer.def( "__str__", &__str__< ::SireBase::Range > );
        Range_exposer.def( "__repr__", &__str__< ::SireBase::Range > );
    }

}
