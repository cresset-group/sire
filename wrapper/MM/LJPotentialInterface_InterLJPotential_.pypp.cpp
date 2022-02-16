// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "LJPotentialInterface_InterLJPotential_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "interljff.h"

#include "interljff.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::LJPotentialInterface<SireMM::InterLJPotential>&){ return "SireMM::LJPotentialInterface<SireMM::InterLJPotential>";}

void register_LJPotentialInterface_InterLJPotential__class(){

    { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >
        typedef bp::class_< SireMM::LJPotentialInterface< SireMM::InterLJPotential >, boost::noncopyable > LJPotentialInterface_InterLJPotential__exposer_t;
        LJPotentialInterface_InterLJPotential__exposer_t LJPotentialInterface_InterLJPotential__exposer = LJPotentialInterface_InterLJPotential__exposer_t( "LJPotentialInterface_InterLJPotential_", "", bp::no_init );
        bp::scope LJPotentialInterface_InterLJPotential__scope( LJPotentialInterface_InterLJPotential__exposer );
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::combiningRules
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::QString const & ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::combiningRules );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "combiningRules"
                , combiningRules_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::containsProperty
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::containsProperty );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::parameters
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::SireMM::InterLJPotential::ParameterNames ( *parameters_function_type )(  );
            parameters_function_type parameters_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::parameters );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "parameters"
                , parameters_function_value
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::properties
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::properties );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::property
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::property );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setCombiningRules
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*setCombiningRules_function_type)( ::QString const & ) ;
            setCombiningRules_function_type setCombiningRules_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setCombiningRules );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "setCombiningRules"
                , setCombiningRules_function_value
                , ( bp::arg("combiningrules") )
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setProperty
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setProperty );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") )
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setSpace
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setSpace );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("new_space") )
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setSwitchingFunction
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef bool ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*setSwitchingFunction_function_type)( ::SireMM::SwitchingFunction const & ) ;
            setSwitchingFunction_function_type setSwitchingFunction_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::setSwitchingFunction );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "setSwitchingFunction"
                , setSwitchingFunction_function_value
                , ( bp::arg("new_switchfunc") )
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::space
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::SireVol::Space const & ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::space );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::switchingFunction
        
            typedef SireMM::LJPotentialInterface< SireMM::InterLJPotential > exported_class_t;
            typedef ::SireMM::SwitchingFunction const & ( ::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::*switchingFunction_function_type)(  ) const;
            switchingFunction_function_type switchingFunction_function_value( &::SireMM::LJPotentialInterface< SireMM::InterLJPotential >::switchingFunction );
            
            LJPotentialInterface_InterLJPotential__exposer.def( 
                "switchingFunction"
                , switchingFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        LJPotentialInterface_InterLJPotential__exposer.staticmethod( "parameters" );
        LJPotentialInterface_InterLJPotential__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJPotentialInterface<SireMM::InterLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJPotentialInterface_InterLJPotential__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJPotentialInterface<SireMM::InterLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJPotentialInterface_InterLJPotential__exposer.def_pickle(sire_pickle_suite< ::SireMM::LJPotentialInterface<SireMM::InterLJPotential> >());
        LJPotentialInterface_InterLJPotential__exposer.def( "__str__", &pvt_get_name);
        LJPotentialInterface_InterLJPotential__exposer.def( "__repr__", &pvt_get_name);
    }

}
