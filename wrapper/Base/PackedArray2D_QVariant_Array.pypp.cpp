// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PackedArray2D_QVariant_Array.pypp.hpp"

namespace bp = boost::python;

#include "packedarrays.h"

#include "packedarrays.h"

SireBase::detail::PackedArray2D_Array<QVariant> __copy__(const SireBase::detail::PackedArray2D_Array<QVariant> &other){ return SireBase::detail::PackedArray2D_Array<QVariant>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_PackedArray2D_QVariant_Array_class(){

    { //::SireBase::detail::PackedArray2D_Array< QVariant >
        typedef bp::class_< SireBase::detail::PackedArray2D_Array< QVariant > > PackedArray2D_QVariant_Array_exposer_t;
        PackedArray2D_QVariant_Array_exposer_t PackedArray2D_QVariant_Array_exposer = PackedArray2D_QVariant_Array_exposer_t( "PackedArray2D_QVariant_Array", "", bp::init< >("") );
        bp::scope PackedArray2D_QVariant_Array_scope( PackedArray2D_QVariant_Array_exposer );
        PackedArray2D_QVariant_Array_exposer.def( bp::init< quint32 >(( bp::arg("sz") ), "") );
        PackedArray2D_QVariant_Array_exposer.def( bp::init< quint32, QVariant const & >(( bp::arg("sz"), bp::arg("value") ), "") );
        PackedArray2D_QVariant_Array_exposer.def( bp::init< QVector< QVariant > const & >(( bp::arg("values") ), "") );
        PackedArray2D_QVariant_Array_exposer.def( bp::init< SireBase::detail::PackedArray2D_Array< QVariant > const & >(( bp::arg("other") ), "") );
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::assertValidIndex
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef void ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*assertValidIndex_function_type)( ::quint32 ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::assertValidIndex );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::at
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*at_function_type)( ::quint32 ) const;
            at_function_type at_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::at );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::count
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef int ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::count );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::isEmpty
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef bool ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::isEmpty );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::nValues
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef int ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*nValues_function_type)(  ) const;
            nValues_function_type nValues_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::nValues );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "nValues"
                , nValues_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        PackedArray2D_QVariant_Array_exposer.def( bp::self != bp::self );
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::operator=
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< QVariant > & ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*assign_function_type)( ::SireBase::detail::PackedArray2D_Array< QVariant > const & ) ;
            assign_function_type assign_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::operator= );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PackedArray2D_QVariant_Array_exposer.def( bp::self == bp::self );
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::operator[]
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*__getitem___function_type)( ::quint32 ) const;
            __getitem___function_type __getitem___function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::operator[] );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::operator[]
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::QVariant & ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*__getitem___function_type)( ::quint32 ) ;
            __getitem___function_type __getitem___function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::operator[] );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_internal_reference< >()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::size
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef int ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::size );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::toQVector
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::QVector< QVariant > ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*toQVector_function_type)(  ) const;
            toQVector_function_type toQVector_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::toQVector );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "toQVector"
                , toQVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::toString
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef ::QString ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::toString );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::detail::PackedArray2D_Array< QVariant >::update
        
            typedef SireBase::detail::PackedArray2D_Array< QVariant > exported_class_t;
            typedef void ( ::SireBase::detail::PackedArray2D_Array< QVariant >::*update_function_type)( ::SireBase::detail::PackedArray2D_Array< QVariant > const & ) ;
            update_function_type update_function_value( &::SireBase::detail::PackedArray2D_Array< QVariant >::update );
            
            PackedArray2D_QVariant_Array_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "" );
        
        }
        PackedArray2D_QVariant_Array_exposer.def( "__copy__", &__copy__);
        PackedArray2D_QVariant_Array_exposer.def( "__deepcopy__", &__copy__);
        PackedArray2D_QVariant_Array_exposer.def( "clone", &__copy__);
        PackedArray2D_QVariant_Array_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::detail::PackedArray2D_Array<QVariant> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_QVariant_Array_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::detail::PackedArray2D_Array<QVariant> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_QVariant_Array_exposer.def_pickle(sire_pickle_suite< ::SireBase::detail::PackedArray2D_Array<QVariant> >());
        PackedArray2D_QVariant_Array_exposer.def( "__str__", &__str__< ::SireBase::detail::PackedArray2D_Array<QVariant> > );
        PackedArray2D_QVariant_Array_exposer.def( "__repr__", &__str__< ::SireBase::detail::PackedArray2D_Array<QVariant> > );
        PackedArray2D_QVariant_Array_exposer.def( "__len__", &__len_size< ::SireBase::detail::PackedArray2D_Array<QVariant> > );
    }

}
