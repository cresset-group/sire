// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Array2D_SireMaths_AccumulatorPtr_.pypp.hpp"

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

#include "SireBase/array2d.hpp"

SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > __copy__(const SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > &other){ return SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Array2D_SireMaths_AccumulatorPtr__class(){

    { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >
        typedef bp::class_< SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >, bp::bases< SireBase::Array2DBase > > Array2D_SireMaths_AccumulatorPtr__exposer_t;
        Array2D_SireMaths_AccumulatorPtr__exposer_t Array2D_SireMaths_AccumulatorPtr__exposer = Array2D_SireMaths_AccumulatorPtr__exposer_t( "Array2D_SireMaths_AccumulatorPtr_", "", bp::init< >("") );
        bp::scope Array2D_SireMaths_AccumulatorPtr__scope( Array2D_SireMaths_AccumulatorPtr__exposer );
        Array2D_SireMaths_AccumulatorPtr__exposer.def( bp::init< int, int >(( bp::arg("nrows"), bp::arg("ncolumns") ), "") );
        Array2D_SireMaths_AccumulatorPtr__exposer.def( bp::init< int, int, SireBase::PropPtr< SireMaths::Accumulator > const & >(( bp::arg("nrows"), bp::arg("ncolumns"), bp::arg("default_value") ), "") );
        Array2D_SireMaths_AccumulatorPtr__exposer.def( bp::init< SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > const & >(( bp::arg("other") ), "") );
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::at
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::SireBase::PropPtr< SireMaths::Accumulator > const & ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::at );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::get
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::SireBase::PropPtr< SireMaths::Accumulator > const & ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*get_function_type)( int,int ) const;
            get_function_type get_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::get );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        Array2D_SireMaths_AccumulatorPtr__exposer.def( bp::self != bp::self );
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::operator()
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::SireBase::PropPtr< SireMaths::Accumulator > const & ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::operator() );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::operator=
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > & ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*assign_function_type)( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > const & ) ;
            assign_function_type assign_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::operator= );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Array2D_SireMaths_AccumulatorPtr__exposer.def( bp::self == bp::self );
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::redimension
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef void ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*redimension_function_type)( int,int ) ;
            redimension_function_type redimension_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::redimension );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "redimension"
                , redimension_function_value
                , ( bp::arg("nrows"), bp::arg("ncolumns") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::set
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef void ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*set_function_type)( int,int,::SireBase::PropPtr< SireMaths::Accumulator > const & ) ;
            set_function_type set_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::set );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::setAll
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef void ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*setAll_function_type)( ::SireBase::PropPtr< SireMaths::Accumulator > const & ) ;
            setAll_function_type setAll_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::setAll );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::toString
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::QString ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::toString );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::transpose
        
            typedef SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > exported_class_t;
            typedef ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > ( ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::*transpose_function_type)(  ) const;
            transpose_function_type transpose_function_value( &::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > >::transpose );
            
            Array2D_SireMaths_AccumulatorPtr__exposer.def( 
                "transpose"
                , transpose_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__copy__", &__copy__);
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__deepcopy__", &__copy__);
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "clone", &__copy__);
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2D_SireMaths_AccumulatorPtr__exposer.def_pickle(sire_pickle_suite< ::SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > >());
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__str__", &__str__< ::SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > > );
        Array2D_SireMaths_AccumulatorPtr__exposer.def( "__repr__", &__str__< ::SireBase::Array2D<SireBase::PropPtr<SireMaths::Accumulator> > > );
    }

}
