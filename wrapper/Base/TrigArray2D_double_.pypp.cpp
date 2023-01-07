// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "TrigArray2D_double_.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "trigarray2d.h"

#include "trigarray2d.hpp"

#include "trigarray2d.hpp"

SireBase::TrigArray2D<double> __copy__(const SireBase::TrigArray2D<double> &other){ return SireBase::TrigArray2D<double>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_TrigArray2D_double__class(){

    { //::SireBase::TrigArray2D< double >
        typedef bp::class_< SireBase::TrigArray2D< double >, bp::bases< SireBase::TrigArray2DBase > > TrigArray2D_double__exposer_t;
        TrigArray2D_double__exposer_t TrigArray2D_double__exposer = TrigArray2D_double__exposer_t( "TrigArray2D_double_", "", bp::init< >("") );
        bp::scope TrigArray2D_double__scope( TrigArray2D_double__exposer );
        TrigArray2D_double__exposer.def( bp::init< int >(( bp::arg("dimension") ), "") );
        TrigArray2D_double__exposer.def( bp::init< int, double const & >(( bp::arg("dimension"), bp::arg("default_value") ), "") );
        TrigArray2D_double__exposer.def( bp::init< SireBase::TrigArray2D< double > const & >(( bp::arg("other") ), "") );
        { //::SireBase::TrigArray2D< double >::at

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef double const & ( ::SireBase::TrigArray2D< double >::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireBase::TrigArray2D< double >::at );

            TrigArray2D_double__exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::get

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef double const & ( ::SireBase::TrigArray2D< double >::*get_function_type)( int,int ) const;
            get_function_type get_function_value( &::SireBase::TrigArray2D< double >::get );

            TrigArray2D_double__exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        TrigArray2D_double__exposer.def( bp::self != bp::self );
        { //::SireBase::TrigArray2D< double >::operator()

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef double const & ( ::SireBase::TrigArray2D< double >::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireBase::TrigArray2D< double >::operator() );

            TrigArray2D_double__exposer.def(
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::operator=

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef ::SireBase::TrigArray2D< double > & ( ::SireBase::TrigArray2D< double >::*assign_function_type)( ::SireBase::TrigArray2D< double > const & ) ;
            assign_function_type assign_function_value( &::SireBase::TrigArray2D< double >::operator= );

            TrigArray2D_double__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        TrigArray2D_double__exposer.def( bp::self == bp::self );
        { //::SireBase::TrigArray2D< double >::redimension

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< double >::*redimension_function_type)( int ) ;
            redimension_function_type redimension_function_value( &::SireBase::TrigArray2D< double >::redimension );

            TrigArray2D_double__exposer.def(
                "redimension"
                , redimension_function_value
                , ( bp::arg("dimension") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::set

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< double >::*set_function_type)( int,int,double const & ) ;
            set_function_type set_function_value( &::SireBase::TrigArray2D< double >::set );

            TrigArray2D_double__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::setAll

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< double >::*setAll_function_type)( double const & ) ;
            setAll_function_type setAll_function_value( &::SireBase::TrigArray2D< double >::setAll );

            TrigArray2D_double__exposer.def(
                "setAll"
                , setAll_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::toString

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef ::QString ( ::SireBase::TrigArray2D< double >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::TrigArray2D< double >::toString );

            TrigArray2D_double__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireBase::TrigArray2D< double >::transpose

            typedef SireBase::TrigArray2D< double > exported_class_t;
            typedef ::SireBase::TrigArray2D< double > ( ::SireBase::TrigArray2D< double >::*transpose_function_type)(  ) const;
            transpose_function_type transpose_function_value( &::SireBase::TrigArray2D< double >::transpose );

            TrigArray2D_double__exposer.def(
                "transpose"
                , transpose_function_value
                , bp::release_gil_policy()
                , "" );

        }
        TrigArray2D_double__exposer.def( "__copy__", &__copy__);
        TrigArray2D_double__exposer.def( "__deepcopy__", &__copy__);
        TrigArray2D_double__exposer.def( "clone", &__copy__);
        TrigArray2D_double__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::TrigArray2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2D_double__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::TrigArray2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2D_double__exposer.def_pickle(sire_pickle_suite< ::SireBase::TrigArray2D<double> >());
        TrigArray2D_double__exposer.def( "__str__", &__str__< ::SireBase::TrigArray2D<double> > );
        TrigArray2D_double__exposer.def( "__repr__", &__str__< ::SireBase::TrigArray2D<double> > );
        TrigArray2D_double__exposer.def( "__len__", &__len_size< ::SireBase::TrigArray2D<double> > );
    }

}
