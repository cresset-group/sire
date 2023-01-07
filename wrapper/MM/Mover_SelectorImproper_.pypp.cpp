// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Mover_SelectorImproper_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/slice.h"

#include "SireCAS/symbol.h"

#include "SireCAS/values.h"

#include "SireID/index.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "fouratomfunctions.h"

#include "selectorimproper.h"

#include <QDebug>

#include "selectorimproper.h"

#include "SireMaths/align.h"

#include "SireMaths/axisset.h"

#include "SireMaths/matrix.h"

#include "SireMaths/quaternion.h"

#include "SireMaths/rotate.h"

#include "SireMaths/vectorproperty.h"

#include "SireMol/errors.h"

#include "SireUnits/units.h"

#include "SireVol/coordgroup.h"

#include "SireVol/space.h"

#include "angleid.h"

#include "atomcoords.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "bondid.h"

#include "connectivity.h"

#include "dihedralid.h"

#include "improperid.h"

#include "mover.h"

#include "tostring.h"

#include "weightfunction.h"

#include "mover.h"

SireMol::Mover<SireMM::SelectorImproper> __copy__(const SireMol::Mover<SireMM::SelectorImproper> &other){ return SireMol::Mover<SireMM::SelectorImproper>(other); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Mover_SelectorImproper__class(){

    { //::SireMol::Mover< SireMM::SelectorImproper >
        typedef bp::class_< SireMol::Mover< SireMM::SelectorImproper >, bp::bases< SireMol::MoverBase, SireMM::SelectorImproper, SireMol::MoleculeView, SireBase::Property > > Mover_SelectorImproper__exposer_t;
        Mover_SelectorImproper__exposer_t Mover_SelectorImproper__exposer = Mover_SelectorImproper__exposer_t( "Mover_SelectorImproper_", "", bp::init< >("") );
        bp::scope Mover_SelectorImproper__scope( Mover_SelectorImproper__exposer );
        Mover_SelectorImproper__exposer.def( bp::init< SireMM::SelectorImproper const & >(( bp::arg("view") ), "") );
        Mover_SelectorImproper__exposer.def( bp::init< SireMM::SelectorImproper const &, SireMol::AtomSelection const & >(( bp::arg("view"), bp::arg("movable_atoms") ), "") );
        Mover_SelectorImproper__exposer.def( bp::init< SireMol::Mover< SireMM::SelectorImproper > const & >(( bp::arg("other") ), "") );
        { //::SireMol::Mover< SireMM::SelectorImproper >::align

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::align );

            Mover_SelectorImproper__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::align

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::align );

            Mover_SelectorImproper__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::align

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::align );

            Mover_SelectorImproper__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::align

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::align );

            Mover_SelectorImproper__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::change

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::change );

            Mover_SelectorImproper__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::change

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*change_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::change );

            Mover_SelectorImproper__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("angle"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::change

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*change_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::change );

            Mover_SelectorImproper__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("dihedral"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::change

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::change );

            Mover_SelectorImproper__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::change

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*change_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::change );

            Mover_SelectorImproper__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("improper"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::changeFrame

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::changeFrame );

            Mover_SelectorImproper__exposer.def(
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::commit

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMM::SelectorImproper ( ::SireMol::Mover< SireMM::SelectorImproper >::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::commit );

            Mover_SelectorImproper__exposer.def(
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::mapInto

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*mapInto_function_type)( ::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::mapInto );

            Mover_SelectorImproper__exposer.def(
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::operator=

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*assign_function_type)( ::SireMol::Mover< SireMM::SelectorImproper > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::operator= );

            Mover_SelectorImproper__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::operator=

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*assign_function_type)( ::SireMM::SelectorImproper const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::operator= );

            Mover_SelectorImproper__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::rotate

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::rotate );

            Mover_SelectorImproper__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::rotate

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::rotate );

            Mover_SelectorImproper__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::set

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*set_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::set );

            Mover_SelectorImproper__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("bond"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::set

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*set_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::set );

            Mover_SelectorImproper__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("angle"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::set

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*set_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::set );

            Mover_SelectorImproper__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::set

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*set_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::set );

            Mover_SelectorImproper__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("improper"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::setAll

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*setAll_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            setAll_function_type setAll_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::setAll );

            Mover_SelectorImproper__exposer.def(
                "setAll"
                , setAll_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::toString

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::QString ( ::SireMol::Mover< SireMM::SelectorImproper >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::toString );

            Mover_SelectorImproper__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::transform

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*transform_function_type)( ::SireMaths::Transform const &,::SireBase::PropertyMap const & ) ;
            transform_function_type transform_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::transform );

            Mover_SelectorImproper__exposer.def(
                "transform"
                , transform_function_value
                , ( bp::arg("transform"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::translate

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef ::SireMol::Mover< SireMM::SelectorImproper > & ( ::SireMol::Mover< SireMM::SelectorImproper >::*translate_function_type)( ::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            translate_function_type translate_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::translate );

            Mover_SelectorImproper__exposer.def(
                "translate"
                , translate_function_value
                , ( bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMM::SelectorImproper >::typeName

            typedef SireMol::Mover< SireMM::SelectorImproper > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Mover< SireMM::SelectorImproper >::typeName );

            Mover_SelectorImproper__exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Mover_SelectorImproper__exposer.staticmethod( "typeName" );
        Mover_SelectorImproper__exposer.def( "__copy__", &__copy__);
        Mover_SelectorImproper__exposer.def( "__deepcopy__", &__copy__);
        Mover_SelectorImproper__exposer.def( "clone", &__copy__);
        Mover_SelectorImproper__exposer.def( "__str__", &__str__< ::SireMol::Mover<SireMM::SelectorImproper> > );
        Mover_SelectorImproper__exposer.def( "__repr__", &__str__< ::SireMol::Mover<SireMM::SelectorImproper> > );
        Mover_SelectorImproper__exposer.def( "__len__", &__len_size< ::SireMol::Mover<SireMM::SelectorImproper> > );
    }

}
