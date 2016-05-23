// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AxisSet.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "axisset.h"

#include <QDataStream>

#include "axisset.h"

SireMaths::AxisSet __copy__(const SireMaths::AxisSet &other){ return SireMaths::AxisSet(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AxisSet_class(){

    { //::SireMaths::AxisSet
        typedef bp::class_< SireMaths::AxisSet > AxisSet_exposer_t;
        AxisSet_exposer_t AxisSet_exposer = AxisSet_exposer_t( "AxisSet", bp::init< >() );
        bp::scope AxisSet_scope( AxisSet_exposer );
        AxisSet_exposer.def( bp::init< SireMaths::Matrix const &, bp::optional< SireMaths::Vector > >(( bp::arg("matrx"), bp::arg("orign")=SireMaths::Vector() )) );
        AxisSet_exposer.def( bp::init< SireMaths::AxisSet const & >(( bp::arg("other") )) );
        { //::SireMaths::AxisSet::fromFrame
        
            typedef ::SireMaths::Vector ( ::SireMaths::AxisSet::*fromFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::Vector const & ) const;
            fromFrame_function_type fromFrame_function_value( &::SireMaths::AxisSet::fromFrame );
            
            AxisSet_exposer.def( 
                "fromFrame"
                , fromFrame_function_value
                , ( bp::arg("frame"), bp::arg("vec") ) );
        
        }
        { //::SireMaths::AxisSet::fromIdentity
        
            typedef ::SireMaths::Vector ( ::SireMaths::AxisSet::*fromIdentity_function_type)( ::SireMaths::Vector const & ) const;
            fromIdentity_function_type fromIdentity_function_value( &::SireMaths::AxisSet::fromIdentity );
            
            AxisSet_exposer.def( 
                "fromIdentity"
                , fromIdentity_function_value
                , ( bp::arg("vec") ) );
        
        }
        { //::SireMaths::AxisSet::fromIdentity
        
            typedef ::QVector< SireMaths::Vector > ( ::SireMaths::AxisSet::*fromIdentity_function_type)( ::QVector< SireMaths::Vector > const & ) const;
            fromIdentity_function_type fromIdentity_function_value( &::SireMaths::AxisSet::fromIdentity );
            
            AxisSet_exposer.def( 
                "fromIdentity"
                , fromIdentity_function_value
                , ( bp::arg("vec") ) );
        
        }
        { //::SireMaths::AxisSet::fromIdentity
        
            typedef ::SireMaths::Vector ( ::SireMaths::AxisSet::*fromIdentity_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            fromIdentity_function_type fromIdentity_function_value( &::SireMaths::AxisSet::fromIdentity );
            
            AxisSet_exposer.def( 
                "fromIdentity"
                , fromIdentity_function_value
                , ( bp::arg("vec"), bp::arg("delta") ) );
        
        }
        { //::SireMaths::AxisSet::fromIdentity
        
            typedef ::QVector< SireMaths::Vector > ( ::SireMaths::AxisSet::*fromIdentity_function_type)( ::QVector< SireMaths::Vector > const &,::SireMaths::Vector const & ) const;
            fromIdentity_function_type fromIdentity_function_value( &::SireMaths::AxisSet::fromIdentity );
            
            AxisSet_exposer.def( 
                "fromIdentity"
                , fromIdentity_function_value
                , ( bp::arg("vecs"), bp::arg("delta") ) );
        
        }
        { //::SireMaths::AxisSet::invMatrix
        
            typedef ::SireMaths::Matrix const & ( ::SireMaths::AxisSet::*invMatrix_function_type)(  ) const;
            invMatrix_function_type invMatrix_function_value( &::SireMaths::AxisSet::invMatrix );
            
            AxisSet_exposer.def( 
                "invMatrix"
                , invMatrix_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMaths::AxisSet::matrix
        
            typedef ::SireMaths::Matrix const & ( ::SireMaths::AxisSet::*matrix_function_type)(  ) const;
            matrix_function_type matrix_function_value( &::SireMaths::AxisSet::matrix );
            
            AxisSet_exposer.def( 
                "matrix"
                , matrix_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMaths::AxisSet::origin
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::AxisSet::*origin_function_type)(  ) const;
            origin_function_type origin_function_value( &::SireMaths::AxisSet::origin );
            
            AxisSet_exposer.def( 
                "origin"
                , origin_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMaths::AxisSet::toFrame
        
            typedef ::SireMaths::Vector ( ::SireMaths::AxisSet::*toFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::Vector const & ) const;
            toFrame_function_type toFrame_function_value( &::SireMaths::AxisSet::toFrame );
            
            AxisSet_exposer.def( 
                "toFrame"
                , toFrame_function_value
                , ( bp::arg("frame"), bp::arg("vec") ) );
        
        }
        { //::SireMaths::AxisSet::toIdentity
        
            typedef ::SireMaths::Vector ( ::SireMaths::AxisSet::*toIdentity_function_type)( ::SireMaths::Vector const & ) const;
            toIdentity_function_type toIdentity_function_value( &::SireMaths::AxisSet::toIdentity );
            
            AxisSet_exposer.def( 
                "toIdentity"
                , toIdentity_function_value
                , ( bp::arg("vec") ) );
        
        }
        { //::SireMaths::AxisSet::toString
        
            typedef ::QString ( ::SireMaths::AxisSet::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::AxisSet::toString );
            
            AxisSet_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMaths::AxisSet::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::AxisSet::typeName );
            
            AxisSet_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMaths::AxisSet::what
        
            typedef char const * ( ::SireMaths::AxisSet::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::AxisSet::what );
            
            AxisSet_exposer.def( 
                "what"
                , what_function_value );
        
        }
        AxisSet_exposer.staticmethod( "typeName" );
        AxisSet_exposer.def( "__copy__", &__copy__);
        AxisSet_exposer.def( "__deepcopy__", &__copy__);
        AxisSet_exposer.def( "clone", &__copy__);
        AxisSet_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::AxisSet >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AxisSet_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::AxisSet >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AxisSet_exposer.def( "__str__", &__str__< ::SireMaths::AxisSet > );
        AxisSet_exposer.def( "__repr__", &__str__< ::SireMaths::AxisSet > );
    }

}
