// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "IOParametersBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/cuttingfunction.h"

#include "SireMol/molecule.h"

#include "SireMol/molidx.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "iobase.h"

#include <QDebug>

#include <QFile>

#include "iobase.h"

SireIO::IOParametersBase __copy__(const SireIO::IOParametersBase &other){ return SireIO::IOParametersBase(other); }

const char* pvt_get_name(const SireIO::IOParametersBase&){ return "SireIO::IOParametersBase";}

#include "Helpers/release_gil_policy.hpp"

void register_IOParametersBase_class(){

    { //::SireIO::IOParametersBase
        typedef bp::class_< SireIO::IOParametersBase > IOParametersBase_exposer_t;
        IOParametersBase_exposer_t IOParametersBase_exposer = IOParametersBase_exposer_t( "IOParametersBase", "This is the base class of the object that contains the\ndefault sources of the properties into which this molecule\nreaderwriter will place data, and the default values of\nthe parameters that control how this readerwriter works.\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope IOParametersBase_scope( IOParametersBase_exposer );
        { //::SireIO::IOParametersBase::coordinates
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::IOParametersBase::*coordinates_function_type)(  ) const;
            coordinates_function_type coordinates_function_value( &::SireIO::IOParametersBase::coordinates );
            
            IOParametersBase_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the default name of the property into which\nthe coordinates of the atoms will be placed\n\ndefault == coordinates\n" );
        
        }
        { //::SireIO::IOParametersBase::cuttingFunction
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::IOParametersBase::*cuttingFunction_function_type)(  ) const;
            cuttingFunction_function_type cuttingFunction_function_value( &::SireIO::IOParametersBase::cuttingFunction );
            
            IOParametersBase_exposer.def( 
                "cuttingFunction"
                , cuttingFunction_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the function used to split the molecule\ninto CutGroups (must be an object of type CuttingFunction)\n\nsource  == cutting-function\ndefault == ResidueCutting()\n" );
        
        }
        { //::SireIO::IOParametersBase::element
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::IOParametersBase::*element_function_type)(  ) const;
            element_function_type element_function_value( &::SireIO::IOParametersBase::element );
            
            IOParametersBase_exposer.def( 
                "element"
                , element_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the default source of the property into which\nthe chemical elements of each atom will be placed\n\ndefault == element\n" );
        
        }
        IOParametersBase_exposer.def( "__copy__", &__copy__);
        IOParametersBase_exposer.def( "__deepcopy__", &__copy__);
        IOParametersBase_exposer.def( "clone", &__copy__);
        IOParametersBase_exposer.def( "__str__", &pvt_get_name);
        IOParametersBase_exposer.def( "__repr__", &pvt_get_name);
    }

}
