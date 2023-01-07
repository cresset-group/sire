// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ChainProp.pypp.hpp"

namespace bp = boost::python;

#include "chainproperty.hpp"

#include "chainproperty.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ChainProp_class(){

    { //::SireMol::ChainProp
        typedef bp::class_< SireMol::ChainProp, bp::bases< SireMol::MolViewProperty, SireBase::Property >, boost::noncopyable > ChainProp_exposer_t;
        ChainProp_exposer_t ChainProp_exposer = ChainProp_exposer_t( "ChainProp", "Small class used to provide a common base for all ChainProperty types", bp::no_init );
        bp::scope ChainProp_scope( ChainProp_exposer );
        { //::SireMol::ChainProp::assertCanConvert

            typedef void ( ::SireMol::ChainProp::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::ChainProp::assertCanConvert );

            ChainProp_exposer.def(
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ChainProp::assignFrom

            typedef void ( ::SireMol::ChainProp::*assignFrom_function_type)( ::SireMol::ChainProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::ChainProp::assignFrom );

            ChainProp_exposer.def(
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ChainProp::canConvert

            typedef bool ( ::SireMol::ChainProp::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::ChainProp::canConvert );

            ChainProp_exposer.def(
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ChainProp::getAsProperty

            typedef ::SireBase::PropertyPtr ( ::SireMol::ChainProp::*getAsProperty_function_type)( ::SireMol::ChainIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::ChainProp::getAsProperty );

            ChainProp_exposer.def(
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("chainidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ChainProp::getAsVariant

            typedef ::QVariant ( ::SireMol::ChainProp::*getAsVariant_function_type)( ::SireMol::ChainIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::ChainProp::getAsVariant );

            ChainProp_exposer.def(
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("chainidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ChainProp::toVariant

            typedef ::SireMol::ChainProperty< QVariant > ( ::SireMol::ChainProp::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::ChainProp::toVariant );

            ChainProp_exposer.def(
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ChainProp_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ChainProp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChainProp_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ChainProp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChainProp_exposer.def_pickle(sire_pickle_suite< ::SireMol::ChainProp >());
        ChainProp_exposer.def( "__str__", &__str__< ::SireMol::ChainProp > );
        ChainProp_exposer.def( "__repr__", &__str__< ::SireMol::ChainProp > );
    }

}
