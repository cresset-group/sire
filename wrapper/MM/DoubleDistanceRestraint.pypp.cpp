// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "DoubleDistanceRestraint.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/conditional.h"

#include "SireCAS/errors.h"

#include "SireCAS/power.h"

#include "SireCAS/symbols.h"

#include "SireCAS/values.h"

#include "SireFF/forcetable.h"

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "distancerestraint.h"

#include "distancerestraint.h"

SireMM::DoubleDistanceRestraint __copy__(const SireMM::DoubleDistanceRestraint &other){ return SireMM::DoubleDistanceRestraint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_DoubleDistanceRestraint_class(){

    { //::SireMM::DoubleDistanceRestraint
        typedef bp::class_< SireMM::DoubleDistanceRestraint, bp::bases< SireMM::Restraint3D, SireMM::Restraint, SireBase::Property > > DoubleDistanceRestraint_exposer_t;
        DoubleDistanceRestraint_exposer_t DoubleDistanceRestraint_exposer = DoubleDistanceRestraint_exposer_t( "DoubleDistanceRestraint", "This class provides a restraint that operates on a pair\nof inter-point distances (e.g. the difference between\ntwo bond lengths). You need to supply four points to this\nrestraint which are used to calculate the two distances\n(r01 between points 0 and 1, and r23 between points 2 and 3)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope DoubleDistanceRestraint_scope( DoubleDistanceRestraint_exposer );
        DoubleDistanceRestraint_exposer.def( bp::init< SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireCAS::Expression const & >(( bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("restraint") ), "Construct a restraint that acts on the two distances defined\nusing the passed four points, using the expression restraint") );
        DoubleDistanceRestraint_exposer.def( bp::init< SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireFF::PointRef const &, SireCAS::Expression const &, SireCAS::Values const & >(( bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3"), bp::arg("restraint"), bp::arg("values") ), "Construct a restraint that acts on the two distances defined\nusing the passed four points, using the expression restraint\nand supplied user values in values") );
        DoubleDistanceRestraint_exposer.def( bp::init< SireMM::DoubleDistanceRestraint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::DoubleDistanceRestraint::builtinSymbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::DoubleDistanceRestraint::*builtinSymbols_function_type)(  ) const;
            builtinSymbols_function_type builtinSymbols_function_value( &::SireMM::DoubleDistanceRestraint::builtinSymbols );
            
            DoubleDistanceRestraint_exposer.def( 
                "builtinSymbols"
                , builtinSymbols_function_value
                , "Return the built in symbols for this restraint" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::builtinValues
        
            typedef ::SireCAS::Values ( ::SireMM::DoubleDistanceRestraint::*builtinValues_function_type)(  ) const;
            builtinValues_function_type builtinValues_function_value( &::SireMM::DoubleDistanceRestraint::builtinValues );
            
            DoubleDistanceRestraint_exposer.def( 
                "builtinValues"
                , builtinValues_function_value
                , "Return the built in values for this restraint" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::contains
        
            typedef bool ( ::SireMM::DoubleDistanceRestraint::*contains_function_type)( ::SireMol::MolNum ) const;
            contains_function_type contains_function_value( &::SireMM::DoubleDistanceRestraint::contains );
            
            DoubleDistanceRestraint_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molnum") )
                , "Return whether or not this restraint affects the molecule\nwith number molnum" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::contains
        
            typedef bool ( ::SireMM::DoubleDistanceRestraint::*contains_function_type)( ::SireMol::MolID const & ) const;
            contains_function_type contains_function_value( &::SireMM::DoubleDistanceRestraint::contains );
            
            DoubleDistanceRestraint_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molid") )
                , "Return whether or not this restraint affects the molecule\nwith ID molid" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::differentialRestraintFunction01
        
            typedef ::SireCAS::Expression const & ( ::SireMM::DoubleDistanceRestraint::*differentialRestraintFunction01_function_type)(  ) const;
            differentialRestraintFunction01_function_type differentialRestraintFunction01_function_value( &::SireMM::DoubleDistanceRestraint::differentialRestraintFunction01 );
            
            DoubleDistanceRestraint_exposer.def( 
                "differentialRestraintFunction01"
                , differentialRestraintFunction01_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the function used to calculate the restraint force along the\ndistance r01" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::differentialRestraintFunction23
        
            typedef ::SireCAS::Expression const & ( ::SireMM::DoubleDistanceRestraint::*differentialRestraintFunction23_function_type)(  ) const;
            differentialRestraintFunction23_function_type differentialRestraintFunction23_function_value( &::SireMM::DoubleDistanceRestraint::differentialRestraintFunction23 );
            
            DoubleDistanceRestraint_exposer.def( 
                "differentialRestraintFunction23"
                , differentialRestraintFunction23_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the function used to calculate the restraint force along the\ndistance r23" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::differentiate
        
            typedef ::SireMM::RestraintPtr ( ::SireMM::DoubleDistanceRestraint::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireMM::DoubleDistanceRestraint::differentiate );
            
            DoubleDistanceRestraint_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") )
                , "Return the differential of this restraint with respect to the\nsymbol symbol\nThrow: SireCAS::unavailable_differential\n" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::force
        
            typedef void ( ::SireMM::DoubleDistanceRestraint::*force_function_type)( ::SireFF::MolForceTable &,double ) const;
            force_function_type force_function_value( &::SireMM::DoubleDistanceRestraint::force );
            
            DoubleDistanceRestraint_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("scale_force")=1 )
                , "Calculate the force acting on the molecule in the forcetable forcetable\ncaused by this restraint, and add it on to the forcetable scaled by\nscale_force" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::force
        
            typedef void ( ::SireMM::DoubleDistanceRestraint::*force_function_type)( ::SireFF::ForceTable &,double ) const;
            force_function_type force_function_value( &::SireMM::DoubleDistanceRestraint::force );
            
            DoubleDistanceRestraint_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("scale_force")=1 )
                , "Calculate the force acting on the molecules in the forcetable forcetable\ncaused by this restraint, and add it on to the forcetable scaled by\nscale_force" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::molecules
        
            typedef ::SireMol::Molecules ( ::SireMM::DoubleDistanceRestraint::*molecules_function_type)(  ) const;
            molecules_function_type molecules_function_value( &::SireMM::DoubleDistanceRestraint::molecules );
            
            DoubleDistanceRestraint_exposer.def( 
                "molecules"
                , molecules_function_value
                , "Return the molecules used in this restraint" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::nPoints
        
            typedef int ( ::SireMM::DoubleDistanceRestraint::*nPoints_function_type)(  ) const;
            nPoints_function_type nPoints_function_value( &::SireMM::DoubleDistanceRestraint::nPoints );
            
            DoubleDistanceRestraint_exposer.def( 
                "nPoints"
                , nPoints_function_value
                , "This restraint involves four points" );
        
        }
        DoubleDistanceRestraint_exposer.def( bp::self != bp::self );
        { //::SireMM::DoubleDistanceRestraint::operator=
        
            typedef ::SireMM::DoubleDistanceRestraint & ( ::SireMM::DoubleDistanceRestraint::*assign_function_type)( ::SireMM::DoubleDistanceRestraint const & ) ;
            assign_function_type assign_function_value( &::SireMM::DoubleDistanceRestraint::operator= );
            
            DoubleDistanceRestraint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        DoubleDistanceRestraint_exposer.def( bp::self == bp::self );
        { //::SireMM::DoubleDistanceRestraint::point
        
            typedef ::SireFF::Point const & ( ::SireMM::DoubleDistanceRestraint::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireMM::DoubleDistanceRestraint::point );
            
            DoubleDistanceRestraint_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the ith point" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::point0
        
            typedef ::SireFF::Point const & ( ::SireMM::DoubleDistanceRestraint::*point0_function_type)(  ) const;
            point0_function_type point0_function_value( &::SireMM::DoubleDistanceRestraint::point0 );
            
            DoubleDistanceRestraint_exposer.def( 
                "point0"
                , point0_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the first point" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::point1
        
            typedef ::SireFF::Point const & ( ::SireMM::DoubleDistanceRestraint::*point1_function_type)(  ) const;
            point1_function_type point1_function_value( &::SireMM::DoubleDistanceRestraint::point1 );
            
            DoubleDistanceRestraint_exposer.def( 
                "point1"
                , point1_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the second point" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::point2
        
            typedef ::SireFF::Point const & ( ::SireMM::DoubleDistanceRestraint::*point2_function_type)(  ) const;
            point2_function_type point2_function_value( &::SireMM::DoubleDistanceRestraint::point2 );
            
            DoubleDistanceRestraint_exposer.def( 
                "point2"
                , point2_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the third point" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::point3
        
            typedef ::SireFF::Point const & ( ::SireMM::DoubleDistanceRestraint::*point3_function_type)(  ) const;
            point3_function_type point3_function_value( &::SireMM::DoubleDistanceRestraint::point3 );
            
            DoubleDistanceRestraint_exposer.def( 
                "point3"
                , point3_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the fourth point" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::r01
        
            typedef ::SireCAS::Symbol const & ( *r01_function_type )(  );
            r01_function_type r01_function_value( &::SireMM::DoubleDistanceRestraint::r01 );
            
            DoubleDistanceRestraint_exposer.def( 
                "r01"
                , r01_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\npoints 0 and 1 (r01)" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::r23
        
            typedef ::SireCAS::Symbol const & ( *r23_function_type )(  );
            r23_function_type r23_function_value( &::SireMM::DoubleDistanceRestraint::r23 );
            
            DoubleDistanceRestraint_exposer.def( 
                "r23"
                , r23_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\npoints 2 and 3 (r23)" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::setSpace
        
            typedef void ( ::SireMM::DoubleDistanceRestraint::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireMM::DoubleDistanceRestraint::setSpace );
            
            DoubleDistanceRestraint_exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("space") )
                , "Set the space used to evaluate the energy of this restraint\nThrow: SireVol::incompatible_space\n" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::DoubleDistanceRestraint::typeName );
            
            DoubleDistanceRestraint_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::update
        
            typedef void ( ::SireMM::DoubleDistanceRestraint::*update_function_type)( ::SireMol::MoleculeData const & ) ;
            update_function_type update_function_value( &::SireMM::DoubleDistanceRestraint::update );
            
            DoubleDistanceRestraint_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("moldata") )
                , "Update the points of this restraint using new molecule data from moldata\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::update
        
            typedef void ( ::SireMM::DoubleDistanceRestraint::*update_function_type)( ::SireMol::Molecules const & ) ;
            update_function_type update_function_value( &::SireMM::DoubleDistanceRestraint::update );
            
            DoubleDistanceRestraint_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molecules") )
                , "Update the points of this restraint using new molecule data from molecules\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::usesMoleculesIn
        
            typedef bool ( ::SireMM::DoubleDistanceRestraint::*usesMoleculesIn_function_type)( ::SireFF::ForceTable const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireMM::DoubleDistanceRestraint::usesMoleculesIn );
            
            DoubleDistanceRestraint_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("forcetable") )
                , "Return whether or not this restraint involves any of the molecules\nthat are in the forcetable forcetable" );
        
        }
        { //::SireMM::DoubleDistanceRestraint::usesMoleculesIn
        
            typedef bool ( ::SireMM::DoubleDistanceRestraint::*usesMoleculesIn_function_type)( ::SireMol::Molecules const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireMM::DoubleDistanceRestraint::usesMoleculesIn );
            
            DoubleDistanceRestraint_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("molecules") )
                , "Return whether or not this restraint involves any of the molecules\nin molecules" );
        
        }
        DoubleDistanceRestraint_exposer.staticmethod( "r01" );
        DoubleDistanceRestraint_exposer.staticmethod( "r23" );
        DoubleDistanceRestraint_exposer.staticmethod( "typeName" );
        DoubleDistanceRestraint_exposer.def( "__copy__", &__copy__);
        DoubleDistanceRestraint_exposer.def( "__deepcopy__", &__copy__);
        DoubleDistanceRestraint_exposer.def( "clone", &__copy__);
        DoubleDistanceRestraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::DoubleDistanceRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleDistanceRestraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::DoubleDistanceRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DoubleDistanceRestraint_exposer.def_pickle(sire_pickle_suite< ::SireMM::DoubleDistanceRestraint >());
        DoubleDistanceRestraint_exposer.def( "__str__", &__str__< ::SireMM::DoubleDistanceRestraint > );
        DoubleDistanceRestraint_exposer.def( "__repr__", &__str__< ::SireMM::DoubleDistanceRestraint > );
    }

}
