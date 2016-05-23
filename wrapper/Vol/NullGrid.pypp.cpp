// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "NullGrid.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/rotate.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "grid.h"

#include "grid.h"

SireVol::NullGrid __copy__(const SireVol::NullGrid &other){ return SireVol::NullGrid(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_NullGrid_class(){

    { //::SireVol::NullGrid
        typedef bp::class_< SireVol::NullGrid, bp::bases< SireVol::Grid, SireBase::Property > > NullGrid_exposer_t;
        NullGrid_exposer_t NullGrid_exposer = NullGrid_exposer_t( "NullGrid", bp::init< >() );
        bp::scope NullGrid_scope( NullGrid_exposer );
        NullGrid_exposer.def( bp::init< SireVol::NullGrid const & >(( bp::arg("other") )) );
        NullGrid_exposer.def( bp::self != bp::self );
        { //::SireVol::NullGrid::operator=
        
            typedef ::SireVol::NullGrid & ( ::SireVol::NullGrid::*assign_function_type)( ::SireVol::NullGrid const & ) ;
            assign_function_type assign_function_value( &::SireVol::NullGrid::operator= );
            
            NullGrid_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        NullGrid_exposer.def( bp::self == bp::self );
        { //::SireVol::NullGrid::recenter
        
            typedef ::SireVol::GridPtr ( ::SireVol::NullGrid::*recenter_function_type)( ::SireMaths::Vector const & ) const;
            recenter_function_type recenter_function_value( &::SireVol::NullGrid::recenter );
            
            NullGrid_exposer.def( 
                "recenter"
                , recenter_function_value
                , ( bp::arg("center") ) );
        
        }
        { //::SireVol::NullGrid::rotate
        
            typedef ::SireVol::GridPtr ( ::SireVol::NullGrid::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const & ) const;
            rotate_function_type rotate_function_value( &::SireVol::NullGrid::rotate );
            
            NullGrid_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("center")=SireMaths::Vector(0) ) );
        
        }
        { //::SireVol::NullGrid::rotate
        
            typedef ::SireVol::GridPtr ( ::SireVol::NullGrid::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const & ) const;
            rotate_function_type rotate_function_value( &::SireVol::NullGrid::rotate );
            
            NullGrid_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("center")=SireMaths::Vector(0) ) );
        
        }
        { //::SireVol::NullGrid::scale
        
            typedef ::SireVol::GridPtr ( ::SireVol::NullGrid::*scale_function_type)( double ) const;
            scale_function_type scale_function_value( &::SireVol::NullGrid::scale );
            
            NullGrid_exposer.def( 
                "scale"
                , scale_function_value
                , ( bp::arg("scalefactor") ) );
        
        }
        { //::SireVol::NullGrid::translate
        
            typedef ::SireVol::GridPtr ( ::SireVol::NullGrid::*translate_function_type)( ::SireMaths::Vector const & ) const;
            translate_function_type translate_function_value( &::SireVol::NullGrid::translate );
            
            NullGrid_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("delta") ) );
        
        }
        { //::SireVol::NullGrid::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::NullGrid::typeName );
            
            NullGrid_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        NullGrid_exposer.staticmethod( "typeName" );
        NullGrid_exposer.def( "__copy__", &__copy__);
        NullGrid_exposer.def( "__deepcopy__", &__copy__);
        NullGrid_exposer.def( "clone", &__copy__);
        NullGrid_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::NullGrid >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullGrid_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::NullGrid >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullGrid_exposer.def( "__str__", &__str__< ::SireVol::NullGrid > );
        NullGrid_exposer.def( "__repr__", &__str__< ::SireVol::NullGrid > );
        NullGrid_exposer.def( "__len__", &__len_count< ::SireVol::NullGrid > );
    }

}
