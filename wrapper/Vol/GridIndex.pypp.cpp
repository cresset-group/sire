// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GridIndex.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/multifloat.h"

#include "SireMaths/multiint.h"

#include "SireMaths/vector.h"

#include "SireStream/datastream.h"

#include "gridinfo.h"

#include <QDebug>

#include "gridinfo.h"

SireVol::GridIndex __copy__(const SireVol::GridIndex &other){ return SireVol::GridIndex(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_GridIndex_class(){

    { //::SireVol::GridIndex
        typedef bp::class_< SireVol::GridIndex > GridIndex_exposer_t;
        GridIndex_exposer_t GridIndex_exposer = GridIndex_exposer_t( "GridIndex", "Very simple class providing a grid index", bp::init< bp::optional< int, int, int > >(( bp::arg("i")=(int)(0), bp::arg("j")=(int)(0), bp::arg("k")=(int)(0) ), "") );
        bp::scope GridIndex_scope( GridIndex_exposer );
        GridIndex_exposer.def( bp::init< SireVol::GridIndex const & >(( bp::arg("other") ), "") );
        { //::SireVol::GridIndex::i
        
            typedef ::qint32 ( ::SireVol::GridIndex::*i_function_type)(  ) const;
            i_function_type i_function_value( &::SireVol::GridIndex::i );
            
            GridIndex_exposer.def( 
                "i"
                , i_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::isNull
        
            typedef bool ( ::SireVol::GridIndex::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireVol::GridIndex::isNull );
            
            GridIndex_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::j
        
            typedef ::qint32 ( ::SireVol::GridIndex::*j_function_type)(  ) const;
            j_function_type j_function_value( &::SireVol::GridIndex::j );
            
            GridIndex_exposer.def( 
                "j"
                , j_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::k
        
            typedef ::qint32 ( ::SireVol::GridIndex::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireVol::GridIndex::k );
            
            GridIndex_exposer.def( 
                "k"
                , k_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::null
        
            typedef ::SireVol::GridIndex ( *null_function_type )(  );
            null_function_type null_function_value( &::SireVol::GridIndex::null );
            
            GridIndex_exposer.def( 
                "null"
                , null_function_value
                , "" );
        
        }
        GridIndex_exposer.def( bp::self != bp::self );
        { //::SireVol::GridIndex::operator=
        
            typedef ::SireVol::GridIndex & ( ::SireVol::GridIndex::*assign_function_type)( ::SireVol::GridIndex const & ) ;
            assign_function_type assign_function_value( &::SireVol::GridIndex::operator= );
            
            GridIndex_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GridIndex_exposer.def( bp::self == bp::self );
        { //::SireVol::GridIndex::toString
        
            typedef ::QString ( ::SireVol::GridIndex::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireVol::GridIndex::toString );
            
            GridIndex_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::GridIndex::typeName );
            
            GridIndex_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireVol::GridIndex::what
        
            typedef char const * ( ::SireVol::GridIndex::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireVol::GridIndex::what );
            
            GridIndex_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        GridIndex_exposer.staticmethod( "null" );
        GridIndex_exposer.staticmethod( "typeName" );
        GridIndex_exposer.def( "__copy__", &__copy__);
        GridIndex_exposer.def( "__deepcopy__", &__copy__);
        GridIndex_exposer.def( "clone", &__copy__);
        GridIndex_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::GridIndex >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridIndex_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::GridIndex >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridIndex_exposer.def_pickle(sire_pickle_suite< ::SireVol::GridIndex >());
        GridIndex_exposer.def( "__str__", &__str__< ::SireVol::GridIndex > );
        GridIndex_exposer.def( "__repr__", &__str__< ::SireVol::GridIndex > );
    }

}
