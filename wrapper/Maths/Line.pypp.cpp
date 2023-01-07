// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Line.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "line.h"

#include <QDataStream>

#include "line.h"

SireMaths::Line __copy__(const SireMaths::Line &other){ return SireMaths::Line(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Line_class(){

    { //::SireMaths::Line
        typedef bp::class_< SireMaths::Line > Line_exposer_t;
        Line_exposer_t Line_exposer = Line_exposer_t( "Line", "\nThis class represents a line in three-dimensional space. (or two points)\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a zero line") );
        bp::scope Line_scope( Line_exposer );
        Line_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Vector const & >(( bp::arg("point0"), bp::arg("point1") ), "Construct a line from point0 to point1") );
        { //::SireMaths::Line::at

            typedef ::SireMaths::Vector const & ( ::SireMaths::Line::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMaths::Line::at );

            Line_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMaths::Line::count

            typedef int ( ::SireMaths::Line::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMaths::Line::count );

            Line_exposer.def(
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMaths::Line::length

            typedef double ( ::SireMaths::Line::*length_function_type)(  ) const;
            length_function_type length_function_value( &::SireMaths::Line::length );

            Line_exposer.def(
                "length"
                , length_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMaths::Line::operator[]

            typedef ::SireMaths::Vector const & ( ::SireMaths::Line::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMaths::Line::operator[] );

            Line_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMaths::Line::point

            typedef ::SireMaths::Vector const & ( ::SireMaths::Line::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireMaths::Line::point );

            Line_exposer.def(
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMaths::Line::toString

            typedef ::QString ( ::SireMaths::Line::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Line::toString );

            Line_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of the line" );

        }
        { //::SireMaths::Line::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Line::typeName );

            Line_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMaths::Line::vector

            typedef ::SireMaths::Vector ( ::SireMaths::Line::*vector_function_type)(  ) const;
            vector_function_type vector_function_value( &::SireMaths::Line::vector );

            Line_exposer.def(
                "vector"
                , vector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMaths::Line::what

            typedef char const * ( ::SireMaths::Line::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::Line::what );

            Line_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Line_exposer.staticmethod( "typeName" );
        Line_exposer.def( "__copy__", &__copy__);
        Line_exposer.def( "__deepcopy__", &__copy__);
        Line_exposer.def( "clone", &__copy__);
        Line_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Line >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Line_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Line >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Line_exposer.def_pickle(sire_pickle_suite< ::SireMaths::Line >());
        Line_exposer.def( "__str__", &__str__< ::SireMaths::Line > );
        Line_exposer.def( "__repr__", &__str__< ::SireMaths::Line > );
        Line_exposer.def( "__len__", &__len_count< ::SireMaths::Line > );
    }

}
