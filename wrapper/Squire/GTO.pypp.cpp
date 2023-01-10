// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "GTO.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "gto.h"

#include "sgto.h"

#include "gto.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_GTO_class(){

    { //::Squire::GTO
        typedef bp::class_< Squire::GTO, bp::bases< Squire::OrbitalShell, Squire::Orbital, SireBase::Property >, boost::noncopyable > GTO_exposer_t;
        GTO_exposer_t GTO_exposer = GTO_exposer_t( "GTO", "This is the base class of all single Gaussian Type Orbital shells (GTOs)\n(S_GTO (l==0), P_GTO (l==1), D_GTO (l==2), FPlus_GTO (l>=3))\n\nThese orbitals are not used directly - rather they are combined into\nshell-pair orbitals, e.g. SS_GTO, SP_GTO etc. Integral functions then\nuse these shell-pair orbital objects. The shell pair classes are;\n\nSS_GTO\nPP_GTO, PS_GTO\nDD_GTO, DP_GTO, DS_GTO\nFPlusFPlus_GTO, FPlusD_GTO, FPlusP_GTO, FPlusS_GTO\n\nAn orbital shell contains all of the orbitals for a particular shell\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope GTO_scope( GTO_exposer );
        { //::Squire::GTO::alpha
        
            typedef double ( ::Squire::GTO::*alpha_function_type)(  ) const;
            alpha_function_type alpha_function_value( &::Squire::GTO::alpha );
            
            GTO_exposer.def( 
                "alpha"
                , alpha_function_value
                , bp::release_gil_policy()
                , "Return the value of alpha (the exponent) for this gaussian" );
        
        }
        { //::Squire::GTO::beta
        
            typedef double ( ::Squire::GTO::*beta_function_type)(  ) const;
            beta_function_type beta_function_value( &::Squire::GTO::beta );
            
            GTO_exposer.def( 
                "beta"
                , beta_function_value
                , bp::release_gil_policy()
                , "Convenient synonym for alpha() - so you can write\na.alpha()  b.beta() and have it mean what you expect" );
        
        }
        { //::Squire::GTO::isNull
        
            typedef bool ( ::Squire::GTO::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::Squire::GTO::isNull );
            
            GTO_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Return whether or not this orbital shell is null - it is null\nif the scale or exponent are 0" );
        
        }
        { //::Squire::GTO::multiply
        
            typedef ::Squire::GTOPtr ( ::Squire::GTO::*multiply_function_type)( double ) const;
            multiply_function_type multiply_function_value( &::Squire::GTO::multiply );
            
            GTO_exposer.def( 
                "multiply"
                , multiply_function_value
                , ( bp::arg("coefficient") )
                , bp::release_gil_policy()
                , "Return this orbital shell multiplied by coefficient" );
        
        }
        { //::Squire::GTO::null
        
            typedef ::Squire::GTO const & ( *null_function_type )(  );
            null_function_type null_function_value( &::Squire::GTO::null );
            
            GTO_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::Squire::GTO::scale
        
            typedef double ( ::Squire::GTO::*scale_function_type)(  ) const;
            scale_function_type scale_function_value( &::Squire::GTO::scale );
            
            GTO_exposer.def( 
                "scale"
                , scale_function_value
                , bp::release_gil_policy()
                , "Return the unnormalised scaling factor for this gaussian" );
        
        }
        { //::Squire::GTO::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::GTO::typeName );
            
            GTO_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        GTO_exposer.staticmethod( "null" );
        GTO_exposer.staticmethod( "typeName" );
        GTO_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::GTO >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GTO_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::GTO >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GTO_exposer.def_pickle(sire_pickle_suite< ::Squire::GTO >());
        GTO_exposer.def( "__str__", &__str__< ::Squire::GTO > );
        GTO_exposer.def( "__repr__", &__str__< ::Squire::GTO > );
    }

}
