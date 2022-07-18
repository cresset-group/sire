// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Array2DBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "array2d.h"

#include "array2d.hpp"

#include "array2d.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireBase::Array2DBase&){ return "SireBase::Array2DBase";}

#include "Helpers/release_gil_policy.hpp"

void register_Array2DBase_class(){

    { //::SireBase::Array2DBase
        typedef bp::class_< SireBase::Array2DBase, boost::noncopyable > Array2DBase_exposer_t;
        Array2DBase_exposer_t Array2DBase_exposer = Array2DBase_exposer_t( "Array2DBase", "Base class of the Array2D<T> class\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope Array2DBase_scope( Array2DBase_exposer );
        { //::SireBase::Array2DBase::assertValidIndex
        
            typedef void ( ::SireBase::Array2DBase::*assertValidIndex_function_type)( int,int ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireBase::Array2DBase::assertValidIndex );
            
            Array2DBase_exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2DBase::checkedOffset
        
            typedef int ( ::SireBase::Array2DBase::*checkedOffset_function_type)( int,int ) const;
            checkedOffset_function_type checkedOffset_function_value( &::SireBase::Array2DBase::checkedOffset );
            
            Array2DBase_exposer.def( 
                "checkedOffset"
                , checkedOffset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2DBase::map
        
            typedef int ( ::SireBase::Array2DBase::*map_function_type)( int,int ) const;
            map_function_type map_function_value( &::SireBase::Array2DBase::map );
            
            Array2DBase_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2DBase::nColumns
        
            typedef int ( ::SireBase::Array2DBase::*nColumns_function_type)(  ) const;
            nColumns_function_type nColumns_function_value( &::SireBase::Array2DBase::nColumns );
            
            Array2DBase_exposer.def( 
                "nColumns"
                , nColumns_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2DBase::nRows
        
            typedef int ( ::SireBase::Array2DBase::*nRows_function_type)(  ) const;
            nRows_function_type nRows_function_value( &::SireBase::Array2DBase::nRows );
            
            Array2DBase_exposer.def( 
                "nRows"
                , nRows_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::Array2DBase::offset
        
            typedef int ( ::SireBase::Array2DBase::*offset_function_type)( int,int ) const;
            offset_function_type offset_function_value( &::SireBase::Array2DBase::offset );
            
            Array2DBase_exposer.def( 
                "offset"
                , offset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "" );
        
        }
        Array2DBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Array2DBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2DBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Array2DBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2DBase_exposer.def_pickle(sire_pickle_suite< ::SireBase::Array2DBase >());
        Array2DBase_exposer.def( "__str__", &pvt_get_name);
        Array2DBase_exposer.def( "__repr__", &pvt_get_name);
    }

}
