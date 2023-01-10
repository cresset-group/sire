// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "SoftCLJComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/quickcopy.hpp"

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "softcljcomponent.h"

#include "softcljcomponent.h"

SireMM::SoftCLJComponent __copy__(const SireMM::SoftCLJComponent &other){ return SireMM::SoftCLJComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_SoftCLJComponent_class(){

    { //::SireMM::SoftCLJComponent
        typedef bp::class_< SireMM::SoftCLJComponent, bp::bases< SireMM::CLJComponent, SireFF::FFComponent, SireCAS::Symbol, SireCAS::ExBase > > SoftCLJComponent_exposer_t;
        SoftCLJComponent_exposer_t SoftCLJComponent_exposer = SoftCLJComponent_exposer_t( "SoftCLJComponent", "This represents the sum of the coulomb and LJ components\nfor a soft-core forcefield, in which multiple soft-core\nalpha values are used (and so multiple coulomb and LJ\ncomponents are available). This combined component gives\naccess to each of the individual components, and also\nto the sum of them all\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a null set of SoftCLJComponents") );
        bp::scope SoftCLJComponent_scope( SoftCLJComponent_exposer );
        SoftCLJComponent_exposer.def( bp::init< SireFF::FFName const & >(( bp::arg("name") ), "Construct the SoftCLJComponents for the passed name") );
        SoftCLJComponent_exposer.def( bp::init< SireCAS::Symbol const & >(( bp::arg("symbol") ), "Construct the SoftCLJComponents from the passed symbol") );
        SoftCLJComponent_exposer.def( bp::init< SireMM::SoftCLJComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::SoftCLJComponent::changeEnergy
        
            typedef void ( ::SireMM::SoftCLJComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::CLJEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::SoftCLJComponent::changeEnergy );
            
            SoftCLJComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("delta") )
                , bp::release_gil_policy()
                , "Change the energy in the forcefield ff of all of these components by the\nvalues held in delta" );
        
        }
        { //::SireMM::SoftCLJComponent::changeEnergy
        
            typedef void ( ::SireMM::SoftCLJComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::SoftCLJEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::SoftCLJComponent::changeEnergy );
            
            SoftCLJComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("delta") )
                , bp::release_gil_policy()
                , "Change the energy in the forcefield ff of all of these components by the\nvalues held in delta" );
        
        }
        { //::SireMM::SoftCLJComponent::coulomb
        
            typedef ::SireMM::CoulombComponent const & ( ::SireMM::SoftCLJComponent::*coulomb_function_type)(  ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::SoftCLJComponent::coulomb );
            
            SoftCLJComponent_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the total coulomb energy\nof all of the alpha values" );
        
        }
        { //::SireMM::SoftCLJComponent::coulomb
        
            typedef ::SireMM::CoulombComponent const & ( ::SireMM::SoftCLJComponent::*coulomb_function_type)( int ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::SoftCLJComponent::coulomb );
            
            SoftCLJComponent_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the coulomb energy of\nthe ith alpha component\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::SoftCLJComponent::lj
        
            typedef ::SireMM::LJComponent const & ( ::SireMM::SoftCLJComponent::*lj_function_type)(  ) const;
            lj_function_type lj_function_value( &::SireMM::SoftCLJComponent::lj );
            
            SoftCLJComponent_exposer.def( 
                "lj"
                , lj_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the total LJ energy\nof all of the alpha values" );
        
        }
        { //::SireMM::SoftCLJComponent::lj
        
            typedef ::SireMM::LJComponent const & ( ::SireMM::SoftCLJComponent::*lj_function_type)( int ) const;
            lj_function_type lj_function_value( &::SireMM::SoftCLJComponent::lj );
            
            SoftCLJComponent_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the LJ energy of\nthe ith alpha component\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::SoftCLJComponent::nAlphaValues
        
            typedef int ( *nAlphaValues_function_type )(  );
            nAlphaValues_function_type nAlphaValues_function_value( &::SireMM::SoftCLJComponent::nAlphaValues );
            
            SoftCLJComponent_exposer.def( 
                "nAlphaValues"
                , nAlphaValues_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SoftCLJComponent::operator=
        
            typedef ::SireMM::SoftCLJComponent & ( ::SireMM::SoftCLJComponent::*assign_function_type)( ::SireMM::SoftCLJComponent const & ) ;
            assign_function_type assign_function_value( &::SireMM::SoftCLJComponent::operator= );
            
            SoftCLJComponent_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMM::SoftCLJComponent::setEnergy
        
            typedef void ( ::SireMM::SoftCLJComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::CLJEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::SoftCLJComponent::setEnergy );
            
            SoftCLJComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("value") )
                , bp::release_gil_policy()
                , "Set the energy in the forcefield ff of all of these components to the\nvalues held in value" );
        
        }
        { //::SireMM::SoftCLJComponent::setEnergy
        
            typedef void ( ::SireMM::SoftCLJComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::SoftCLJEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::SoftCLJComponent::setEnergy );
            
            SoftCLJComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("value") )
                , bp::release_gil_policy()
                , "Set the energy in the forcefield ff of all of these components to the\nvalues held in value" );
        
        }
        { //::SireMM::SoftCLJComponent::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::SoftCLJComponent::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::SoftCLJComponent::symbols );
            
            SoftCLJComponent_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::release_gil_policy()
                , "Return all of the symbols associated with these components" );
        
        }
        { //::SireMM::SoftCLJComponent::total
        
            typedef ::SireMM::CLJComponent const & ( ::SireMM::SoftCLJComponent::*total_function_type)(  ) const;
            total_function_type total_function_value( &::SireMM::SoftCLJComponent::total );
            
            SoftCLJComponent_exposer.def( 
                "total"
                , total_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the total energy of\nall of the alpha values" );
        
        }
        { //::SireMM::SoftCLJComponent::total
        
            typedef ::SireMM::CLJComponent const & ( ::SireMM::SoftCLJComponent::*total_function_type)( int ) const;
            total_function_type total_function_value( &::SireMM::SoftCLJComponent::total );
            
            SoftCLJComponent_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the component representing the total energy of\nthe ith alpha component\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMM::SoftCLJComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::SoftCLJComponent::typeName );
            
            SoftCLJComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SoftCLJComponent::what
        
            typedef char const * ( ::SireMM::SoftCLJComponent::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::SoftCLJComponent::what );
            
            SoftCLJComponent_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        SoftCLJComponent_exposer.staticmethod( "nAlphaValues" );
        SoftCLJComponent_exposer.staticmethod( "typeName" );
        SoftCLJComponent_exposer.def( "__copy__", &__copy__);
        SoftCLJComponent_exposer.def( "__deepcopy__", &__copy__);
        SoftCLJComponent_exposer.def( "clone", &__copy__);
        SoftCLJComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::SoftCLJComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SoftCLJComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::SoftCLJComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SoftCLJComponent_exposer.def_pickle(sire_pickle_suite< ::SireMM::SoftCLJComponent >());
        SoftCLJComponent_exposer.def( "__str__", &__str__< ::SireMM::SoftCLJComponent > );
        SoftCLJComponent_exposer.def( "__repr__", &__str__< ::SireMM::SoftCLJComponent > );
        SoftCLJComponent_exposer.def( "__hash__", &::SireMM::SoftCLJComponent::hash );
    }

}
