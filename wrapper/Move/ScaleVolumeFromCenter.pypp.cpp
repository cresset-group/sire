// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ScaleVolumeFromCenter.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/moleculegroup.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "SireVol/space.h"

#include "math.h"

#include "sire_config.h"

#include "volumechanger.h"

#include <cmath>

#include "volumechanger.h"

SireMove::ScaleVolumeFromCenter __copy__(const SireMove::ScaleVolumeFromCenter &other){ return SireMove::ScaleVolumeFromCenter(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ScaleVolumeFromCenter_class(){

    { //::SireMove::ScaleVolumeFromCenter
        typedef bp::class_< SireMove::ScaleVolumeFromCenter, bp::bases< SireMove::VolumeChanger, SireBase::Property > > ScaleVolumeFromCenter_exposer_t;
        ScaleVolumeFromCenter_exposer_t ScaleVolumeFromCenter_exposer = ScaleVolumeFromCenter_exposer_t( "ScaleVolumeFromCenter", "This is a volume changer that works by scaling the molecules\nfrom a user-supplied center point, scaling those molecules closest\nto the center point the least, and those furthest from the\npoint the most\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope ScaleVolumeFromCenter_scope( ScaleVolumeFromCenter_exposer );
        ScaleVolumeFromCenter_exposer.def( bp::init< SireMol::MGID const & >(( bp::arg("mgid") ), "Construct to scale the molecules in the group(s) with ID mgid,\nscaling the molecules from the origin (0,0,0)") );
        ScaleVolumeFromCenter_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("molgroup") ), "Construct to scale the molecules in the group molgroup,\nscaling the molecules from the origin (0,0,0)") );
        ScaleVolumeFromCenter_exposer.def( bp::init< SireMol::MGID const &, SireFF::PointRef const & >(( bp::arg("mgid"), bp::arg("point") ), "Construct to scale the molecules in the groups with ID mgid,\nscaling the molecules from the point point") );
        ScaleVolumeFromCenter_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireFF::PointRef const & >(( bp::arg("molgroup"), bp::arg("point") ), "Construct to scale the molecules in the group molgroup,\nscaling the molecules from the point point") );
        ScaleVolumeFromCenter_exposer.def( bp::init< SireMove::ScaleVolumeFromCenter const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::ScaleVolumeFromCenter::center
        
            typedef ::SireFF::Point const & ( ::SireMove::ScaleVolumeFromCenter::*center_function_type)(  ) const;
            center_function_type center_function_value( &::SireMove::ScaleVolumeFromCenter::center );
            
            ScaleVolumeFromCenter_exposer.def( 
                "center"
                , center_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the center point from which the molecules are scaled" );
        
        }
        ScaleVolumeFromCenter_exposer.def( bp::self != bp::self );
        { //::SireMove::ScaleVolumeFromCenter::operator=
        
            typedef ::SireMove::ScaleVolumeFromCenter & ( ::SireMove::ScaleVolumeFromCenter::*assign_function_type)( ::SireMove::ScaleVolumeFromCenter const & ) ;
            assign_function_type assign_function_value( &::SireMove::ScaleVolumeFromCenter::operator= );
            
            ScaleVolumeFromCenter_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        ScaleVolumeFromCenter_exposer.def( bp::self == bp::self );
        { //::SireMove::ScaleVolumeFromCenter::setCenter
        
            typedef void ( ::SireMove::ScaleVolumeFromCenter::*setCenter_function_type)( ::SireFF::PointRef const & ) ;
            setCenter_function_type setCenter_function_value( &::SireMove::ScaleVolumeFromCenter::setCenter );
            
            ScaleVolumeFromCenter_exposer.def( 
                "setCenter"
                , setCenter_function_value
                , ( bp::arg("center") )
                , bp::release_gil_policy()
                , "Set the center point from which the molecules will be scaled" );
        
        }
        { //::SireMove::ScaleVolumeFromCenter::setVolume
        
            typedef int ( ::SireMove::ScaleVolumeFromCenter::*setVolume_function_type)( ::SireSystem::System &,::SireUnits::Dimension::Volume const &,::SireBase::PropertyMap const & ) const;
            setVolume_function_type setVolume_function_value( &::SireMove::ScaleVolumeFromCenter::setVolume );
            
            ScaleVolumeFromCenter_exposer.def( 
                "setVolume"
                , setVolume_function_value
                , ( bp::arg("system"), bp::arg("volume"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the volume of the system system to volume, using the\noptionally supplied property map to find the names of the\nproperties needed to change the system volume.\nThis returns the number of molecules involved in the volume change\nThrow: SireMol::missing_group\nThrow: SireBase::missing_property\nThrow: SireVol::incompatible_space\nThrow: SireError::invalid_cast\nThrow: SireError::invalid_state\nThrow: SireError::unsupported\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMove::ScaleVolumeFromCenter::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::ScaleVolumeFromCenter::typeName );
            
            ScaleVolumeFromCenter_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        ScaleVolumeFromCenter_exposer.staticmethod( "typeName" );
        ScaleVolumeFromCenter_exposer.def( "__copy__", &__copy__);
        ScaleVolumeFromCenter_exposer.def( "__deepcopy__", &__copy__);
        ScaleVolumeFromCenter_exposer.def( "clone", &__copy__);
        ScaleVolumeFromCenter_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::ScaleVolumeFromCenter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ScaleVolumeFromCenter_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::ScaleVolumeFromCenter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ScaleVolumeFromCenter_exposer.def_pickle(sire_pickle_suite< ::SireMove::ScaleVolumeFromCenter >());
        ScaleVolumeFromCenter_exposer.def( "__str__", &__str__< ::SireMove::ScaleVolumeFromCenter > );
        ScaleVolumeFromCenter_exposer.def( "__repr__", &__str__< ::SireMove::ScaleVolumeFromCenter > );
    }

}
