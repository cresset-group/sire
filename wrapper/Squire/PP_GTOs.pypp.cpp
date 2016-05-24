// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PP_GTOs.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/array2d.hpp"

#include "SireError/errors.h"

#include "SireMaths/boys.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "pgto.h"

#include "pointcharge.h"

#include "pointdipole.h"

#include "pgto.h"

Squire::PP_GTOs __copy__(const Squire::PP_GTOs &other){ return Squire::PP_GTOs(other); }

const char* pvt_get_name(const Squire::PP_GTOs&){ return "Squire::PP_GTOs";}

void register_PP_GTOs_class(){

    { //::Squire::PP_GTOs
        typedef bp::class_< Squire::PP_GTOs > PP_GTOs_exposer_t;
        PP_GTOs_exposer_t PP_GTOs_exposer = PP_GTOs_exposer_t( "PP_GTOs", "This class is used to calculate integrals involving PP orbital pairs", bp::init< >("Constructor") );
        bp::scope PP_GTOs_scope( PP_GTOs_exposer );
        PP_GTOs_exposer.def( bp::init< QVector< Squire::P_GTO > const &, QVector< SireMaths::Vector > const & >(( bp::arg("p_gtos"), bp::arg("p_centers") ), "Construct for the set of p orbitals p_gtos located at centers\np_centers") );
        PP_GTOs_exposer.def( bp::init< Squire::PP_GTOs const & >(( bp::arg("other") ), "Copy constructor") );
        { //::Squire::PP_GTOs::kinetic_integral
        
            typedef ::SireMaths::TrigMatrix ( ::Squire::PP_GTOs::*kinetic_integral_function_type)(  ) const;
            kinetic_integral_function_type kinetic_integral_function_value( &::Squire::PP_GTOs::kinetic_integral );
            
            PP_GTOs_exposer.def( 
                "kinetic_integral"
                , kinetic_integral_function_value
                , "Return the kinetic energy integrals for each pair of orbitals" );
        
        }
        PP_GTOs_exposer.def( bp::self != bp::self );
        { //::Squire::PP_GTOs::operator=
        
            typedef ::Squire::PP_GTOs & ( ::Squire::PP_GTOs::*assign_function_type)( ::Squire::PP_GTOs const & ) ;
            assign_function_type assign_function_value( &::Squire::PP_GTOs::operator= );
            
            PP_GTOs_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PP_GTOs_exposer.def( bp::self == bp::self );
        { //::Squire::PP_GTOs::overlap_integral
        
            typedef ::SireMaths::TrigMatrix ( ::Squire::PP_GTOs::*overlap_integral_function_type)(  ) const;
            overlap_integral_function_type overlap_integral_function_value( &::Squire::PP_GTOs::overlap_integral );
            
            PP_GTOs_exposer.def( 
                "overlap_integral"
                , overlap_integral_function_value
                , "Return the overlap integrals for each pair of orbitals" );
        
        }
        { //::Squire::PP_GTOs::potential_integral
        
            typedef ::SireMaths::TrigMatrix ( ::Squire::PP_GTOs::*potential_integral_function_type)( ::QVector< Squire::PointCharge > const & ) const;
            potential_integral_function_type potential_integral_function_value( &::Squire::PP_GTOs::potential_integral );
            
            PP_GTOs_exposer.def( 
                "potential_integral"
                , potential_integral_function_value
                , ( bp::arg("C") )
                , "Return the potential energy integral for each pair of orbitals\ninteracting with the point charges in C" );
        
        }
        { //::Squire::PP_GTOs::potential_integral
        
            typedef ::SireMaths::TrigMatrix ( ::Squire::PP_GTOs::*potential_integral_function_type)( ::QVector< Squire::PointCharge > const &,int ) const;
            potential_integral_function_type potential_integral_function_value( &::Squire::PP_GTOs::potential_integral );
            
            PP_GTOs_exposer.def( 
                "potential_integral"
                , potential_integral_function_value
                , ( bp::arg("C"), bp::arg("m") )
                , "Return the mth auxillary potential energy integral for each pair of orbitals\ninteracting with the point charges in C" );
        
        }
        PP_GTOs_exposer.def( "__copy__", &__copy__);
        PP_GTOs_exposer.def( "__deepcopy__", &__copy__);
        PP_GTOs_exposer.def( "clone", &__copy__);
        PP_GTOs_exposer.def( "__str__", &pvt_get_name);
        PP_GTOs_exposer.def( "__repr__", &pvt_get_name);
    }

}
