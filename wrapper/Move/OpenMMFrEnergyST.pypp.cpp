// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "OpenMMFrEnergyST.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/forcetable.h"

#include "SireIO/amber.h"

#include "SireMM/atomljs.h"

#include "SireMM/internalff.h"

#include "SireMM/internalperturbation.h"

#include "SireMaths/constants.h"

#include "SireMaths/rangenerator.h"

#include "SireMaths/vector.h"

#include "SireMol/amberparameters.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atommasses.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/mgname.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleditor.h"

#include "SireMol/partialmolecule.h"

#include "SireMol/perturbation.h"

#include "SireMove/flexibility.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/convert.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "ensemble.h"

#include "openmmfrenergyst.h"

#include <QDebug>

#include <QTime>

#include <iostream>

#include "openmmfrenergyst.h"

SireMove::OpenMMFrEnergyST __copy__(const SireMove::OpenMMFrEnergyST &other){ return SireMove::OpenMMFrEnergyST(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_OpenMMFrEnergyST_class(){

    { //::SireMove::OpenMMFrEnergyST
        typedef bp::class_< SireMove::OpenMMFrEnergyST, bp::bases< SireMove::Integrator, SireBase::Property > > OpenMMFrEnergyST_exposer_t;
        OpenMMFrEnergyST_exposer_t OpenMMFrEnergyST_exposer = OpenMMFrEnergyST_exposer_t( "OpenMMFrEnergyST", bp::init< bp::optional< bool > >(( bp::arg("frequent_save_velocities")=(bool)(false) )) );
        bp::scope OpenMMFrEnergyST_scope( OpenMMFrEnergyST_exposer );
        OpenMMFrEnergyST_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const &, SireMol::MoleculeGroup const &, bp::optional< bool > >(( bp::arg("molecule_group"), bp::arg("solutes"), bp::arg("solute_hard"), bp::arg("solute_todummy"), bp::arg("solute_fromdummy"), bp::arg("frequent_save_velocities")=(bool)(false) )) );
        OpenMMFrEnergyST_exposer.def( bp::init< SireMove::OpenMMFrEnergyST const & >(( bp::arg("other") )) );
        { //::SireMove::OpenMMFrEnergyST::annealSystemToLambda

            typedef ::SireSystem::System ( ::SireMove::OpenMMFrEnergyST::*annealSystemToLambda_function_type )( ::SireSystem::System &,::SireUnits::Dimension::Time,int ) ;
            annealSystemToLambda_function_type annealSystemToLambda_function_value( &::SireMove::OpenMMFrEnergyST::annealSystemToLambda );

            OpenMMFrEnergyST_exposer.def(
                "annealSystemToLambda"
                , annealSystemToLambda_function_value
                , ( bp::arg("system"), bp::arg("timestep"), bp::arg("annealingSteps") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::createWorkspace

            typedef ::SireMove::IntegratorWorkspacePtr ( ::SireMove::OpenMMFrEnergyST::*createWorkspace_function_type )( ::SireBase::PropertyMap const & ) const;
            createWorkspace_function_type createWorkspace_function_value( &::SireMove::OpenMMFrEnergyST::createWorkspace );

            OpenMMFrEnergyST_exposer.def(
                "createWorkspace"
                , createWorkspace_function_value
                , ( bp::arg("map")=SireBase::PropertyMap() ) );

        }
        { //::SireMove::OpenMMFrEnergyST::createWorkspace

            typedef ::SireMove::IntegratorWorkspacePtr ( ::SireMove::OpenMMFrEnergyST::*createWorkspace_function_type )( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            createWorkspace_function_type createWorkspace_function_value( &::SireMove::OpenMMFrEnergyST::createWorkspace );

            OpenMMFrEnergyST_exposer.def(
                "createWorkspace"
                , createWorkspace_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ) );

        }
        { //::SireMove::OpenMMFrEnergyST::ensemble

            typedef ::SireMove::Ensemble ( ::SireMove::OpenMMFrEnergyST::*ensemble_function_type )(  ) const;
            ensemble_function_type ensemble_function_value( &::SireMove::OpenMMFrEnergyST::ensemble );

            OpenMMFrEnergyST_exposer.def(
                "ensemble"
                , ensemble_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getAlchemicalValue

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getAlchemicalValue_function_type )(  ) ;
            getAlchemicalValue_function_type getAlchemicalValue_function_value( &::SireMove::OpenMMFrEnergyST::getAlchemicalValue );

            OpenMMFrEnergyST_exposer.def(
                "getAlchemicalValue"
                , getAlchemicalValue_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getAndersen

            typedef bool ( ::SireMove::OpenMMFrEnergyST::*getAndersen_function_type )(  ) ;
            getAndersen_function_type getAndersen_function_value( &::SireMove::OpenMMFrEnergyST::getAndersen );

            OpenMMFrEnergyST_exposer.def(
                "getAndersen"
                , getAndersen_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getAndersenFrequency

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getAndersenFrequency_function_type )(  ) ;
            getAndersenFrequency_function_type getAndersenFrequency_function_value( &::SireMove::OpenMMFrEnergyST::getAndersenFrequency );

            OpenMMFrEnergyST_exposer.def(
                "getAndersenFrequency"
                , getAndersenFrequency_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getBiases

            typedef ::QVector< QVector < double > > ( ::SireMove::OpenMMFrEnergyST::*getBiases_function_type )(  ) ;
            getBiases_function_type getBiases_function_value( &::SireMove::OpenMMFrEnergyST::getBiases );

            OpenMMFrEnergyST_exposer.def(
                "getBiases"
                , getBiases_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getBufferFrequency

            typedef int ( ::SireMove::OpenMMFrEnergyST::*getBufferFrequency_function_type )(  ) ;
            getBufferFrequency_function_type getBufferFrequency_function_value( &::SireMove::OpenMMFrEnergyST::getBufferFrequency );

            OpenMMFrEnergyST_exposer.def(
                "getBufferFrequency"
                , getBufferFrequency_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getCMMremovalFrequency

            typedef int ( ::SireMove::OpenMMFrEnergyST::*getCMMremovalFrequency_function_type )(  ) ;
            getCMMremovalFrequency_function_type getCMMremovalFrequency_function_value( &::SireMove::OpenMMFrEnergyST::getCMMremovalFrequency );

            OpenMMFrEnergyST_exposer.def(
                "getCMMremovalFrequency"
                , getCMMremovalFrequency_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getConstraintType

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getConstraintType_function_type )(  ) ;
            getConstraintType_function_type getConstraintType_function_value( &::SireMove::OpenMMFrEnergyST::getConstraintType );

            OpenMMFrEnergyST_exposer.def(
                "getConstraintType"
                , getConstraintType_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getCoulombPower

            typedef float ( ::SireMove::OpenMMFrEnergyST::*getCoulombPower_function_type )(  ) ;
            getCoulombPower_function_type getCoulombPower_function_value( &::SireMove::OpenMMFrEnergyST::getCoulombPower );

            OpenMMFrEnergyST_exposer.def(
                "getCoulombPower"
                , getCoulombPower_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getCutoffType

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getCutoffType_function_type )(  ) ;
            getCutoffType_function_type getCutoffType_function_value( &::SireMove::OpenMMFrEnergyST::getCutoffType );

            OpenMMFrEnergyST_exposer.def(
                "getCutoffType"
                , getCutoffType_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getCutoffDistance

            typedef ::SireUnits::Dimension::Length ( ::SireMove::OpenMMFrEnergyST::*getCutoffDistance_function_type )(  ) ;
            getCutoffDistance_function_type getCutoffDistance_function_value( &::SireMove::OpenMMFrEnergyST::getCutoffDistance );

            OpenMMFrEnergyST_exposer.def(
                "getCutoffDistance"
                , getCutoffDistance_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getDeltaAlchemical

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getDeltaAlchemical_function_type )(  ) ;
            getDeltaAlchemical_function_type getDeltaAlchemical_function_value( &::SireMove::OpenMMFrEnergyST::getDeltaAlchemical );

            OpenMMFrEnergyST_exposer.def(
                "getDeltaAlchemical"
                , getDeltaAlchemical_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getDeviceIndex

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getDeviceIndex_function_type )(  ) ;
            getDeviceIndex_function_type getDeviceIndex_function_value( &::SireMove::OpenMMFrEnergyST::getDeviceIndex );

            OpenMMFrEnergyST_exposer.def(
                "getDeviceIndex"
                , getDeviceIndex_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getEnergies

            typedef ::QVector< double > ( ::SireMove::OpenMMFrEnergyST::*getEnergies_function_type )(  ) ;
            getEnergies_function_type getEnergies_function_value( &::SireMove::OpenMMFrEnergyST::getEnergies );

            OpenMMFrEnergyST_exposer.def(
                "getEnergies"
                , getEnergies_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getEnergyFrequency

            typedef int ( ::SireMove::OpenMMFrEnergyST::*getEnergyFrequency_function_type )(  ) ;
            getEnergyFrequency_function_type getEnergyFrequency_function_value( &::SireMove::OpenMMFrEnergyST::getEnergyFrequency );

            OpenMMFrEnergyST_exposer.def(
                "getEnergyFrequency"
                , getEnergyFrequency_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getField_dielectric

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getFieldDielectric_function_type )(  ) ;
            getFieldDielectric_function_type getFieldDielectric_function_value( &::SireMove::OpenMMFrEnergyST::getFieldDielectric );

            OpenMMFrEnergyST_exposer.def(
                "getFieldDielectric"
                , getFieldDielectric_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getFriction

            typedef ::SireUnits::Dimension::Time ( ::SireMove::OpenMMFrEnergyST::*getFriction_function_type )(  ) ;
            getFriction_function_type getFriction_function_value( &::SireMove::OpenMMFrEnergyST::getFriction );

            OpenMMFrEnergyST_exposer.def(
                "getFriction"
                , getFriction_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getGradients

            typedef ::QVector< double > ( ::SireMove::OpenMMFrEnergyST::*getGradients_function_type )(  ) ;
            getGradients_function_type getGradients_function_value( &::SireMove::OpenMMFrEnergyST::getGradients );

            OpenMMFrEnergyST_exposer.def(
                "getGradients"
                , getGradients_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getIntegrationTolerance

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getIntegrationTolerance_function_type )(  ) ;
            getIntegrationTolerance_function_type getIntegrationTolerance_function_value( &::SireMove::OpenMMFrEnergyST::getIntegrationTolerance );

            OpenMMFrEnergyST_exposer.def(
                "getIntegrationTolerance"
                , getIntegrationTolerance_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getIntegrator

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getIntegrator_function_type )(  ) ;
            getIntegrator_function_type getIntegrator_function_value( &::SireMove::OpenMMFrEnergyST::getIntegrator );

            OpenMMFrEnergyST_exposer.def(
                "getIntegrator"
                , getIntegrator_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getMCBarostat

            typedef bool ( ::SireMove::OpenMMFrEnergyST::*getMCBarostat_function_type )(  ) ;
            getMCBarostat_function_type getMCBarostat_function_value( &::SireMove::OpenMMFrEnergyST::getMCBarostat );

            OpenMMFrEnergyST_exposer.def(
                "getMCBarostat"
                , getMCBarostat_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getMCBarostatFrequency

            typedef int ( ::SireMove::OpenMMFrEnergyST::*getMCBarostatFrequency_function_type )(  ) ;
            getMCBarostatFrequency_function_type getMCBarostatFrequency_function_value( &::SireMove::OpenMMFrEnergyST::getMCBarostatFrequency );

            OpenMMFrEnergyST_exposer.def(
                "getMCBarostatFrequency"
                , getMCBarostatFrequency_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getPlatform

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getPlatform_function_type )(  ) ;
            getPlatform_function_type getPlatform_function_value( &::SireMove::OpenMMFrEnergyST::getPlatform );

            OpenMMFrEnergyST_exposer.def(
                "getPlatform"
                , getPlatform_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getPotentialEnergy

            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMove::OpenMMFrEnergyST::*getPotentialEnergy_function_type )( ::SireSystem::System const & ) ;
            getPotentialEnergy_function_type getPotentialEnergy_function_value( &::SireMove::OpenMMFrEnergyST::getPotentialEnergy );

            OpenMMFrEnergyST_exposer.def(
                "getPotentialEnergy"
                , getPotentialEnergy_function_value
                , ( bp::arg("system") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::getPrecision

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*getPrecision_function_type )(  ) ;
            getPrecision_function_type getPrecision_function_value( &::SireMove::OpenMMFrEnergyST::getPrecision );

            OpenMMFrEnergyST_exposer.def(
                "getPrecision"
                , getPrecision_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getPressure

            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::OpenMMFrEnergyST::*getPressure_function_type )(  ) ;
            getPressure_function_type getPressure_function_value( &::SireMove::OpenMMFrEnergyST::getPressure );

            OpenMMFrEnergyST_exposer.def(
                "getPressure"
                , getPressure_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getRandomSeed

            typedef int ( ::SireMove::OpenMMFrEnergyST::*getRandomSeed_function_type )(  ) ;
            getRandomSeed_function_type getRandomSeed_function_value( &::SireMove::OpenMMFrEnergyST::getRandomSeed );

            OpenMMFrEnergyST_exposer.def(
                "getRandomSeed"
                , getRandomSeed_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getRestraint

            typedef bool ( ::SireMove::OpenMMFrEnergyST::*getRestraint_function_type )(  ) ;
            getRestraint_function_type getRestraint_function_value( &::SireMove::OpenMMFrEnergyST::getRestraint );

            OpenMMFrEnergyST_exposer.def(
                "getRestraint"
                , getRestraint_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getShiftDelta

            typedef double ( ::SireMove::OpenMMFrEnergyST::*getShiftDelta_function_type )(  ) ;
            getShiftDelta_function_type getShiftDelta_function_value( &::SireMove::OpenMMFrEnergyST::getShiftDelta );

            OpenMMFrEnergyST_exposer.def(
                "getShiftDelta"
                , getShiftDelta_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getTemperature

            typedef ::SireUnits::Dimension::Temperature ( ::SireMove::OpenMMFrEnergyST::*getTemperature_function_type )(  ) ;
            getTemperature_function_type getTemperature_function_value( &::SireMove::OpenMMFrEnergyST::getTemperature );

            OpenMMFrEnergyST_exposer.def(
                "getTemperature"
                , getTemperature_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::getTimetoSkip

            typedef ::SireUnits::Dimension::Time ( ::SireMove::OpenMMFrEnergyST::*getTimetoSkip_function_type )(  ) ;
            getTimetoSkip_function_type getTimetoSkip_function_value( &::SireMove::OpenMMFrEnergyST::getTimetoSkip );

            OpenMMFrEnergyST_exposer.def(
                "getTimetoSkip"
                , getTimetoSkip_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::initialise

            typedef void ( ::SireMove::OpenMMFrEnergyST::*initialise_function_type )(  ) ;
            initialise_function_type initialise_function_value( &::SireMove::OpenMMFrEnergyST::initialise );

            OpenMMFrEnergyST_exposer.def(
                "initialise"
                , initialise_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::integrate

            typedef void ( ::SireMove::OpenMMFrEnergyST::*integrate_function_type )( ::SireMove::IntegratorWorkspace &,::SireCAS::Symbol const &,::SireUnits::Dimension::Time,int,bool ) ;
            integrate_function_type integrate_function_value( &::SireMove::OpenMMFrEnergyST::integrate );

            OpenMMFrEnergyST_exposer.def(
                "integrate"
                , integrate_function_value
                , ( bp::arg("workspace"), bp::arg("nrg_component"), bp::arg("timestep"), bp::arg("nmoves"), bp::arg("record_stats") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::isTimeReversible

            typedef bool ( ::SireMove::OpenMMFrEnergyST::*isTimeReversible_function_type )(  ) const;
            isTimeReversible_function_type isTimeReversible_function_value( &::SireMove::OpenMMFrEnergyST::isTimeReversible );

            OpenMMFrEnergyST_exposer.def(
                "isTimeReversible"
                , isTimeReversible_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::minimiseEnergy

            typedef ::SireSystem::System ( ::SireMove::OpenMMFrEnergyST::*minimiseEnergy_function_type )( ::SireSystem::System &,double,int ) ;
            minimiseEnergy_function_type minimiseEnergy_function_value( &::SireMove::OpenMMFrEnergyST::minimiseEnergy );

            OpenMMFrEnergyST_exposer.def(
                "minimiseEnergy"
                , minimiseEnergy_function_value
                , ( bp::arg("system"), bp::arg("tolerance"), bp::arg("max_iteration") ) );

        }
        OpenMMFrEnergyST_exposer.def( bp::self != bp::self );
        { //::SireMove::OpenMMFrEnergyST::operator=

            typedef ::SireMove::OpenMMFrEnergyST & ( ::SireMove::OpenMMFrEnergyST::*assign_function_type )( ::SireMove::OpenMMFrEnergyST const & ) ;
            assign_function_type assign_function_value( &::SireMove::OpenMMFrEnergyST::operator= );

            OpenMMFrEnergyST_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );

        }
        OpenMMFrEnergyST_exposer.def( bp::self == bp::self );
        { //::SireMove::OpenMMFrEnergyST::setAlchemicalArray

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setAlchemicalArray_function_type )( ::QVector<double> ) ;
            setAlchemicalArray_function_type setAlchemicalArray_function_value( &::SireMove::OpenMMFrEnergyST::setAlchemicalArray );

            OpenMMFrEnergyST_exposer.def(
                "setAlchemicalArray"
                , setAlchemicalArray_function_value
                , ( bp::arg("arg0") ) );

        }
        OpenMMFrEnergyST_exposer.def( bp::self == bp::self );
        { //::SireMove::OpenMMFrEnergyST::setAlchemicalValue

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setAlchemicalValue_function_type )( double ) ;
            setAlchemicalValue_function_type setAlchemicalValue_function_value( &::SireMove::OpenMMFrEnergyST::setAlchemicalValue );

            OpenMMFrEnergyST_exposer.def(
                "setAlchemicalValue"
                , setAlchemicalValue_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setAndersen

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setAndersen_function_type )( bool ) ;
            setAndersen_function_type setAndersen_function_value( &::SireMove::OpenMMFrEnergyST::setAndersen );

            OpenMMFrEnergyST_exposer.def(
                "setAndersen"
                , setAndersen_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setAndersenFrequency

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setAndersenFrequency_function_type )( double ) ;
            setAndersenFrequency_function_type setAndersenFrequency_function_value( &::SireMove::OpenMMFrEnergyST::setAndersenFrequency );

            OpenMMFrEnergyST_exposer.def(
                "setAndersenFrequency"
                , setAndersenFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setBufferFrequency

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setBufferFrequency_function_type )( int ) ;
            setBufferFrequency_function_type setBufferFrequency_function_value( &::SireMove::OpenMMFrEnergyST::setBufferFrequency );

            OpenMMFrEnergyST_exposer.def(
                "setBufferFrequency"
                , setBufferFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setCMMremovalFrequency

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setCMMremovalFrequency_function_type )( int ) ;
            setCMMremovalFrequency_function_type setCMMremovalFrequency_function_value( &::SireMove::OpenMMFrEnergyST::setCMMremovalFrequency );

            OpenMMFrEnergyST_exposer.def(
                "setCMMremovalFrequency"
                , setCMMremovalFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setConstraintType

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setConstraintType_function_type )( ::QString ) ;
            setConstraintType_function_type setConstraintType_function_value( &::SireMove::OpenMMFrEnergyST::setConstraintType );

            OpenMMFrEnergyST_exposer.def(
                "setConstraintType"
                , setConstraintType_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setCoulombPower

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setCoulombPower_function_type )( float ) ;
            setCoulombPower_function_type setCoulombPower_function_value( &::SireMove::OpenMMFrEnergyST::setCoulombPower );

            OpenMMFrEnergyST_exposer.def(
                "setCoulombPower"
                , setCoulombPower_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setCutoffType

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setCutoffType_function_type )( ::QString ) ;
            setCutoffType_function_type setCutoffType_function_value( &::SireMove::OpenMMFrEnergyST::setCutoffType );

            OpenMMFrEnergyST_exposer.def(
                "setCutoffType"
                , setCutoffType_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setCutoffDistance

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setCutoffDistance_function_type )( ::SireUnits::Dimension::Length ) ;
            setCutoffDistance_function_type setCutoffDistance_function_value( &::SireMove::OpenMMFrEnergyST::setCutoffDistance );

            OpenMMFrEnergyST_exposer.def(
                "setCutoffDistance"
                , setCutoffDistance_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setDeltatAlchemical

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setDeltatAlchemical_function_type )( double ) ;
            setDeltatAlchemical_function_type setDeltatAlchemical_function_value( &::SireMove::OpenMMFrEnergyST::setDeltatAlchemical );

            OpenMMFrEnergyST_exposer.def(
                "setDeltatAlchemical"
                , setDeltatAlchemical_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setDeviceIndex

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setDeviceIndex_function_type )( ::QString ) ;
            setDeviceIndex_function_type setDeviceIndex_function_value( &::SireMove::OpenMMFrEnergyST::setDeviceIndex );

            OpenMMFrEnergyST_exposer.def(
                "setDeviceIndex"
                , setDeviceIndex_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setEnergyFrequency

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setEnergyFrequency_function_type )( int ) ;
            setEnergyFrequency_function_type setEnergyFrequency_function_value( &::SireMove::OpenMMFrEnergyST::setEnergyFrequency );

            OpenMMFrEnergyST_exposer.def(
                "setEnergyFrequency"
                , setEnergyFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setFieldDielectric

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setFieldDielectric_function_type )( double ) ;
            setFieldDielectric_function_type setFieldDielectric_function_value( &::SireMove::OpenMMFrEnergyST::setFieldDielectric );

            OpenMMFrEnergyST_exposer.def(
                "setFieldDielectric"
                , setFieldDielectric_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setFriction

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setFriction_function_type )( ::SireUnits::Dimension::Time ) ;
            setFriction_function_type setFriction_function_value( &::SireMove::OpenMMFrEnergyST::setFriction );

            OpenMMFrEnergyST_exposer.def(
                "setFriction"
                , setFriction_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setIntegrationTolerance

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setIntegrationTolerance_function_type )( double ) ;
            setIntegrationTolerance_function_type setIntegrationTolerance_function_value( &::SireMove::OpenMMFrEnergyST::setIntegrationTolerance );

            OpenMMFrEnergyST_exposer.def(
                "setIntegrationTolerance"
                , setIntegrationTolerance_function_value
                , ( bp::arg("tolerance") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setIntegrator

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setIntegrator_function_type )( ::QString ) ;
            setIntegrator_function_type setIntegrator_function_value( &::SireMove::OpenMMFrEnergyST::setIntegrator );

            OpenMMFrEnergyST_exposer.def(
                "setIntegrator"
                , setIntegrator_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setMCBarostat

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setMCBarostat_function_type )( bool ) ;
            setMCBarostat_function_type setMCBarostat_function_value( &::SireMove::OpenMMFrEnergyST::setMCBarostat );

            OpenMMFrEnergyST_exposer.def(
                "setMCBarostat"
                , setMCBarostat_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setMCBarostatFrequency

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setMCBarostatFrequency_function_type )( int ) ;
            setMCBarostatFrequency_function_type setMCBarostatFrequency_function_value( &::SireMove::OpenMMFrEnergyST::setMCBarostatFrequency );

            OpenMMFrEnergyST_exposer.def(
                "setMCBarostatFrequency"
                , setMCBarostatFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setPlatform

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setPlatform_function_type )( ::QString ) ;
            setPlatform_function_type setPlatform_function_value( &::SireMove::OpenMMFrEnergyST::setPlatform );

            OpenMMFrEnergyST_exposer.def(
                "setPlatform"
                , setPlatform_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setPrecision

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setPrecision_function_type )( ::QString ) ;
            setPrecision_function_type setPrecision_function_value( &::SireMove::OpenMMFrEnergyST::setPrecision );

            OpenMMFrEnergyST_exposer.def(
                "setPrecision"
                , setPrecision_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setPressure

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setPressure_function_type )( ::SireUnits::Dimension::Pressure ) ;
            setPressure_function_type setPressure_function_value( &::SireMove::OpenMMFrEnergyST::setPressure );

            OpenMMFrEnergyST_exposer.def(
                "setPressure"
                , setPressure_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setRandomSeed

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setRandomSeed_function_type )( int ) ;
            setRandomSeed_function_type setRandomSeed_function_value( &::SireMove::OpenMMFrEnergyST::setRandomSeed );

            OpenMMFrEnergyST_exposer.def(
                "setRandomSeed"
                , setRandomSeed_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setReinitialiseContext

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setReinitialiseContext_function_type )( bool ) ;
            setReinitialiseContext_function_type setReinitialiseContext_function_value( &::SireMove::OpenMMFrEnergyST::setReinitialiseContext );

            OpenMMFrEnergyST_exposer.def(
                "setReinitialiseContext"
                , setReinitialiseContext_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setRestraint

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setRestraint_function_type )( bool ) ;
            setRestraint_function_type setRestraint_function_value( &::SireMove::OpenMMFrEnergyST::setRestraint );

            OpenMMFrEnergyST_exposer.def(
                "setRestraint"
                , setRestraint_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setShiftDelta

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setShiftDelta_function_type )( double ) ;
            setShiftDelta_function_type setShiftDelta_function_value( &::SireMove::OpenMMFrEnergyST::setShiftDelta );

            OpenMMFrEnergyST_exposer.def(
                "setShiftDelta"
                , setShiftDelta_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setTemperature

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setTemperature_function_type )( ::SireUnits::Dimension::Temperature ) ;
            setTemperature_function_type setTemperature_function_value( &::SireMove::OpenMMFrEnergyST::setTemperature );

            OpenMMFrEnergyST_exposer.def(
                "setTemperature"
                , setTemperature_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::setTimetoSkip

            typedef void ( ::SireMove::OpenMMFrEnergyST::*setTimetoSkip_function_type )( ::SireUnits::Dimension::Time ) ;
            setTimetoSkip_function_type setTimetoSkip_function_value( &::SireMove::OpenMMFrEnergyST::setTimetoSkip );

            OpenMMFrEnergyST_exposer.def(
                "setTimetoSkip"
                , setTimetoSkip_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMFrEnergyST::toString

            typedef ::QString ( ::SireMove::OpenMMFrEnergyST::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMove::OpenMMFrEnergyST::toString );

            OpenMMFrEnergyST_exposer.def(
                "toString"
                , toString_function_value );

        }
        { //::SireMove::OpenMMFrEnergyST::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::OpenMMFrEnergyST::typeName );

            OpenMMFrEnergyST_exposer.def(
                "typeName"
                , typeName_function_value );

        }
        OpenMMFrEnergyST_exposer.staticmethod( "typeName" );
        OpenMMFrEnergyST_exposer.def( "__copy__", &__copy__);
        OpenMMFrEnergyST_exposer.def( "__deepcopy__", &__copy__);
        OpenMMFrEnergyST_exposer.def( "clone", &__copy__);
        OpenMMFrEnergyST_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::OpenMMFrEnergyST >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OpenMMFrEnergyST_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::OpenMMFrEnergyST >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OpenMMFrEnergyST_exposer.def( "__str__", &__str__< ::SireMove::OpenMMFrEnergyST > );
        OpenMMFrEnergyST_exposer.def( "__repr__", &__str__< ::SireMove::OpenMMFrEnergyST > );
    }

}
