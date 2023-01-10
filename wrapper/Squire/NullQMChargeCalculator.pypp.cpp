// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "NullQMChargeCalculator.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/molnum.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "qmchargecalculator.h"

#include "qmchargecalculator.h"

Squire::NullQMChargeCalculator __copy__(const Squire::NullQMChargeCalculator &other){ return Squire::NullQMChargeCalculator(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_NullQMChargeCalculator_class(){

    { //::Squire::NullQMChargeCalculator
        typedef bp::class_< Squire::NullQMChargeCalculator, bp::bases< Squire::QMChargeCalculator, SireBase::Property > > NullQMChargeCalculator_exposer_t;
        NullQMChargeCalculator_exposer_t NullQMChargeCalculator_exposer = NullQMChargeCalculator_exposer_t( "NullQMChargeCalculator", "This is a null charge calculator - this returns zero\ncharges for every molecule", bp::init< >("Constructor") );
        bp::scope NullQMChargeCalculator_scope( NullQMChargeCalculator_exposer );
        NullQMChargeCalculator_exposer.def( bp::init< Squire::NullQMChargeCalculator const & >(( bp::arg("other") ), "Copy constructor") );
        { //::Squire::NullQMChargeCalculator::mayChangeCharges
        
            typedef bool ( ::Squire::NullQMChargeCalculator::*mayChangeCharges_function_type)( ::SireMol::PartialMolecule const &,::SireMol::PartialMolecule const &,::SireBase::PropertyMap const & ) const;
            mayChangeCharges_function_type mayChangeCharges_function_value( &::Squire::NullQMChargeCalculator::mayChangeCharges );
            
            NullQMChargeCalculator_exposer.def( 
                "mayChangeCharges"
                , mayChangeCharges_function_value
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") )
                , bp::release_gil_policy()
                , "Return whether or not the change from oldmol to newmol\nmay change the charges. Use this function to see if\na charge calculation is required" );
        
        }
        NullQMChargeCalculator_exposer.def( bp::self != bp::self );
        { //::Squire::NullQMChargeCalculator::operator()
        
            typedef ::SireMol::AtomCharges ( ::Squire::NullQMChargeCalculator::*__call___function_type)( ::SireMol::PartialMolecule const &,::SireBase::PropertyMap const & ) const;
            __call___function_type __call___function_value( &::Squire::NullQMChargeCalculator::operator() );
            
            NullQMChargeCalculator_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::Squire::NullQMChargeCalculator::operator=
        
            typedef ::Squire::NullQMChargeCalculator & ( ::Squire::NullQMChargeCalculator::*assign_function_type)( ::Squire::NullQMChargeCalculator const & ) ;
            assign_function_type assign_function_value( &::Squire::NullQMChargeCalculator::operator= );
            
            NullQMChargeCalculator_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        NullQMChargeCalculator_exposer.def( bp::self == bp::self );
        { //::Squire::NullQMChargeCalculator::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::NullQMChargeCalculator::typeName );
            
            NullQMChargeCalculator_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        NullQMChargeCalculator_exposer.staticmethod( "typeName" );
        NullQMChargeCalculator_exposer.def( "__copy__", &__copy__);
        NullQMChargeCalculator_exposer.def( "__deepcopy__", &__copy__);
        NullQMChargeCalculator_exposer.def( "clone", &__copy__);
        NullQMChargeCalculator_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::NullQMChargeCalculator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullQMChargeCalculator_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::NullQMChargeCalculator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullQMChargeCalculator_exposer.def_pickle(sire_pickle_suite< ::Squire::NullQMChargeCalculator >());
        NullQMChargeCalculator_exposer.def( "__str__", &__str__< ::Squire::NullQMChargeCalculator > );
        NullQMChargeCalculator_exposer.def( "__repr__", &__str__< ::Squire::NullQMChargeCalculator > );
    }

}
