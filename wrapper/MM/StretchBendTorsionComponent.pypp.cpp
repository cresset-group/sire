// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "StretchBendTorsionComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/ff.h"

#include "SireStream/datastream.h"

#include "internalcomponent.h"

#include "internalcomponent.h"

SireMM::StretchBendTorsionComponent __copy__(const SireMM::StretchBendTorsionComponent &other){ return SireMM::StretchBendTorsionComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_StretchBendTorsionComponent_class(){

    { //::SireMM::StretchBendTorsionComponent
        typedef bp::class_< SireMM::StretchBendTorsionComponent, bp::bases< SireFF::FFComponent, SireCAS::Symbol, SireCAS::ExBase > > StretchBendTorsionComponent_exposer_t;
        StretchBendTorsionComponent_exposer_t StretchBendTorsionComponent_exposer = StretchBendTorsionComponent_exposer_t( "StretchBendTorsionComponent", "This class represents a StretchBendTorsion component of a forcefield", bp::init< bp::optional< SireFF::FFName const & > >(( bp::arg("ffname")=SireFF::FFName() ), "Constructor") );
        bp::scope StretchBendTorsionComponent_scope( StretchBendTorsionComponent_exposer );
        StretchBendTorsionComponent_exposer.def( bp::init< SireCAS::Symbol const & >(( bp::arg("symbol") ), "Construct from a symbol\nThrow: SireError::incompatible_error\n") );
        StretchBendTorsionComponent_exposer.def( bp::init< SireMM::StretchBendTorsionComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::StretchBendTorsionComponent::changeEnergy
        
            typedef void ( ::SireMM::StretchBendTorsionComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::StretchBendTorsionEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::StretchBendTorsionComponent::changeEnergy );
            
            StretchBendTorsionComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("sbtnrg") )
                , bp::release_gil_policy()
                , "Change the component of the energy in the forcefield ff\nby delta" );
        
        }
        { //::SireMM::StretchBendTorsionComponent::setEnergy
        
            typedef void ( ::SireMM::StretchBendTorsionComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::StretchBendTorsionEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::StretchBendTorsionComponent::setEnergy );
            
            StretchBendTorsionComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("sbtnrg") )
                , bp::release_gil_policy()
                , "Set the component of the energy in the forcefield ff\nto be equal to the passed energy" );
        
        }
        { //::SireMM::StretchBendTorsionComponent::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::StretchBendTorsionComponent::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::StretchBendTorsionComponent::symbols );
            
            StretchBendTorsionComponent_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::StretchBendTorsionComponent::total
        
            typedef ::SireMM::StretchBendTorsionComponent const & ( ::SireMM::StretchBendTorsionComponent::*total_function_type)(  ) const;
            total_function_type total_function_value( &::SireMM::StretchBendTorsionComponent::total );
            
            StretchBendTorsionComponent_exposer.def( 
                "total"
                , total_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::StretchBendTorsionComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::StretchBendTorsionComponent::typeName );
            
            StretchBendTorsionComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::StretchBendTorsionComponent::what
        
            typedef char const * ( ::SireMM::StretchBendTorsionComponent::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::StretchBendTorsionComponent::what );
            
            StretchBendTorsionComponent_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        StretchBendTorsionComponent_exposer.staticmethod( "typeName" );
        StretchBendTorsionComponent_exposer.def( "__copy__", &__copy__);
        StretchBendTorsionComponent_exposer.def( "__deepcopy__", &__copy__);
        StretchBendTorsionComponent_exposer.def( "clone", &__copy__);
        StretchBendTorsionComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::StretchBendTorsionComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StretchBendTorsionComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::StretchBendTorsionComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StretchBendTorsionComponent_exposer.def_pickle(sire_pickle_suite< ::SireMM::StretchBendTorsionComponent >());
        StretchBendTorsionComponent_exposer.def( "__str__", &__str__< ::SireMM::StretchBendTorsionComponent > );
        StretchBendTorsionComponent_exposer.def( "__repr__", &__str__< ::SireMM::StretchBendTorsionComponent > );
        StretchBendTorsionComponent_exposer.def( "__hash__", &::SireMM::StretchBendTorsionComponent::hash );
    }

}
