// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "PerturbationConstraint.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/symbol.h"

#include "SireCAS/values.h"

#include "SireMol/mgname.h"

#include "SireMol/mgnum.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/perturbation.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/delta.h"

#include "SireSystem/system.h"

#include "perturbationconstraint.h"

#include "perturbationconstraint.h"

SireSystem::PerturbationConstraint __copy__(const SireSystem::PerturbationConstraint &other){ return SireSystem::PerturbationConstraint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PerturbationConstraint_class(){

    { //::SireSystem::PerturbationConstraint
        typedef bp::class_< SireSystem::PerturbationConstraint, bp::bases< SireSystem::MoleculeConstraint, SireSystem::Constraint, SireBase::Property > > PerturbationConstraint_exposer_t;
        PerturbationConstraint_exposer_t PerturbationConstraint_exposer = PerturbationConstraint_exposer_t( "PerturbationConstraint", "This constraint is used to constrain part or parts of a z-matrix\nto particular values - this is useful during single-topology\nfree energy simulations\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope PerturbationConstraint_scope( PerturbationConstraint_exposer );
        PerturbationConstraint_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ), "Construct specifying the molecule group and perturbation property") );
        PerturbationConstraint_exposer.def( bp::init< SireSystem::PerturbationConstraint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::PerturbationConstraint::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireSystem::PerturbationConstraint::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireSystem::PerturbationConstraint::moleculeGroup );
            
            PerturbationConstraint_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the molecule group that is acted on by this constraint" );
        
        }
        PerturbationConstraint_exposer.def( bp::self != bp::self );
        { //::SireSystem::PerturbationConstraint::operator=
        
            typedef ::SireSystem::PerturbationConstraint & ( ::SireSystem::PerturbationConstraint::*assign_function_type)( ::SireSystem::PerturbationConstraint const & ) ;
            assign_function_type assign_function_value( &::SireSystem::PerturbationConstraint::operator= );
            
            PerturbationConstraint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PerturbationConstraint_exposer.def( bp::self == bp::self );
        { //::SireSystem::PerturbationConstraint::perturbationProperty
        
            typedef ::SireBase::PropertyName ( ::SireSystem::PerturbationConstraint::*perturbationProperty_function_type)(  ) const;
            perturbationProperty_function_type perturbationProperty_function_value( &::SireSystem::PerturbationConstraint::perturbationProperty );
            
            PerturbationConstraint_exposer.def( 
                "perturbationProperty"
                , perturbationProperty_function_value
                , "Return the property used to find the perturbations to apply\nto the molecules in this constraint" );
        
        }
        { //::SireSystem::PerturbationConstraint::toString
        
            typedef ::QString ( ::SireSystem::PerturbationConstraint::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::PerturbationConstraint::toString );
            
            PerturbationConstraint_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this constraint" );
        
        }
        { //::SireSystem::PerturbationConstraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::PerturbationConstraint::typeName );
            
            PerturbationConstraint_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        PerturbationConstraint_exposer.staticmethod( "typeName" );
        PerturbationConstraint_exposer.def( "__copy__", &__copy__);
        PerturbationConstraint_exposer.def( "__deepcopy__", &__copy__);
        PerturbationConstraint_exposer.def( "clone", &__copy__);
        PerturbationConstraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::PerturbationConstraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PerturbationConstraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::PerturbationConstraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PerturbationConstraint_exposer.def_pickle(sire_pickle_suite< ::SireSystem::PerturbationConstraint >());
        PerturbationConstraint_exposer.def( "__str__", &__str__< ::SireSystem::PerturbationConstraint > );
        PerturbationConstraint_exposer.def( "__repr__", &__str__< ::SireSystem::PerturbationConstraint > );
    }

}
