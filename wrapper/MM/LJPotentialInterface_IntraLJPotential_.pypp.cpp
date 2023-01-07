// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "LJPotentialInterface_IntraLJPotential_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intraljff.h"

#include "intraljff.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::LJPotentialInterface<SireMM::IntraLJPotential>&){ return "SireMM::LJPotentialInterface<SireMM::IntraLJPotential>";}

#include "Helpers/release_gil_policy.hpp"

void register_LJPotentialInterface_IntraLJPotential__class(){

    { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >
        typedef bp::class_< SireMM::LJPotentialInterface< SireMM::IntraLJPotential >, boost::noncopyable > LJPotentialInterface_IntraLJPotential__exposer_t;
        LJPotentialInterface_IntraLJPotential__exposer_t LJPotentialInterface_IntraLJPotential__exposer = LJPotentialInterface_IntraLJPotential__exposer_t( "LJPotentialInterface_IntraLJPotential_", "", bp::no_init );
        bp::scope LJPotentialInterface_IntraLJPotential__scope( LJPotentialInterface_IntraLJPotential__exposer );
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::combiningRules

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::QString const & ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::combiningRules );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "combiningRules"
                , combiningRules_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::containsProperty

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::containsProperty );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::parameters

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::SireMM::IntraLJPotential::ParameterNames ( *parameters_function_type )(  );
            parameters_function_type parameters_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::parameters );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "parameters"
                , parameters_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::properties

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::properties );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::property

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::property );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setCombiningRules

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*setCombiningRules_function_type)( ::QString const & ) ;
            setCombiningRules_function_type setCombiningRules_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setCombiningRules );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "setCombiningRules"
                , setCombiningRules_function_value
                , ( bp::arg("combiningrules") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setProperty

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setProperty );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setSpace

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setSpace );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("new_space") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setSwitchingFunction

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*setSwitchingFunction_function_type)( ::SireMM::SwitchingFunction const & ) ;
            setSwitchingFunction_function_type setSwitchingFunction_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::setSwitchingFunction );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "setSwitchingFunction"
                , setSwitchingFunction_function_value
                , ( bp::arg("new_switchfunc") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::space

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::SireVol::Space const & ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::space );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::switchingFunction

            typedef SireMM::LJPotentialInterface< SireMM::IntraLJPotential > exported_class_t;
            typedef ::SireMM::SwitchingFunction const & ( ::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::*switchingFunction_function_type)(  ) const;
            switchingFunction_function_type switchingFunction_function_value( &::SireMM::LJPotentialInterface< SireMM::IntraLJPotential >::switchingFunction );

            LJPotentialInterface_IntraLJPotential__exposer.def(
                "switchingFunction"
                , switchingFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        LJPotentialInterface_IntraLJPotential__exposer.staticmethod( "parameters" );
        LJPotentialInterface_IntraLJPotential__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJPotentialInterface<SireMM::IntraLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJPotentialInterface_IntraLJPotential__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJPotentialInterface<SireMM::IntraLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJPotentialInterface_IntraLJPotential__exposer.def_pickle(sire_pickle_suite< ::SireMM::LJPotentialInterface<SireMM::IntraLJPotential> >());
        LJPotentialInterface_IntraLJPotential__exposer.def( "__str__", &pvt_get_name);
        LJPotentialInterface_IntraLJPotential__exposer.def( "__repr__", &pvt_get_name);
    }

}
