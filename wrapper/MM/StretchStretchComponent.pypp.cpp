// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "StretchStretchComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/ff.h"

#include "SireStream/datastream.h"

#include "internalcomponent.h"

#include "internalcomponent.h"

SireMM::StretchStretchComponent __copy__(const SireMM::StretchStretchComponent &other){ return SireMM::StretchStretchComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_StretchStretchComponent_class(){

    { //::SireMM::StretchStretchComponent
        typedef bp::class_< SireMM::StretchStretchComponent, bp::bases< SireFF::FFComponent, SireCAS::Symbol, SireCAS::ExBase > > StretchStretchComponent_exposer_t;
        StretchStretchComponent_exposer_t StretchStretchComponent_exposer = StretchStretchComponent_exposer_t( "StretchStretchComponent", "This class represents a StretchStretch component of a forcefield", bp::init< bp::optional< SireFF::FFName const & > >(( bp::arg("ffname")=SireFF::FFName() ), "Constructor") );
        bp::scope StretchStretchComponent_scope( StretchStretchComponent_exposer );
        StretchStretchComponent_exposer.def( bp::init< SireCAS::Symbol const & >(( bp::arg("symbol") ), "Construct from a symbol\nThrow: SireError::incompatible_error\n") );
        StretchStretchComponent_exposer.def( bp::init< SireMM::StretchStretchComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::StretchStretchComponent::changeEnergy
        
            typedef void ( ::SireMM::StretchStretchComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::StretchStretchEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::StretchStretchComponent::changeEnergy );
            
            StretchStretchComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("ssnrg") )
                , bp::release_gil_policy()
                , "Change the component of the energy in the forcefield ff\nby delta" );
        
        }
        { //::SireMM::StretchStretchComponent::setEnergy
        
            typedef void ( ::SireMM::StretchStretchComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::StretchStretchEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::StretchStretchComponent::setEnergy );
            
            StretchStretchComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("ssnrg") )
                , bp::release_gil_policy()
                , "Set the component of the energy in the forcefield ff\nto be equal to the passed energy" );
        
        }
        { //::SireMM::StretchStretchComponent::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::StretchStretchComponent::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::StretchStretchComponent::symbols );
            
            StretchStretchComponent_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::StretchStretchComponent::total
        
            typedef ::SireMM::StretchStretchComponent const & ( ::SireMM::StretchStretchComponent::*total_function_type)(  ) const;
            total_function_type total_function_value( &::SireMM::StretchStretchComponent::total );
            
            StretchStretchComponent_exposer.def( 
                "total"
                , total_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::StretchStretchComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::StretchStretchComponent::typeName );
            
            StretchStretchComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::StretchStretchComponent::what
        
            typedef char const * ( ::SireMM::StretchStretchComponent::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::StretchStretchComponent::what );
            
            StretchStretchComponent_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        StretchStretchComponent_exposer.staticmethod( "typeName" );
        StretchStretchComponent_exposer.def( "__copy__", &__copy__);
        StretchStretchComponent_exposer.def( "__deepcopy__", &__copy__);
        StretchStretchComponent_exposer.def( "clone", &__copy__);
        StretchStretchComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::StretchStretchComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StretchStretchComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::StretchStretchComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StretchStretchComponent_exposer.def_pickle(sire_pickle_suite< ::SireMM::StretchStretchComponent >());
        StretchStretchComponent_exposer.def( "__str__", &__str__< ::SireMM::StretchStretchComponent > );
        StretchStretchComponent_exposer.def( "__repr__", &__str__< ::SireMM::StretchStretchComponent > );
        StretchStretchComponent_exposer.def( "__hash__", &::SireMM::StretchStretchComponent::hash );
    }

}
