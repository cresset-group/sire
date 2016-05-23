// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJBoxIndex.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMM/cljboxes.h"

#include "SireMM/cljdelta.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/aabox.h"

#include "SireVol/periodicbox.h"

#include "SireVol/space.h"

#include "cljboxes.h"

#include "tostring.h"

#include <QDebug>

#include <QElapsedTimer>

#include "cljboxes.h"

SireMM::CLJBoxIndex __copy__(const SireMM::CLJBoxIndex &other){ return SireMM::CLJBoxIndex(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJBoxIndex_class(){

    { //::SireMM::CLJBoxIndex
        typedef bp::class_< SireMM::CLJBoxIndex > CLJBoxIndex_exposer_t;
        CLJBoxIndex_exposer_t CLJBoxIndex_exposer = CLJBoxIndex_exposer_t( "CLJBoxIndex", bp::init< >() );
        bp::scope CLJBoxIndex_scope( CLJBoxIndex_exposer );
        CLJBoxIndex_exposer.def( bp::init< qint16, qint16, qint16, bp::optional< qint16 > >(( bp::arg("i"), bp::arg("j"), bp::arg("k"), bp::arg("atom_idx")=(::qint16)(-1) )) );
        CLJBoxIndex_exposer.def( bp::init< SireMM::CLJBoxIndex const & >(( bp::arg("other") )) );
        { //::SireMM::CLJBoxIndex::box
        
            typedef ::SireVol::AABox ( ::SireMM::CLJBoxIndex::*box_function_type)( ::SireUnits::Dimension::Length ) const;
            box_function_type box_function_value( &::SireMM::CLJBoxIndex::box );
            
            CLJBoxIndex_exposer.def( 
                "box"
                , box_function_value
                , ( bp::arg("box_length") ) );
        
        }
        { //::SireMM::CLJBoxIndex::boxOnly
        
            typedef ::SireMM::CLJBoxIndex ( ::SireMM::CLJBoxIndex::*boxOnly_function_type)(  ) const;
            boxOnly_function_type boxOnly_function_value( &::SireMM::CLJBoxIndex::boxOnly );
            
            CLJBoxIndex_exposer.def( 
                "boxOnly"
                , boxOnly_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::countNonDummies
        
            typedef int ( *countNonDummies_function_type )( ::QVector< SireMM::CLJBoxIndex > const & );
            countNonDummies_function_type countNonDummies_function_value( &::SireMM::CLJBoxIndex::countNonDummies );
            
            CLJBoxIndex_exposer.def( 
                "countNonDummies"
                , countNonDummies_function_value
                , ( bp::arg("indicies") ) );
        
        }
        { //::SireMM::CLJBoxIndex::createWithBoxLength
        
            typedef ::SireMM::CLJBoxIndex ( *createWithBoxLength_function_type )( float,float,float,::SireUnits::Dimension::Length );
            createWithBoxLength_function_type createWithBoxLength_function_value( &::SireMM::CLJBoxIndex::createWithBoxLength );
            
            CLJBoxIndex_exposer.def( 
                "createWithBoxLength"
                , createWithBoxLength_function_value
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("box_length") ) );
        
        }
        { //::SireMM::CLJBoxIndex::createWithBoxLength
        
            typedef ::SireMM::CLJBoxIndex ( *createWithBoxLength_function_type )( ::SireMaths::Vector const &,::SireUnits::Dimension::Length );
            createWithBoxLength_function_type createWithBoxLength_function_value( &::SireMM::CLJBoxIndex::createWithBoxLength );
            
            CLJBoxIndex_exposer.def( 
                "createWithBoxLength"
                , createWithBoxLength_function_value
                , ( bp::arg("coords"), bp::arg("box_length") ) );
        
        }
        { //::SireMM::CLJBoxIndex::createWithInverseBoxLength
        
            typedef ::SireMM::CLJBoxIndex ( *createWithInverseBoxLength_function_type )( float,float,float,float );
            createWithInverseBoxLength_function_type createWithInverseBoxLength_function_value( &::SireMM::CLJBoxIndex::createWithInverseBoxLength );
            
            CLJBoxIndex_exposer.def( 
                "createWithInverseBoxLength"
                , createWithInverseBoxLength_function_value
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("inv_length") ) );
        
        }
        { //::SireMM::CLJBoxIndex::createWithInverseBoxLength
        
            typedef ::SireMM::CLJBoxIndex ( *createWithInverseBoxLength_function_type )( ::SireMaths::Vector const &,float );
            createWithInverseBoxLength_function_type createWithInverseBoxLength_function_value( &::SireMM::CLJBoxIndex::createWithInverseBoxLength );
            
            CLJBoxIndex_exposer.def( 
                "createWithInverseBoxLength"
                , createWithInverseBoxLength_function_value
                , ( bp::arg("coords"), bp::arg("inv_length") ) );
        
        }
        { //::SireMM::CLJBoxIndex::hasAtomIndex
        
            typedef bool ( ::SireMM::CLJBoxIndex::*hasAtomIndex_function_type)(  ) const;
            hasAtomIndex_function_type hasAtomIndex_function_value( &::SireMM::CLJBoxIndex::hasAtomIndex );
            
            CLJBoxIndex_exposer.def( 
                "hasAtomIndex"
                , hasAtomIndex_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::hash
        
            typedef ::uint ( ::SireMM::CLJBoxIndex::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMM::CLJBoxIndex::hash );
            
            CLJBoxIndex_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::i
        
            typedef ::qint16 ( ::SireMM::CLJBoxIndex::*i_function_type)(  ) const;
            i_function_type i_function_value( &::SireMM::CLJBoxIndex::i );
            
            CLJBoxIndex_exposer.def( 
                "i"
                , i_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::index
        
            typedef ::qint16 ( ::SireMM::CLJBoxIndex::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireMM::CLJBoxIndex::index );
            
            CLJBoxIndex_exposer.def( 
                "index"
                , index_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::isNull
        
            typedef bool ( ::SireMM::CLJBoxIndex::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMM::CLJBoxIndex::isNull );
            
            CLJBoxIndex_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::j
        
            typedef ::qint16 ( ::SireMM::CLJBoxIndex::*j_function_type)(  ) const;
            j_function_type j_function_value( &::SireMM::CLJBoxIndex::j );
            
            CLJBoxIndex_exposer.def( 
                "j"
                , j_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::k
        
            typedef ::qint16 ( ::SireMM::CLJBoxIndex::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireMM::CLJBoxIndex::k );
            
            CLJBoxIndex_exposer.def( 
                "k"
                , k_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::max
        
            typedef ::SireMM::CLJBoxIndex ( ::SireMM::CLJBoxIndex::*max_function_type)( ::SireMM::CLJBoxIndex const & ) const;
            max_function_type max_function_value( &::SireMM::CLJBoxIndex::max );
            
            CLJBoxIndex_exposer.def( 
                "max"
                , max_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMM::CLJBoxIndex::min
        
            typedef ::SireMM::CLJBoxIndex ( ::SireMM::CLJBoxIndex::*min_function_type)( ::SireMM::CLJBoxIndex const & ) const;
            min_function_type min_function_value( &::SireMM::CLJBoxIndex::min );
            
            CLJBoxIndex_exposer.def( 
                "min"
                , min_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMM::CLJBoxIndex::null
        
            typedef ::SireMM::CLJBoxIndex ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMM::CLJBoxIndex::null );
            
            CLJBoxIndex_exposer.def( 
                "null"
                , null_function_value );
        
        }
        CLJBoxIndex_exposer.def( bp::self != bp::self );
        CLJBoxIndex_exposer.def( bp::self < bp::self );
        CLJBoxIndex_exposer.def( bp::self <= bp::self );
        { //::SireMM::CLJBoxIndex::operator=
        
            typedef ::SireMM::CLJBoxIndex & ( ::SireMM::CLJBoxIndex::*assign_function_type)( ::SireMM::CLJBoxIndex const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJBoxIndex::operator= );
            
            CLJBoxIndex_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        CLJBoxIndex_exposer.def( bp::self == bp::self );
        CLJBoxIndex_exposer.def( bp::self > bp::self );
        CLJBoxIndex_exposer.def( bp::self >= bp::self );
        { //::SireMM::CLJBoxIndex::sameBox
        
            typedef bool ( ::SireMM::CLJBoxIndex::*sameBox_function_type)( ::SireMM::CLJBoxIndex const & ) const;
            sameBox_function_type sameBox_function_value( &::SireMM::CLJBoxIndex::sameBox );
            
            CLJBoxIndex_exposer.def( 
                "sameBox"
                , sameBox_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMM::CLJBoxIndex::toString
        
            typedef ::QString ( ::SireMM::CLJBoxIndex::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJBoxIndex::toString );
            
            CLJBoxIndex_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJBoxIndex::typeName );
            
            CLJBoxIndex_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CLJBoxIndex::what
        
            typedef char const * ( ::SireMM::CLJBoxIndex::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJBoxIndex::what );
            
            CLJBoxIndex_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CLJBoxIndex_exposer.staticmethod( "countNonDummies" );
        CLJBoxIndex_exposer.staticmethod( "createWithBoxLength" );
        CLJBoxIndex_exposer.staticmethod( "createWithInverseBoxLength" );
        CLJBoxIndex_exposer.staticmethod( "null" );
        CLJBoxIndex_exposer.staticmethod( "typeName" );
        CLJBoxIndex_exposer.def( "__copy__", &__copy__);
        CLJBoxIndex_exposer.def( "__deepcopy__", &__copy__);
        CLJBoxIndex_exposer.def( "clone", &__copy__);
        CLJBoxIndex_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJBoxIndex >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJBoxIndex_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJBoxIndex >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJBoxIndex_exposer.def( "__str__", &__str__< ::SireMM::CLJBoxIndex > );
        CLJBoxIndex_exposer.def( "__repr__", &__str__< ::SireMM::CLJBoxIndex > );
        CLJBoxIndex_exposer.def( "__hash__", &::SireMM::CLJBoxIndex::hash );
    }

}
