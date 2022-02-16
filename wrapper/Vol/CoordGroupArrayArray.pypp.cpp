// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CoordGroupArrayArray.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/quickcopy.hpp"

#include "SireError/errors.h"

#include "SireMaths/align.h"

#include "SireMaths/axisset.h"

#include "SireMaths/matrix.h"

#include "SireMaths/quaternion.h"

#include "SireMaths/rotate.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "coordgroup.h"

#include <QDebug>

#include "coordgroup.h"

SireVol::CoordGroupArrayArray __copy__(const SireVol::CoordGroupArrayArray &other){ return SireVol::CoordGroupArrayArray(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_CoordGroupArrayArray_class(){

    { //::SireVol::CoordGroupArrayArray
        typedef bp::class_< SireVol::CoordGroupArrayArray > CoordGroupArrayArray_exposer_t;
        CoordGroupArrayArray_exposer_t CoordGroupArrayArray_exposer = CoordGroupArrayArray_exposer_t( "CoordGroupArrayArray", "This class holds an array of CoordGroupArrays. This is\nused to pack all of the CoordGroupArrays (and thus\nall contained CoordGroups) into a single contiguous\nblock of memory. This should improve efficiency of\niterating over these groupscoordinates, but it does\nmake this array less flexible than a simple\nQVector<CoordGroupArray>, or QVector< QVector<CoordGroup> >.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty array") );
        bp::scope CoordGroupArrayArray_scope( CoordGroupArrayArray_exposer );
        CoordGroupArrayArray_exposer.def( bp::init< SireVol::CoordGroup const & >(( bp::arg("cgroup") ), "Construct an array that contains just the CoordGroup cgroup\n(in a single array that contains this group)") );
        CoordGroupArrayArray_exposer.def( bp::init< SireVol::CoordGroupArray const & >(( bp::arg("cgarray") ), "Construct an array that contains just the CoordGroupArray cgarray") );
        CoordGroupArrayArray_exposer.def( bp::init< QVector< SireVol::CoordGroupArray > const & >(( bp::arg("cgarrays") ), "Construct an array from a vector of arrays") );
        CoordGroupArrayArray_exposer.def( bp::init< QVector< QVector< SireVol::CoordGroup > > const & >(( bp::arg("cgarrays") ), "Construct from an array of array of CoordGroups") );
        CoordGroupArrayArray_exposer.def( bp::init< QVector< QVector< QVector< SireMaths::Vector > > > const & >(( bp::arg("points") ), "Construct from a triple-vector") );
        CoordGroupArrayArray_exposer.def( bp::init< SireVol::CoordGroupArrayArray const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireVol::CoordGroupArrayArray::aaBox
        
            typedef ::SireVol::AABox ( ::SireVol::CoordGroupArrayArray::*aaBox_function_type)(  ) const;
            aaBox_function_type aaBox_function_value( &::SireVol::CoordGroupArrayArray::aaBox );
            
            CoordGroupArrayArray_exposer.def( 
                "aaBox"
                , aaBox_function_value
                , "Return an AABox that complete encompasses all of the CoordGroups\nin this array" );
        
        }
        { //::SireVol::CoordGroupArrayArray::assertValidCoordGroup
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*assertValidCoordGroup_function_type)( ::quint32 ) const;
            assertValidCoordGroup_function_type assertValidCoordGroup_function_value( &::SireVol::CoordGroupArrayArray::assertValidCoordGroup );
            
            CoordGroupArrayArray_exposer.def( 
                "assertValidCoordGroup"
                , assertValidCoordGroup_function_value
                , ( bp::arg("i") )
                , "Assert that i is a valid index for a CoordGroup\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::assertValidCoordGroup
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*assertValidCoordGroup_function_type)( ::quint32,::quint32 ) const;
            assertValidCoordGroup_function_type assertValidCoordGroup_function_value( &::SireVol::CoordGroupArrayArray::assertValidCoordGroup );
            
            CoordGroupArrayArray_exposer.def( 
                "assertValidCoordGroup"
                , assertValidCoordGroup_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "Assert that there is a jth CoordGroup in the ith array\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::assertValidCoordGroupArray
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*assertValidCoordGroupArray_function_type)( ::quint32 ) const;
            assertValidCoordGroupArray_function_type assertValidCoordGroupArray_function_value( &::SireVol::CoordGroupArrayArray::assertValidCoordGroupArray );
            
            CoordGroupArrayArray_exposer.def( 
                "assertValidCoordGroupArray"
                , assertValidCoordGroupArray_function_value
                , ( bp::arg("i") )
                , "Assert that i is a valid index for a CoordGroupArray\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::assertValidCoordinate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*assertValidCoordinate_function_type)( ::quint32 ) const;
            assertValidCoordinate_function_type assertValidCoordinate_function_value( &::SireVol::CoordGroupArrayArray::assertValidCoordinate );
            
            CoordGroupArrayArray_exposer.def( 
                "assertValidCoordinate"
                , assertValidCoordinate_function_value
                , ( bp::arg("i") )
                , "Assert that i is a valid index for a coordinate\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::assertValidIndex
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*assertValidIndex_function_type)( ::quint32 ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireVol::CoordGroupArrayArray::assertValidIndex );
            
            CoordGroupArrayArray_exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i") )
                , "Assert that i is a valid index for a CoordGroupArray\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::at
        
            typedef ::SireVol::CoordGroupArray const & ( ::SireVol::CoordGroupArrayArray::*at_function_type)( ::quint32 ) const;
            at_function_type at_function_value( &::SireVol::CoordGroupArrayArray::at );
            
            CoordGroupArrayArray_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the ith CoordGroupArray in this array\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::changeFrame
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireVol::CoordGroupArrayArray::changeFrame );
            
            CoordGroupArrayArray_exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame") )
                , "Map all of the points in this array from the coordinate frame\nfrom_frame to the coordinate frame to_frame" );
        
        }
        { //::SireVol::CoordGroupArrayArray::changeFrame
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*changeFrame_function_type)( ::quint32,::SireMaths::AxisSet const &,::SireMaths::AxisSet const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireVol::CoordGroupArrayArray::changeFrame );
            
            CoordGroupArrayArray_exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("i"), bp::arg("from_frame"), bp::arg("to_frame") )
                , "Map all of the points in this array from the coordinate frame\nfrom_frame to the coordinate frame to_frame\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::changeFrame
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*changeFrame_function_type)( ::quint32,::quint32,::SireMaths::AxisSet const &,::SireMaths::AxisSet const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireVol::CoordGroupArrayArray::changeFrame );
            
            CoordGroupArrayArray_exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("from_frame"), bp::arg("to_frame") )
                , "Map all of the points in the CoordGroup at index j in the\narray at index i from the coordinate frame from_frame to\nthe coordinate frame to_frame\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::count
        
            typedef int ( ::SireVol::CoordGroupArrayArray::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireVol::CoordGroupArrayArray::count );
            
            CoordGroupArrayArray_exposer.def( 
                "count"
                , count_function_value
                , "Return the number of CoordGroupArrays in this array" );
        
        }
        { //::SireVol::CoordGroupArrayArray::mapInto
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*mapInto_function_type)( ::SireMaths::AxisSet const & ) ;
            mapInto_function_type mapInto_function_value( &::SireVol::CoordGroupArrayArray::mapInto );
            
            CoordGroupArrayArray_exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes") )
                , "Map all of the points in this array into the coordinate frame\nrepresented by axes" );
        
        }
        { //::SireVol::CoordGroupArrayArray::mapInto
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*mapInto_function_type)( ::quint32,::SireMaths::AxisSet const & ) ;
            mapInto_function_type mapInto_function_value( &::SireVol::CoordGroupArrayArray::mapInto );
            
            CoordGroupArrayArray_exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("i"), bp::arg("axes") )
                , "Map all of the points in the ith array into the coordinate frame\nrepresented by axes\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::mapInto
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*mapInto_function_type)( ::quint32,::quint32,::SireMaths::AxisSet const & ) ;
            mapInto_function_type mapInto_function_value( &::SireVol::CoordGroupArrayArray::mapInto );
            
            CoordGroupArrayArray_exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("axes") )
                , "Map all the points in the CoordGroup at index j in the array at\nindex i into the coordinate frame represented by axes\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::merge
        
            typedef ::SireVol::CoordGroup ( ::SireVol::CoordGroupArrayArray::*merge_function_type)(  ) const;
            merge_function_type merge_function_value( &::SireVol::CoordGroupArrayArray::merge );
            
            CoordGroupArrayArray_exposer.def( 
                "merge"
                , merge_function_value
                , "Merge this array of array of CoordGroups back into a single CoordGroup" );
        
        }
        { //::SireVol::CoordGroupArrayArray::nCoordGroupArrays
        
            typedef int ( ::SireVol::CoordGroupArrayArray::*nCoordGroupArrays_function_type)(  ) const;
            nCoordGroupArrays_function_type nCoordGroupArrays_function_value( &::SireVol::CoordGroupArrayArray::nCoordGroupArrays );
            
            CoordGroupArrayArray_exposer.def( 
                "nCoordGroupArrays"
                , nCoordGroupArrays_function_value
                , "Return the number of CoordGroupArrays in this array" );
        
        }
        { //::SireVol::CoordGroupArrayArray::nCoordGroups
        
            typedef int ( ::SireVol::CoordGroupArrayArray::*nCoordGroups_function_type)(  ) const;
            nCoordGroups_function_type nCoordGroups_function_value( &::SireVol::CoordGroupArrayArray::nCoordGroups );
            
            CoordGroupArrayArray_exposer.def( 
                "nCoordGroups"
                , nCoordGroups_function_value
                , "Return the total number of CoordGroups in all of the CoordGroupArrays\nin this array" );
        
        }
        { //::SireVol::CoordGroupArrayArray::nCoords
        
            typedef int ( ::SireVol::CoordGroupArrayArray::*nCoords_function_type)(  ) const;
            nCoords_function_type nCoords_function_value( &::SireVol::CoordGroupArrayArray::nCoords );
            
            CoordGroupArrayArray_exposer.def( 
                "nCoords"
                , nCoords_function_value
                , "Return the total number of points in all of the CoordGroups in\nall of the CoordGroupArrays in this array" );
        
        }
        CoordGroupArrayArray_exposer.def( bp::self != bp::self );
        { //::SireVol::CoordGroupArrayArray::operator=
        
            typedef ::SireVol::CoordGroupArrayArray & ( ::SireVol::CoordGroupArrayArray::*assign_function_type)( ::SireVol::CoordGroupArrayArray const & ) ;
            assign_function_type assign_function_value( &::SireVol::CoordGroupArrayArray::operator= );
            
            CoordGroupArrayArray_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CoordGroupArrayArray_exposer.def( bp::self == bp::self );
        { //::SireVol::CoordGroupArrayArray::operator[]
        
            typedef ::SireVol::CoordGroupArray const & ( ::SireVol::CoordGroupArrayArray::*__getitem___function_type)( ::quint32 ) const;
            __getitem___function_type __getitem___function_value( &::SireVol::CoordGroupArrayArray::operator[] );
            
            CoordGroupArrayArray_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point") )
                , "Rotate all of the points in this container using the quaternion quat\nabout the point point" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point") )
                , "Rotate all of the points in this container using the matrix rotmat\nabout the point point" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::quint32,::SireMaths::Quaternion const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("i"), bp::arg("quat"), bp::arg("point") )
                , "Rotate all of the points in the ith array using the quaternion quat\nabout the point point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::quint32,::SireMaths::Matrix const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("i"), bp::arg("rotmat"), bp::arg("point") )
                , "Rotate all of the points in the ith array using the matrix rotmat\nabout the point point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::quint32,::quint32,::SireMaths::Quaternion const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("quat"), bp::arg("point") )
                , "Rotate all of the points in the jth CoordGroup in the\nith array using the quaternion quat about the point point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::rotate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*rotate_function_type)( ::quint32,::quint32,::SireMaths::Matrix const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireVol::CoordGroupArrayArray::rotate );
            
            CoordGroupArrayArray_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("rotmat"), bp::arg("point") )
                , "Rotate all of the points in the jth CoordGroup in the\nith array using the matrix rotmat about the point point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::size
        
            typedef int ( ::SireVol::CoordGroupArrayArray::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireVol::CoordGroupArrayArray::size );
            
            CoordGroupArrayArray_exposer.def( 
                "size"
                , size_function_value
                , "Return the number of CoordGroupArrays in this array" );
        
        }
        { //::SireVol::CoordGroupArrayArray::toString
        
            typedef ::QString ( ::SireVol::CoordGroupArrayArray::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireVol::CoordGroupArrayArray::toString );
            
            CoordGroupArrayArray_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this array of arrays" );
        
        }
        { //::SireVol::CoordGroupArrayArray::transform
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*transform_function_type)( ::SireMaths::Transform const & ) ;
            transform_function_type transform_function_value( &::SireVol::CoordGroupArrayArray::transform );
            
            CoordGroupArrayArray_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("t") )
                , "Rotate all of the points in this container using the matrix rotmat\nabout the point point" );
        
        }
        { //::SireVol::CoordGroupArrayArray::transform
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*transform_function_type)( ::quint32,::SireMaths::Transform const & ) ;
            transform_function_type transform_function_value( &::SireVol::CoordGroupArrayArray::transform );
            
            CoordGroupArrayArray_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("i"), bp::arg("t") )
                , "Transform all of the points in the ith array using the\ntransformation t\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::transform
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*transform_function_type)( ::quint32,::quint32,::SireMaths::Transform const & ) ;
            transform_function_type transform_function_value( &::SireVol::CoordGroupArrayArray::transform );
            
            CoordGroupArrayArray_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("t") )
                , "Transform all of the points in the jth CoordGroup in the\nith array using the transformation t\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::translate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*translate_function_type)( ::SireMaths::Vector const & ) ;
            translate_function_type translate_function_value( &::SireVol::CoordGroupArrayArray::translate );
            
            CoordGroupArrayArray_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("delta") )
                , "Translate all of the coordinates held in this container by delta" );
        
        }
        { //::SireVol::CoordGroupArrayArray::translate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*translate_function_type)( ::quint32,::SireMaths::Vector const & ) ;
            translate_function_type translate_function_value( &::SireVol::CoordGroupArrayArray::translate );
            
            CoordGroupArrayArray_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("i"), bp::arg("delta") )
                , "Translate all of the points in the ith array by delta\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::translate
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*translate_function_type)( ::quint32,::quint32,::SireMaths::Vector const & ) ;
            translate_function_type translate_function_value( &::SireVol::CoordGroupArrayArray::translate );
            
            CoordGroupArrayArray_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("delta") )
                , "Translate all of the points in the jth CoordGroup of the ith\narray by delta\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::CoordGroupArrayArray::typeName );
            
            CoordGroupArrayArray_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireVol::CoordGroupArrayArray::update
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*update_function_type)( ::quint32,::SireVol::CoordGroupArray const & ) ;
            update_function_type update_function_value( &::SireVol::CoordGroupArrayArray::update );
            
            CoordGroupArrayArray_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("array") )
                , "Update the ith CoordGroupArray so that its contents are equal to array.\nNote that you can only do this if the configuration of the\nCoordGroupArray at index i is identical to array (same number\nof CoordGroups, with the same number of coordinates in\nequivalent CoordGroups)\nThrow: SireError::invalid_index\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::update
        
            typedef void ( ::SireVol::CoordGroupArrayArray::*update_function_type)( ::quint32,::quint32,::SireVol::CoordGroup const & ) ;
            update_function_type update_function_value( &::SireVol::CoordGroupArrayArray::update );
            
            CoordGroupArrayArray_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("cgroup") )
                , "Update the jth CoordGroup of the ith CoordGroupArray so that its\ncoordinates are equal to cgroup. Note that you can only do this if\nthe number of coordinates in this CoordGroup is the same as\nin cgroup\nThrow: SireError::invalid_index\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireVol::CoordGroupArrayArray::what
        
            typedef char const * ( ::SireVol::CoordGroupArrayArray::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireVol::CoordGroupArrayArray::what );
            
            CoordGroupArrayArray_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        CoordGroupArrayArray_exposer.staticmethod( "typeName" );
        CoordGroupArrayArray_exposer.def( "__copy__", &__copy__);
        CoordGroupArrayArray_exposer.def( "__deepcopy__", &__copy__);
        CoordGroupArrayArray_exposer.def( "clone", &__copy__);
        CoordGroupArrayArray_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::CoordGroupArrayArray >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CoordGroupArrayArray_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::CoordGroupArrayArray >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CoordGroupArrayArray_exposer.def_pickle(sire_pickle_suite< ::SireVol::CoordGroupArrayArray >());
        CoordGroupArrayArray_exposer.def( "__str__", &__str__< ::SireVol::CoordGroupArrayArray > );
        CoordGroupArrayArray_exposer.def( "__repr__", &__str__< ::SireVol::CoordGroupArrayArray > );
        CoordGroupArrayArray_exposer.def( "__len__", &__len_size< ::SireVol::CoordGroupArrayArray > );
    }

}
