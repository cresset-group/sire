// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "EnergyMonitor.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/array2d.hpp"

#include "SireError/errors.h"

#include "SireMM/atomljs.h"

#include "SireMM/ljpair.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/mgname.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/energymonitor.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "energymonitor.h"

#include "energymonitor.h"

SireSystem::EnergyMonitor __copy__(const SireSystem::EnergyMonitor &other){ return SireSystem::EnergyMonitor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_EnergyMonitor_class(){

    { //::SireSystem::EnergyMonitor
        typedef bp::class_< SireSystem::EnergyMonitor, bp::bases< SireSystem::SystemMonitor, SireBase::Property > > EnergyMonitor_exposer_t;
        EnergyMonitor_exposer_t EnergyMonitor_exposer = EnergyMonitor_exposer_t( "EnergyMonitor", "This monitor is used to monitor the energy of interaction between\nmolecule views in two groups. The coulomb and LJ energy of each pair\nof molecule views in the two groups is calculated and averaged\nusing the contained accumulator\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope EnergyMonitor_scope( EnergyMonitor_exposer );
        EnergyMonitor_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const & >(( bp::arg("group0"), bp::arg("group1") ), "Construct to monitor the energies between all pairs of molecule views in the\ntwo passed groups. This will accumulate the average and standard deviation\nof each of the energies") );
        EnergyMonitor_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const &, SireMaths::Accumulator const & >(( bp::arg("group0"), bp::arg("group1"), bp::arg("accum") ), "Construct to monitor the energies between all pairs of molecule views in\nthe two passed groups, accumulating the energies using the passed\naccumulator") );
        EnergyMonitor_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireSystem::IDAssigner const & >(( bp::arg("group0"), bp::arg("group1") ), "Construct to monitor the energies between all pairs of molecule views in the\ntwo passed groups. This will accumulate the average and standard deviation\nof each of the energies") );
        EnergyMonitor_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireSystem::IDAssigner const &, SireMaths::Accumulator const & >(( bp::arg("group0"), bp::arg("group1"), bp::arg("accum") ), "Construct to monitor the energies between all pairs of molecule views in\nthe two passed groups, accumulating the energies using the passed\naccumulator") );
        EnergyMonitor_exposer.def( bp::init< SireSystem::IDAssigner const &, SireMol::MoleculeGroup const & >(( bp::arg("group0"), bp::arg("group1") ), "Construct to monitor the energies between all pairs of molecule views in the\ntwo passed groups. This will accumulate the average and standard deviation\nof each of the energies") );
        EnergyMonitor_exposer.def( bp::init< SireSystem::IDAssigner const &, SireMol::MoleculeGroup const &, SireMaths::Accumulator const & >(( bp::arg("group0"), bp::arg("group1"), bp::arg("accum") ), "Construct to monitor the energies between all pairs of molecule views in\nthe two passed groups, accumulating the energies using the passed\naccumulator") );
        EnergyMonitor_exposer.def( bp::init< SireSystem::IDAssigner const &, SireSystem::IDAssigner const & >(( bp::arg("group0"), bp::arg("group1") ), "Construct to monitor the energies between all pairs of molecule views in the\ntwo passed groups. This will accumulate the average and standard deviation\nof each of the energies") );
        EnergyMonitor_exposer.def( bp::init< SireSystem::IDAssigner const &, SireSystem::IDAssigner const &, SireMaths::Accumulator const & >(( bp::arg("group0"), bp::arg("group1"), bp::arg("accum") ), "Construct to monitor the energies between all pairs of molecule views in\nthe two passed groups, accumulating the energies using the passed\naccumulator") );
        EnergyMonitor_exposer.def( bp::init< SireSystem::EnergyMonitor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::EnergyMonitor::alpha
        
            typedef double ( ::SireSystem::EnergyMonitor::*alpha_function_type)(  ) const;
            alpha_function_type alpha_function_value( &::SireSystem::EnergyMonitor::alpha );
            
            EnergyMonitor_exposer.def( 
                "alpha"
                , alpha_function_value
                , bp::release_gil_policy()
                , "Return the value of alpha (either the explicitly set value, or\nthe last value used when calculating the energy if an alpha\ncomponent is used)" );
        
        }
        { //::SireSystem::EnergyMonitor::assigner0
        
            typedef ::SireSystem::IDAssigner const & ( ::SireSystem::EnergyMonitor::*assigner0_function_type)(  ) const;
            assigner0_function_type assigner0_function_value( &::SireSystem::EnergyMonitor::assigner0 );
            
            EnergyMonitor_exposer.def( 
                "assigner0"
                , assigner0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the assigner used to select views0. Note that this will\nraise an exception if an assigner is not used to choose these views\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireSystem::EnergyMonitor::assigner1
        
            typedef ::SireSystem::IDAssigner const & ( ::SireSystem::EnergyMonitor::*assigner1_function_type)(  ) const;
            assigner1_function_type assigner1_function_value( &::SireSystem::EnergyMonitor::assigner1 );
            
            EnergyMonitor_exposer.def( 
                "assigner1"
                , assigner1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the assigner used to select views1. Note that this will\nraise an exception if an assigner is not used to choose these views\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireSystem::EnergyMonitor::clearStatistics
        
            typedef void ( ::SireSystem::EnergyMonitor::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireSystem::EnergyMonitor::clearStatistics );
            
            EnergyMonitor_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , bp::release_gil_policy()
                , "Clear all statistics" );
        
        }
        { //::SireSystem::EnergyMonitor::coulombEnergies
        
            typedef ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > ( ::SireSystem::EnergyMonitor::*coulombEnergies_function_type)(  ) const;
            coulombEnergies_function_type coulombEnergies_function_value( &::SireSystem::EnergyMonitor::coulombEnergies );
            
            EnergyMonitor_exposer.def( 
                "coulombEnergies"
                , coulombEnergies_function_value
                , bp::release_gil_policy()
                , "Return the array of all accumulated coulomb energies" );
        
        }
        { //::SireSystem::EnergyMonitor::coulombPower
        
            typedef int ( ::SireSystem::EnergyMonitor::*coulombPower_function_type)(  ) const;
            coulombPower_function_type coulombPower_function_value( &::SireSystem::EnergyMonitor::coulombPower );
            
            EnergyMonitor_exposer.def( 
                "coulombPower"
                , coulombPower_function_value
                , bp::release_gil_policy()
                , "Return the coulomb power, if extra coulomb softening is used.\nThis returns 0 if coulomb softening is not used" );
        
        }
        { //::SireSystem::EnergyMonitor::group0
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireSystem::EnergyMonitor::*group0_function_type)(  ) const;
            group0_function_type group0_function_value( &::SireSystem::EnergyMonitor::group0 );
            
            EnergyMonitor_exposer.def( 
                "group0"
                , group0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group from which views0 are drawn. Note that this\nwill return the molecule group used by assigner0 if an assigner is\nused to choose views" );
        
        }
        { //::SireSystem::EnergyMonitor::group1
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireSystem::EnergyMonitor::*group1_function_type)(  ) const;
            group1_function_type group1_function_value( &::SireSystem::EnergyMonitor::group1 );
            
            EnergyMonitor_exposer.def( 
                "group1"
                , group1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group from which views1 are drawn. Note that this\nwill return the molecule group used by assigner1 if an assigner is\nused to choose views" );
        
        }
        { //::SireSystem::EnergyMonitor::ljEnergies
        
            typedef ::SireBase::Array2D< SireBase::PropPtr< SireMaths::Accumulator > > ( ::SireSystem::EnergyMonitor::*ljEnergies_function_type)(  ) const;
            ljEnergies_function_type ljEnergies_function_value( &::SireSystem::EnergyMonitor::ljEnergies );
            
            EnergyMonitor_exposer.def( 
                "ljEnergies"
                , ljEnergies_function_value
                , bp::release_gil_policy()
                , "Return the array of all accumulated LJ energies" );
        
        }
        { //::SireSystem::EnergyMonitor::monitor
        
            typedef void ( ::SireSystem::EnergyMonitor::*monitor_function_type)( ::SireSystem::System & ) ;
            monitor_function_type monitor_function_value( &::SireSystem::EnergyMonitor::monitor );
            
            EnergyMonitor_exposer.def( 
                "monitor"
                , monitor_function_value
                , ( bp::arg("system") )
                , bp::release_gil_policy()
                , "Accumulate energies from the passed system" );
        
        }
        EnergyMonitor_exposer.def( bp::self != bp::self );
        { //::SireSystem::EnergyMonitor::operator=
        
            typedef ::SireSystem::EnergyMonitor & ( ::SireSystem::EnergyMonitor::*assign_function_type)( ::SireSystem::EnergyMonitor const & ) ;
            assign_function_type assign_function_value( &::SireSystem::EnergyMonitor::operator= );
            
            EnergyMonitor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        EnergyMonitor_exposer.def( bp::self == bp::self );
        { //::SireSystem::EnergyMonitor::setAlpha
        
            typedef void ( ::SireSystem::EnergyMonitor::*setAlpha_function_type)( double ) ;
            setAlpha_function_type setAlpha_function_value( &::SireSystem::EnergyMonitor::setAlpha );
            
            EnergyMonitor_exposer.def( 
                "setAlpha"
                , setAlpha_function_value
                , ( bp::arg("alpha") )
                , bp::release_gil_policy()
                , "Explicitly set the value of alpha used if a soft-core potential is used.\nThis clears any set alpha component symbol." );
        
        }
        { //::SireSystem::EnergyMonitor::setAlphaComponent
        
            typedef void ( ::SireSystem::EnergyMonitor::*setAlphaComponent_function_type)( ::SireCAS::Symbol const & ) ;
            setAlphaComponent_function_type setAlphaComponent_function_value( &::SireSystem::EnergyMonitor::setAlphaComponent );
            
            EnergyMonitor_exposer.def( 
                "setAlphaComponent"
                , setAlphaComponent_function_value
                , ( bp::arg("component") )
                , bp::release_gil_policy()
                , "Set the system component symbol used to get the value of alpha\nif using a soft-core potential. Note that this will overwrite\nany explicitly-set value of alpha" );
        
        }
        { //::SireSystem::EnergyMonitor::setCoulombPower
        
            typedef void ( ::SireSystem::EnergyMonitor::*setCoulombPower_function_type)( int ) ;
            setCoulombPower_function_type setCoulombPower_function_value( &::SireSystem::EnergyMonitor::setCoulombPower );
            
            EnergyMonitor_exposer.def( 
                "setCoulombPower"
                , setCoulombPower_function_value
                , ( bp::arg("power") )
                , bp::release_gil_policy()
                , "Set the coulomb power parameter used by the soft-core potential" );
        
        }
        { //::SireSystem::EnergyMonitor::setShiftDelta
        
            typedef void ( ::SireSystem::EnergyMonitor::*setShiftDelta_function_type)( double ) ;
            setShiftDelta_function_type setShiftDelta_function_value( &::SireSystem::EnergyMonitor::setShiftDelta );
            
            EnergyMonitor_exposer.def( 
                "setShiftDelta"
                , setShiftDelta_function_value
                , ( bp::arg("delta") )
                , bp::release_gil_policy()
                , "Set the shift delta parameter used by the soft-core potential" );
        
        }
        { //::SireSystem::EnergyMonitor::shiftDelta
        
            typedef double ( ::SireSystem::EnergyMonitor::*shiftDelta_function_type)(  ) const;
            shiftDelta_function_type shiftDelta_function_value( &::SireSystem::EnergyMonitor::shiftDelta );
            
            EnergyMonitor_exposer.def( 
                "shiftDelta"
                , shiftDelta_function_value
                , bp::release_gil_policy()
                , "Return the shift delta parameter if a soft-core potential is used.\nThis returns 0 if a LJ shifting term is not used" );
        
        }
        { //::SireSystem::EnergyMonitor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::EnergyMonitor::typeName );
            
            EnergyMonitor_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "Return the typename of the class" );
        
        }
        { //::SireSystem::EnergyMonitor::usesSoftCore
        
            typedef bool ( ::SireSystem::EnergyMonitor::*usesSoftCore_function_type)(  ) const;
            usesSoftCore_function_type usesSoftCore_function_value( &::SireSystem::EnergyMonitor::usesSoftCore );
            
            EnergyMonitor_exposer.def( 
                "usesSoftCore"
                , usesSoftCore_function_value
                , bp::release_gil_policy()
                , "Return whether or not this monitor uses a soft-core potential to\ncalculate the CLJ energy between the molecules in views0() and the\nmolecules in views1()" );
        
        }
        { //::SireSystem::EnergyMonitor::views0
        
            typedef ::QVector< SireMol::PartialMolecule > ( ::SireSystem::EnergyMonitor::*views0_function_type)(  ) const;
            views0_function_type views0_function_value( &::SireSystem::EnergyMonitor::views0 );
            
            EnergyMonitor_exposer.def( 
                "views0"
                , views0_function_value
                , bp::release_gil_policy()
                , "Return the array of the first group of molecule views in the same order as they\nappear in the arrays of energies" );
        
        }
        { //::SireSystem::EnergyMonitor::views1
        
            typedef ::QVector< SireMol::PartialMolecule > ( ::SireSystem::EnergyMonitor::*views1_function_type)(  ) const;
            views1_function_type views1_function_value( &::SireSystem::EnergyMonitor::views1 );
            
            EnergyMonitor_exposer.def( 
                "views1"
                , views1_function_value
                , bp::release_gil_policy()
                , "Return the array of the second group of molecule views in the same order as they\nappear in the arrays of energies" );
        
        }
        EnergyMonitor_exposer.staticmethod( "typeName" );
        EnergyMonitor_exposer.def( "__copy__", &__copy__);
        EnergyMonitor_exposer.def( "__deepcopy__", &__copy__);
        EnergyMonitor_exposer.def( "clone", &__copy__);
        EnergyMonitor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::EnergyMonitor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        EnergyMonitor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::EnergyMonitor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        EnergyMonitor_exposer.def_pickle(sire_pickle_suite< ::SireSystem::EnergyMonitor >());
        EnergyMonitor_exposer.def( "__str__", &__str__< ::SireSystem::EnergyMonitor > );
        EnergyMonitor_exposer.def( "__repr__", &__str__< ::SireSystem::EnergyMonitor > );
    }

}
