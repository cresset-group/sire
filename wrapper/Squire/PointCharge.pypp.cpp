// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PointCharge.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "pointcharge.h"

#include "pointcharge.h"

Squire::PointCharge __copy__(const Squire::PointCharge &other){ return Squire::PointCharge(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const Squire::PointCharge&){ return "Squire::PointCharge";}

void register_PointCharge_class(){

    { //::Squire::PointCharge
        typedef bp::class_< Squire::PointCharge > PointCharge_exposer_t;
        PointCharge_exposer_t PointCharge_exposer = PointCharge_exposer_t( "PointCharge", "This class holds a single point charge. This class is designed\nfor speed, and is used within the integral program (the charge\nis held in internal units, and the point is mapped into the\ncorrect space for the QM program)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope PointCharge_scope( PointCharge_exposer );
        PointCharge_exposer.def( bp::init< SireMaths::Vector const &, SireUnits::Dimension::Charge const & >(( bp::arg("coords"), bp::arg("charge") ), "Construct a point charge at the specified location with the\nspecified charge") );
        PointCharge_exposer.def( bp::init< SireUnits::Dimension::Charge const &, SireMaths::Vector const & >(( bp::arg("charge"), bp::arg("coords") ), "Construct a point charge at the specified location with the\nspecified charge") );
        PointCharge_exposer.def( bp::init< Squire::PointCharge const & >(( bp::arg("other") ), "Copy constructor") );
        { //::Squire::PointCharge::center
        
            typedef ::SireMaths::Vector const & ( ::Squire::PointCharge::*center_function_type)(  ) const;
            center_function_type center_function_value( &::Squire::PointCharge::center );
            
            PointCharge_exposer.def( 
                "center"
                , center_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the location of this point charge" );
        
        }
        { //::Squire::PointCharge::charge
        
            typedef double ( ::Squire::PointCharge::*charge_function_type)(  ) const;
            charge_function_type charge_function_value( &::Squire::PointCharge::charge );
            
            PointCharge_exposer.def( 
                "charge"
                , charge_function_value
                , "Return the magnitude of this point charge (in internal units)" );
        
        }
        PointCharge_exposer.def( bp::self != bp::self );
        { //::Squire::PointCharge::operator=
        
            typedef ::Squire::PointCharge & ( ::Squire::PointCharge::*assign_function_type)( ::Squire::PointCharge const & ) ;
            assign_function_type assign_function_value( &::Squire::PointCharge::operator= );
            
            PointCharge_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PointCharge_exposer.def( bp::self == bp::self );
        { //::Squire::PointCharge::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::PointCharge::typeName );
            
            PointCharge_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        PointCharge_exposer.staticmethod( "typeName" );
        PointCharge_exposer.def( "__copy__", &__copy__);
        PointCharge_exposer.def( "__deepcopy__", &__copy__);
        PointCharge_exposer.def( "clone", &__copy__);
        PointCharge_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::PointCharge >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PointCharge_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::PointCharge >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PointCharge_exposer.def( "__str__", &pvt_get_name);
        PointCharge_exposer.def( "__repr__", &pvt_get_name);
    }

}
