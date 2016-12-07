// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MultiInt.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "multiint.h"

#include <QDebug>

#include <QStringList>

#include "multiint.h"

SireMaths::MultiInt __copy__(const SireMaths::MultiInt &other){ return SireMaths::MultiInt(other); }

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_MultiInt_class(){

    { //::SireMaths::MultiInt
        typedef bp::class_< SireMaths::MultiInt > MultiInt_exposer_t;
        MultiInt_exposer_t MultiInt_exposer = MultiInt_exposer_t( "MultiInt", "This class provides a vectorised 32bit signed integer. This represents\na single vector of integers on the compiled machine, e.g.\n4 integers if we use SSE2, 8 integers for AVXAVX2\n(note that AVX represents it as two SSE vectors, while AVX2\nuses a single AVX vector)\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope MultiInt_scope( MultiInt_exposer );
        MultiInt_exposer.def( bp::init< qint32 >(( bp::arg("value") ), "Construct from the passed array - this must be the same size as the vector") );
        MultiInt_exposer.def( bp::init< qint32 const *, int >(( bp::arg("array"), bp::arg("size") ), "Construct from the passed array. If size is greater than MultiInt::size()\nthen an error will be raised. If size is less than MultiInt::size() then\nthis float will be padded with zeroes") );
        MultiInt_exposer.def( bp::init< QVector< int > const & >(( bp::arg("array") ), "Construct from the passed array - this must be the same size as the vector") );
        MultiInt_exposer.def( bp::init< SireMaths::MultiFloat const & >(( bp::arg("other") ), "Construct from a MultiFloat - this rounds down (same as standard float to int rounding)") );
        MultiInt_exposer.def( bp::init< SireMaths::MultiInt const & >(( bp::arg("other") ), "Construct from a MultiFloat - this rounds down (same as standard float to int rounding)") );
        { //::SireMaths::MultiInt::at
        
            typedef ::qint32 ( ::SireMaths::MultiInt::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMaths::MultiInt::at );
            
            MultiInt_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , "Return the ith value in the multifloat" );
        
        }
        { //::SireMaths::MultiInt::compareEqual
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareEqual_function_type)( ::SireMaths::MultiInt const & ) const;
            compareEqual_function_type compareEqual_function_value( &::SireMaths::MultiInt::compareEqual );
            
            MultiInt_exposer.def( 
                "compareEqual"
                , compareEqual_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::compareGreater
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareGreater_function_type)( ::SireMaths::MultiInt const & ) const;
            compareGreater_function_type compareGreater_function_value( &::SireMaths::MultiInt::compareGreater );
            
            MultiInt_exposer.def( 
                "compareGreater"
                , compareGreater_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::compareGreaterEqual
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareGreaterEqual_function_type)( ::SireMaths::MultiInt const & ) const;
            compareGreaterEqual_function_type compareGreaterEqual_function_value( &::SireMaths::MultiInt::compareGreaterEqual );
            
            MultiInt_exposer.def( 
                "compareGreaterEqual"
                , compareGreaterEqual_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::compareLess
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareLess_function_type)( ::SireMaths::MultiInt const & ) const;
            compareLess_function_type compareLess_function_value( &::SireMaths::MultiInt::compareLess );
            
            MultiInt_exposer.def( 
                "compareLess"
                , compareLess_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::compareLessEqual
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareLessEqual_function_type)( ::SireMaths::MultiInt const & ) const;
            compareLessEqual_function_type compareLessEqual_function_value( &::SireMaths::MultiInt::compareLessEqual );
            
            MultiInt_exposer.def( 
                "compareLessEqual"
                , compareLessEqual_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::compareNotEqual
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*compareNotEqual_function_type)( ::SireMaths::MultiInt const & ) const;
            compareNotEqual_function_type compareNotEqual_function_value( &::SireMaths::MultiInt::compareNotEqual );
            
            MultiInt_exposer.def( 
                "compareNotEqual"
                , compareNotEqual_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::count
        
            typedef int ( *count_function_type )(  );
            count_function_type count_function_value( &::SireMaths::MultiInt::count );
            
            MultiInt_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::doubleSum
        
            typedef ::qint64 ( ::SireMaths::MultiInt::*doubleSum_function_type)(  ) const;
            doubleSum_function_type doubleSum_function_value( &::SireMaths::MultiInt::doubleSum );
            
            MultiInt_exposer.def( 
                "doubleSum"
                , doubleSum_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::fromArray
        
            typedef ::QVector< SireMaths::MultiInt > ( *fromArray_function_type )( ::QVector< int > const & );
            fromArray_function_type fromArray_function_value( &::SireMaths::MultiInt::fromArray );
            
            MultiInt_exposer.def( 
                "fromArray"
                , fromArray_function_value
                , ( bp::arg("array") )
                , "Create an array of MultiInts from the passed array of integers. This will\npad the end of the array with zeroes if necessary" );
        
        }
        { //::SireMaths::MultiInt::fromArray
        
            typedef ::QVector< SireMaths::MultiInt > ( *fromArray_function_type )( ::qint32 const *,int );
            fromArray_function_type fromArray_function_value( &::SireMaths::MultiInt::fromArray );
            
            MultiInt_exposer.def( 
                "fromArray"
                , fromArray_function_value
                , ( bp::arg("array"), bp::arg("size") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::get
        
            typedef ::qint32 ( ::SireMaths::MultiInt::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMaths::MultiInt::get );
            
            MultiInt_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , "Return the\nith value in the MultiInt" );
        
        }
        { //::SireMaths::MultiInt::getitem
        
            typedef ::qint32 ( ::SireMaths::MultiInt::*getitem_function_type)( int ) const;
            getitem_function_type getitem_function_value( &::SireMaths::MultiInt::getitem );
            
            MultiInt_exposer.def( 
                "getitem"
                , getitem_function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::hasBinaryOne
        
            typedef bool ( ::SireMaths::MultiInt::*hasBinaryOne_function_type)(  ) const;
            hasBinaryOne_function_type hasBinaryOne_function_value( &::SireMaths::MultiInt::hasBinaryOne );
            
            MultiInt_exposer.def( 
                "hasBinaryOne"
                , hasBinaryOne_function_value
                , "Return whether or not at least one of the elements of this vector\nis binary one (the float is equal to 0xFFFFFFFF)" );
        
        }
        { //::SireMaths::MultiInt::hasBinaryZero
        
            typedef bool ( ::SireMaths::MultiInt::*hasBinaryZero_function_type)(  ) const;
            hasBinaryZero_function_type hasBinaryZero_function_value( &::SireMaths::MultiInt::hasBinaryZero );
            
            MultiInt_exposer.def( 
                "hasBinaryZero"
                , hasBinaryZero_function_value
                , "Return whether or not at least one of the elements of this vector\nis binary zero (the float is equal to 0x00000000)" );
        
        }
        { //::SireMaths::MultiInt::isAligned
        
            typedef bool ( ::SireMaths::MultiInt::*isAligned_function_type)(  ) const;
            isAligned_function_type isAligned_function_value( &::SireMaths::MultiInt::isAligned );
            
            MultiInt_exposer.def( 
                "isAligned"
                , isAligned_function_value
                , "Return whether or not this MultiInt is correctly aligned. If it is not,\nthen any SSE operations will fail" );
        
        }
        { //::SireMaths::MultiInt::isBinaryOne
        
            typedef bool ( ::SireMaths::MultiInt::*isBinaryOne_function_type)(  ) const;
            isBinaryOne_function_type isBinaryOne_function_value( &::SireMaths::MultiInt::isBinaryOne );
            
            MultiInt_exposer.def( 
                "isBinaryOne"
                , isBinaryOne_function_value
                , "Return whether all of the elements of this MultiInt are\nequal to 0xFFFFFFFF (e.g. every bit in the entire vector is 1)" );
        
        }
        { //::SireMaths::MultiInt::isBinaryZero
        
            typedef bool ( ::SireMaths::MultiInt::*isBinaryZero_function_type)(  ) const;
            isBinaryZero_function_type isBinaryZero_function_value( &::SireMaths::MultiInt::isBinaryZero );
            
            MultiInt_exposer.def( 
                "isBinaryZero"
                , isBinaryZero_function_value
                , "Return whether all of the elements of this MultiInt are\nequal to 0x00000000 (e.g. every bit in the entire vector is 0)" );
        
        }
        { //::SireMaths::MultiInt::isNotBinaryOne
        
            typedef bool ( ::SireMaths::MultiInt::*isNotBinaryOne_function_type)(  ) const;
            isNotBinaryOne_function_type isNotBinaryOne_function_value( &::SireMaths::MultiInt::isNotBinaryOne );
            
            MultiInt_exposer.def( 
                "isNotBinaryOne"
                , isNotBinaryOne_function_value
                , "Return whether all of the elements of this MultiInt are\nnot equal to 0xFFFFFFFF (e.g. at least one bit in the entire vector is 0)" );
        
        }
        { //::SireMaths::MultiInt::isNotBinaryZero
        
            typedef bool ( ::SireMaths::MultiInt::*isNotBinaryZero_function_type)(  ) const;
            isNotBinaryZero_function_type isNotBinaryZero_function_value( &::SireMaths::MultiInt::isNotBinaryZero );
            
            MultiInt_exposer.def( 
                "isNotBinaryZero"
                , isNotBinaryZero_function_value
                , "Return whether all of the elements of this MultiInt are\nnot equal to 0x00000000 (e.g. at least one bit in the entire vector is 1)" );
        
        }
        { //::SireMaths::MultiInt::logicalAnd
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*logicalAnd_function_type)( ::SireMaths::MultiInt const & ) const;
            logicalAnd_function_type logicalAnd_function_value( &::SireMaths::MultiInt::logicalAnd );
            
            MultiInt_exposer.def( 
                "logicalAnd"
                , logicalAnd_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::logicalAndNot
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*logicalAndNot_function_type)( ::SireMaths::MultiInt const & ) const;
            logicalAndNot_function_type logicalAndNot_function_value( &::SireMaths::MultiInt::logicalAndNot );
            
            MultiInt_exposer.def( 
                "logicalAndNot"
                , logicalAndNot_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::logicalNot
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*logicalNot_function_type)(  ) const;
            logicalNot_function_type logicalNot_function_value( &::SireMaths::MultiInt::logicalNot );
            
            MultiInt_exposer.def( 
                "logicalNot"
                , logicalNot_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::logicalOr
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*logicalOr_function_type)( ::SireMaths::MultiInt const & ) const;
            logicalOr_function_type logicalOr_function_value( &::SireMaths::MultiInt::logicalOr );
            
            MultiInt_exposer.def( 
                "logicalOr"
                , logicalOr_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::logicalXor
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*logicalXor_function_type)( ::SireMaths::MultiInt const & ) const;
            logicalXor_function_type logicalXor_function_value( &::SireMaths::MultiInt::logicalXor );
            
            MultiInt_exposer.def( 
                "logicalXor"
                , logicalXor_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::max
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*max_function_type)( ::SireMaths::MultiInt const & ) const;
            max_function_type max_function_value( &::SireMaths::MultiInt::max );
            
            MultiInt_exposer.def( 
                "max"
                , max_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        { //::SireMaths::MultiInt::min
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*min_function_type)( ::SireMaths::MultiInt const & ) const;
            min_function_type min_function_value( &::SireMaths::MultiInt::min );
            
            MultiInt_exposer.def( 
                "min"
                , min_function_value
                , ( bp::arg("other") )
                , "" );
        
        }
        MultiInt_exposer.def( !bp::self );
        MultiInt_exposer.def( bp::self != bp::self );
        MultiInt_exposer.def( bp::self & bp::self );
        MultiInt_exposer.def( bp::self * bp::self );
        MultiInt_exposer.def( bp::self + bp::self );
        MultiInt_exposer.def( -bp::self );
        MultiInt_exposer.def( bp::self - bp::self );
        MultiInt_exposer.def( bp::self < bp::self );
        MultiInt_exposer.def( bp::self <= bp::self );
        { //::SireMaths::MultiInt::operator=
        
            typedef ::SireMaths::MultiInt & ( ::SireMaths::MultiInt::*assign_function_type)( ::SireMaths::MultiInt const & ) ;
            assign_function_type assign_function_value( &::SireMaths::MultiInt::operator= );
            
            MultiInt_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMaths::MultiInt::operator=
        
            typedef ::SireMaths::MultiInt & ( ::SireMaths::MultiInt::*assign_function_type)( ::qint32 ) ;
            assign_function_type assign_function_value( &::SireMaths::MultiInt::operator= );
            
            MultiInt_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMaths::MultiInt::operator=
        
            typedef ::SireMaths::MultiInt & ( ::SireMaths::MultiInt::*assign_function_type)( ::SireMaths::MultiFloat const & ) ;
            assign_function_type assign_function_value( &::SireMaths::MultiInt::operator= );
            
            MultiInt_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MultiInt_exposer.def( bp::self == bp::self );
        MultiInt_exposer.def( bp::self > bp::self );
        MultiInt_exposer.def( bp::self >= bp::self );
        { //::SireMaths::MultiInt::operator[]
        
            typedef ::qint32 ( ::SireMaths::MultiInt::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMaths::MultiInt::operator[] );
            
            MultiInt_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        MultiInt_exposer.def( bp::self ^ bp::self );
        MultiInt_exposer.def( bp::self | bp::self );
        { //::SireMaths::MultiInt::reinterpretCastToFloat
        
            typedef ::SireMaths::MultiFloat ( ::SireMaths::MultiInt::*reinterpretCastToFloat_function_type)(  ) const;
            reinterpretCastToFloat_function_type reinterpretCastToFloat_function_value( &::SireMaths::MultiInt::reinterpretCastToFloat );
            
            MultiInt_exposer.def( 
                "reinterpretCastToFloat"
                , reinterpretCastToFloat_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::rotate
        
            typedef ::SireMaths::MultiInt ( ::SireMaths::MultiInt::*rotate_function_type)(  ) const;
            rotate_function_type rotate_function_value( &::SireMaths::MultiInt::rotate );
            
            MultiInt_exposer.def( 
                "rotate"
                , rotate_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::set
        
            typedef void ( ::SireMaths::MultiInt::*set_function_type)( int,::qint32 ) ;
            set_function_type set_function_value( &::SireMaths::MultiInt::set );
            
            MultiInt_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("value") )
                , "Set the ith value of the MultiInt to value" );
        
        }
        { //::SireMaths::MultiInt::size
        
            typedef int ( *size_function_type )(  );
            size_function_type size_function_value( &::SireMaths::MultiInt::size );
            
            MultiInt_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::sum
        
            typedef ::qint32 ( ::SireMaths::MultiInt::*sum_function_type)(  ) const;
            sum_function_type sum_function_value( &::SireMaths::MultiInt::sum );
            
            MultiInt_exposer.def( 
                "sum"
                , sum_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::toArray
        
            typedef ::QVector< int > ( *toArray_function_type )( ::QVector< SireMaths::MultiInt > const & );
            toArray_function_type toArray_function_value( &::SireMaths::MultiInt::toArray );
            
            MultiInt_exposer.def( 
                "toArray"
                , toArray_function_value
                , ( bp::arg("array") )
                , "Return the passed MultiInt converted back into a normal array" );
        
        }
        { //::SireMaths::MultiInt::toBinaryString
        
            typedef ::QString ( ::SireMaths::MultiInt::*toBinaryString_function_type)(  ) const;
            toBinaryString_function_type toBinaryString_function_value( &::SireMaths::MultiInt::toBinaryString );
            
            MultiInt_exposer.def( 
                "toBinaryString"
                , toBinaryString_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::toString
        
            typedef ::QString ( ::SireMaths::MultiInt::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::MultiInt::toString );
            
            MultiInt_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::MultiInt::typeName );
            
            MultiInt_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMaths::MultiInt::what
        
            typedef char const * ( ::SireMaths::MultiInt::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::MultiInt::what );
            
            MultiInt_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MultiInt_exposer.staticmethod( "count" );
        MultiInt_exposer.staticmethod( "fromArray" );
        MultiInt_exposer.staticmethod( "size" );
        MultiInt_exposer.staticmethod( "toArray" );
        MultiInt_exposer.staticmethod( "typeName" );
        MultiInt_exposer.def( "__copy__", &__copy__);
        MultiInt_exposer.def( "__deepcopy__", &__copy__);
        MultiInt_exposer.def( "clone", &__copy__);
        MultiInt_exposer.def( "__str__", &__str__< ::SireMaths::MultiInt > );
        MultiInt_exposer.def( "__repr__", &__str__< ::SireMaths::MultiInt > );
        MultiInt_exposer.def( "__len__", &__len_size< ::SireMaths::MultiInt > );
        MultiInt_exposer.def( "__getitem__", &::SireMaths::MultiInt::getitem );
    }

}
