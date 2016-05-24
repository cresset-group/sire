// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "DihedralSymbols.pypp.hpp"

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

SireMM::DihedralSymbols __copy__(const SireMM::DihedralSymbols &other){ return SireMM::DihedralSymbols(other); }

const char* pvt_get_name(const SireMM::DihedralSymbols&){ return "SireMM::DihedralSymbols";}

void register_DihedralSymbols_class(){

    { //::SireMM::DihedralSymbols
        typedef bp::class_< SireMM::DihedralSymbols, bp::bases< SireMM::InternalSymbolsBase > > DihedralSymbols_exposer_t;
        DihedralSymbols_exposer_t DihedralSymbols_exposer = DihedralSymbols_exposer_t( "DihedralSymbols", "This class holds the symbols required for the dihedral parameters.\nThese are functions of the dihedral (0-1-2-3) (phi) made\nby four atoms, of atoms 0 and 3 about the bond between\natoms 1 and 2 (measured clockwise)", bp::init< >("") );
        bp::scope DihedralSymbols_scope( DihedralSymbols_exposer );
        { //::SireMM::DihedralSymbols::phi
        
            typedef ::SireCAS::Symbol const & ( ::SireMM::DihedralSymbols::*phi_function_type)(  ) const;
            phi_function_type phi_function_value( &::SireMM::DihedralSymbols::phi );
            
            DihedralSymbols_exposer.def( 
                "phi"
                , phi_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol representing the torsion (phi)" );
        
        }
        DihedralSymbols_exposer.def( "__copy__", &__copy__);
        DihedralSymbols_exposer.def( "__deepcopy__", &__copy__);
        DihedralSymbols_exposer.def( "clone", &__copy__);
        DihedralSymbols_exposer.def( "__str__", &pvt_get_name);
        DihedralSymbols_exposer.def( "__repr__", &pvt_get_name);
    }

}
