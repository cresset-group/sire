// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "VolumeChanger.pypp.hpp"

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

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_VolumeChanger_class(){

    { //::SireMove::VolumeChanger
        typedef bp::class_< SireMove::VolumeChanger, bp::bases< SireBase::Property >, boost::noncopyable > VolumeChanger_exposer_t;
        VolumeChanger_exposer_t VolumeChanger_exposer = VolumeChanger_exposer_t( "VolumeChanger", "This is the base class of all volume changing function classes.\nThese classes are used to change the volume of a system\ni.e. during a VolumeMove\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope VolumeChanger_scope( VolumeChanger_exposer );
        { //::SireMove::VolumeChanger::changeVolume

            typedef int ( ::SireMove::VolumeChanger::*changeVolume_function_type)( ::SireSystem::System &,::SireUnits::Dimension::Volume const &,::SireBase::PropertyMap const & ) const;
            changeVolume_function_type changeVolume_function_value( &::SireMove::VolumeChanger::changeVolume );

            VolumeChanger_exposer.def(
                "changeVolume"
                , changeVolume_function_value
                , ( bp::arg("system"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , "Change the volume of the passed system system by delta, using\nthe optionally supplied property map to find the names of the\nnecessary properties\nThis returns the number of molecules which were involved in\nthe volume change\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::unsupported\nThrow: SireError::incompatible_error\n" );

        }
        { //::SireMove::VolumeChanger::generator

            typedef ::SireMaths::RanGenerator const & ( ::SireMove::VolumeChanger::*generator_function_type)(  ) const;
            generator_function_type generator_function_value( &::SireMove::VolumeChanger::generator );

            VolumeChanger_exposer.def(
                "generator"
                , generator_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the random number generator that may be used to generate\nnew volumes" );

        }
        { //::SireMove::VolumeChanger::groupID

            typedef ::SireMol::MGID const & ( ::SireMove::VolumeChanger::*groupID_function_type)(  ) const;
            groupID_function_type groupID_function_value( &::SireMove::VolumeChanger::groupID );

            VolumeChanger_exposer.def(
                "groupID"
                , groupID_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the ID of the molecule group(s) that will be affected\nby this volume changer" );

        }
        { //::SireMove::VolumeChanger::null

            typedef ::SireMove::NullVolumeChanger const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMove::VolumeChanger::null );

            VolumeChanger_exposer.def(
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the global null changer (which doesnt change anything)" );

        }
        { //::SireMove::VolumeChanger::randomChangeVolume

            typedef int ( ::SireMove::VolumeChanger::*randomChangeVolume_function_type)( ::SireSystem::System &,::SireUnits::Dimension::Volume const &,double &,double &,::SireBase::PropertyMap const & ) const;
            randomChangeVolume_function_type randomChangeVolume_function_value( &::SireMove::VolumeChanger::randomChangeVolume );

            VolumeChanger_exposer.def(
                "randomChangeVolume"
                , randomChangeVolume_function_value
                , ( bp::arg("system"), bp::arg("maxvolchange"), bp::arg("new_bias"), bp::arg("old_bias"), bp::arg("map")=SireBase::PropertyMap() )
                , "Change the volume of the passed system system by a random\namount between -maxvolchange and maxvolchange, using\nthe optionally supplied property map to find the names of the\nnecessary properties.\nIf this move is biased, then this sets old_bias to the\nbias before the move, and new_bias to the bias afterwards.\nThis returns the number of molecules which were involved in\nthe volume change\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::unsupported\nThrow: SireError::incompatible_error\n" );

        }
        { //::SireMove::VolumeChanger::setGenerator

            typedef void ( ::SireMove::VolumeChanger::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::VolumeChanger::setGenerator );

            VolumeChanger_exposer.def(
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("generator") )
                , bp::release_gil_policy()
                , "Set the random number generator that may be used to generate\nnew volumes" );

        }
        { //::SireMove::VolumeChanger::setGroup

            typedef void ( ::SireMove::VolumeChanger::*setGroup_function_type)( ::SireMol::MGID const & ) ;
            setGroup_function_type setGroup_function_value( &::SireMove::VolumeChanger::setGroup );

            VolumeChanger_exposer.def(
                "setGroup"
                , setGroup_function_value
                , ( bp::arg("mgid") )
                , bp::release_gil_policy()
                , "Set the ID of the molecule group(s) that will be affected by\nthis volume changer" );

        }
        { //::SireMove::VolumeChanger::setGroup

            typedef void ( ::SireMove::VolumeChanger::*setGroup_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setGroup_function_type setGroup_function_value( &::SireMove::VolumeChanger::setGroup );

            VolumeChanger_exposer.def(
                "setGroup"
                , setGroup_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "Set the molecule group that is affected by this volume changer\n- this will match the group based on its molecule group number" );

        }
        { //::SireMove::VolumeChanger::setVolume

            typedef int ( ::SireMove::VolumeChanger::*setVolume_function_type)( ::SireSystem::System &,::SireUnits::Dimension::Volume const &,::SireBase::PropertyMap const & ) const;
            setVolume_function_type setVolume_function_value( &::SireMove::VolumeChanger::setVolume );

            VolumeChanger_exposer.def(
                "setVolume"
                , setVolume_function_value
                , ( bp::arg("system"), bp::arg("volume"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );

        }
        { //::SireMove::VolumeChanger::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::VolumeChanger::typeName );

            VolumeChanger_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        VolumeChanger_exposer.staticmethod( "null" );
        VolumeChanger_exposer.staticmethod( "typeName" );
        VolumeChanger_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::VolumeChanger >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        VolumeChanger_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::VolumeChanger >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        VolumeChanger_exposer.def_pickle(sire_pickle_suite< ::SireMove::VolumeChanger >());
        VolumeChanger_exposer.def( "__str__", &__str__< ::SireMove::VolumeChanger > );
        VolumeChanger_exposer.def( "__repr__", &__str__< ::SireMove::VolumeChanger > );
    }

}
