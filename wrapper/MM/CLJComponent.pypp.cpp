// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CLJComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "cljcomponent.h"

#include "cljcomponent.h"

SireMM::CLJComponent __copy__(const SireMM::CLJComponent &other){ return SireMM::CLJComponent(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CLJComponent_class(){

    { //::SireMM::CLJComponent
        typedef bp::class_< SireMM::CLJComponent, bp::bases< SireFF::FFComponent, SireCAS::Symbol, SireCAS::ExBase > > CLJComponent_exposer_t;
        CLJComponent_exposer_t CLJComponent_exposer = CLJComponent_exposer_t( "CLJComponent", "This class represents the sum of the coulomb and LJ components\nof the forcefield", bp::init< bp::optional< SireFF::FFName const & > >(( bp::arg("name")=SireFF::FFName() ), "Constructor") );
        bp::scope CLJComponent_scope( CLJComponent_exposer );
        CLJComponent_exposer.def( bp::init< SireFF::FFName const &, QString const & >(( bp::arg("name"), bp::arg("suffix") ), "Construct from the passed forcefield name and suffix") );
        CLJComponent_exposer.def( bp::init< SireCAS::Symbol const & >(( bp::arg("symbol") ), "Construct from a symbol\nThrow: SireError::incompatible_error\n") );
        CLJComponent_exposer.def( bp::init< SireMM::CLJComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJComponent::changeEnergy
        
            typedef void ( ::SireMM::CLJComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::CLJEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::CLJComponent::changeEnergy );
            
            CLJComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("cljnrg") )
                , bp::release_gil_policy()
                , "Change the CLJ components of the forcefield ff by delta" );
        
        }
        { //::SireMM::CLJComponent::coulomb
        
            typedef ::SireMM::CoulombComponent const & ( ::SireMM::CLJComponent::*coulomb_function_type)(  ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJComponent::coulomb );
            
            CLJComponent_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::CLJComponent::lj
        
            typedef ::SireMM::LJComponent const & ( ::SireMM::CLJComponent::*lj_function_type)(  ) const;
            lj_function_type lj_function_value( &::SireMM::CLJComponent::lj );
            
            CLJComponent_exposer.def( 
                "lj"
                , lj_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::CLJComponent::setEnergy
        
            typedef void ( ::SireMM::CLJComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::CLJEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::CLJComponent::setEnergy );
            
            CLJComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("cljnrg") )
                , bp::release_gil_policy()
                , "Set the CLJ components of the forcefield ff to the passed values" );
        
        }
        { //::SireMM::CLJComponent::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::CLJComponent::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::CLJComponent::symbols );
            
            CLJComponent_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJComponent::total
        
            typedef ::SireMM::CLJComponent const & ( ::SireMM::CLJComponent::*total_function_type)(  ) const;
            total_function_type total_function_value( &::SireMM::CLJComponent::total );
            
            CLJComponent_exposer.def( 
                "total"
                , total_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::CLJComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJComponent::typeName );
            
            CLJComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJComponent::what
        
            typedef char const * ( ::SireMM::CLJComponent::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJComponent::what );
            
            CLJComponent_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CLJComponent_exposer.staticmethod( "typeName" );
        CLJComponent_exposer.def( "__copy__", &__copy__<SireMM::CLJComponent>);
        CLJComponent_exposer.def( "__deepcopy__", &__copy__<SireMM::CLJComponent>);
        CLJComponent_exposer.def( "clone", &__copy__<SireMM::CLJComponent>);
        CLJComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJComponent_exposer.def_pickle(sire_pickle_suite< ::SireMM::CLJComponent >());
        CLJComponent_exposer.def( "__str__", &__str__< ::SireMM::CLJComponent > );
        CLJComponent_exposer.def( "__repr__", &__str__< ::SireMM::CLJComponent > );
        CLJComponent_exposer.def( "__hash__", &::SireMM::CLJComponent::hash );
    }

}
