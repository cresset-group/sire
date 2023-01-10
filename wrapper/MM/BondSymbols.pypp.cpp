// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "BondSymbols.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMol/cgidx.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireVol/coordgroup.h"

#include "internalparameters.h"

#include "sireglobal.h"

#include "tostring.h"

#include <algorithm>

#include "internalparameters.h"

SireMM::BondSymbols __copy__(const SireMM::BondSymbols &other){ return SireMM::BondSymbols(other); }

const char* pvt_get_name(const SireMM::BondSymbols&){ return "SireMM::BondSymbols";}

#include "Helpers/release_gil_policy.hpp"

void register_BondSymbols_class(){

    { //::SireMM::BondSymbols
        typedef bp::class_< SireMM::BondSymbols, bp::bases< SireMM::InternalSymbolsBase > > BondSymbols_exposer_t;
        BondSymbols_exposer_t BondSymbols_exposer = BondSymbols_exposer_t( "BondSymbols", "This class holds the symbols required for the bond\nand Urey-Bradley parameters. These are functions\nthat act between two atoms, using the distance\nbetween the atoms (r) as the input variable", bp::init< >("") );
        bp::scope BondSymbols_scope( BondSymbols_exposer );
        { //::SireMM::BondSymbols::r
        
            typedef ::SireCAS::Symbol const & ( ::SireMM::BondSymbols::*r_function_type)(  ) const;
            r_function_type r_function_value( &::SireMM::BondSymbols::r );
            
            BondSymbols_exposer.def( 
                "r"
                , r_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the symbol representing the vector along the bond (r)" );
        
        }
        BondSymbols_exposer.def( "__copy__", &__copy__);
        BondSymbols_exposer.def( "__deepcopy__", &__copy__);
        BondSymbols_exposer.def( "clone", &__copy__);
        BondSymbols_exposer.def( "__str__", &pvt_get_name);
        BondSymbols_exposer.def( "__repr__", &pvt_get_name);
    }

}
