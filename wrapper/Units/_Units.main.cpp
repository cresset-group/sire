// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License


#include "boost/python.hpp"

#include "Celsius.pypp.hpp"

#include "Fahrenheit.pypp.hpp"

#include "GeneralUnit.pypp.hpp"

#include "TempBase.pypp.hpp"

#include "Unit.pypp.hpp"

#include "_Units_free_functions.pypp.hpp"

namespace bp = boost::python;

#include "SireUnits_containers.h"

#include "SireUnits_registrars.h"

#include "SireUnits/temperature.h"

#include "sireunits_dimensions.h"

#include "generalunit.h"

#include "_Units_global_variables.pyman.hpp"

BOOST_PYTHON_MODULE(_Units){
    register_SireUnits_objects();

    register_SireUnits_containers();

    register_TempBase_class();

    register_Celsius_class();

    register_Unit_class();

    register_GeneralUnit_class();

    register_Fahrenheit_class();

    bp::implicitly_convertible< SireUnits::Dimension::TempBase, SireUnits::Dimension::Temperature >();

    bp::implicitly_convertible< double, SireUnits::Dimension::GeneralUnit >();

    register_SireUnits_dimensions();

    register_man_global_variables();

    register_free_functions();
}

