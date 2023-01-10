// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InternalMove.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/vectorproperty.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/core.h"

#include "SireMol/dihedralid.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "ensemble.h"

#include "flexibility.h"

#include "internalmove.h"

#include <QDebug>

#include <QTime>

#include "internalmove.h"

SireMove::InternalMove __copy__(const SireMove::InternalMove &other){ return SireMove::InternalMove(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_InternalMove_class(){

    { //::SireMove::InternalMove
        typedef bp::class_< SireMove::InternalMove, bp::bases< SireMove::MonteCarlo, SireMove::Move, SireBase::Property > > InternalMove_exposer_t;
        InternalMove_exposer_t InternalMove_exposer = InternalMove_exposer_t( "InternalMove", "This class implements an intramolecular Monte Carlo move that uses\nthe move() method to perturb intramolecular degrees of freedom and\nthat may be applied to a random molecule (or part of a molecule)\nwithin a MoleculeGroup. It is based on the ZMatMove class.\n\nAuthor: Julien Michel\n", bp::init< bp::optional< SireBase::PropertyMap const & > >(( bp::arg("map")=SireBase::PropertyMap() ), "Null constructor") );
        bp::scope InternalMove_scope( InternalMove_exposer );
        InternalMove_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the mover move for the passed group of molecules") );
        InternalMove_exposer.def( bp::init< SireMove::Sampler const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("sampler"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the mover move that samples molecules from the\npassed sampler") );
        InternalMove_exposer.def( bp::init< SireMove::InternalMove const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::InternalMove::centerOfMolecule
        
            typedef ::SireMove::GetPoint const & ( ::SireMove::InternalMove::*centerOfMolecule_function_type)(  ) const;
            centerOfMolecule_function_type centerOfMolecule_function_value( &::SireMove::InternalMove::centerOfMolecule );
            
            InternalMove_exposer.def( 
                "centerOfMolecule"
                , centerOfMolecule_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the function used to find the center of the molecule" );
        
        }
        { //::SireMove::InternalMove::flexibilityProperty
        
            typedef ::SireBase::PropertyName const & ( ::SireMove::InternalMove::*flexibilityProperty_function_type)(  ) const;
            flexibilityProperty_function_type flexibilityProperty_function_value( &::SireMove::InternalMove::flexibilityProperty );
            
            InternalMove_exposer.def( 
                "flexibilityProperty"
                , flexibilityProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the property used to find the flexibility of each molecule" );
        
        }
        { //::SireMove::InternalMove::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireMove::InternalMove::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireMove::InternalMove::moleculeGroup );
            
            InternalMove_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group that is sampled for this move" );
        
        }
        { //::SireMove::InternalMove::move
        
            typedef void ( ::SireMove::InternalMove::*move_function_type)( ::SireSystem::System &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::InternalMove::move );
            
            InternalMove_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats")=(bool)(true) )
                , "Actually perform nmoves moves of the molecules in the\nsystem system, optionally recording simulation statistics\nif record_stats is true" );
        
        }
        InternalMove_exposer.def( bp::self != bp::self );
        { //::SireMove::InternalMove::operator=
        
            typedef ::SireMove::InternalMove & ( ::SireMove::InternalMove::*assign_function_type)( ::SireMove::InternalMove const & ) ;
            assign_function_type assign_function_value( &::SireMove::InternalMove::operator= );
            
            InternalMove_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InternalMove_exposer.def( bp::self == bp::self );
        { //::SireMove::InternalMove::sampler
        
            typedef ::SireMove::Sampler const & ( ::SireMove::InternalMove::*sampler_function_type)(  ) const;
            sampler_function_type sampler_function_value( &::SireMove::InternalMove::sampler );
            
            InternalMove_exposer.def( 
                "sampler"
                , sampler_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the sampler used to sample molecules to move" );
        
        }
        { //::SireMove::InternalMove::setCenterOfMolecule
        
            typedef void ( ::SireMove::InternalMove::*setCenterOfMolecule_function_type)( ::SireMove::GetPoint const & ) ;
            setCenterOfMolecule_function_type setCenterOfMolecule_function_value( &::SireMove::InternalMove::setCenterOfMolecule );
            
            InternalMove_exposer.def( 
                "setCenterOfMolecule"
                , setCenterOfMolecule_function_value
                , ( bp::arg("center_function") )
                , bp::release_gil_policy()
                , "Set the function used to find the center of the molecule" );
        
        }
        { //::SireMove::InternalMove::setFlexibilityProperty
        
            typedef void ( ::SireMove::InternalMove::*setFlexibilityProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setFlexibilityProperty_function_type setFlexibilityProperty_function_value( &::SireMove::InternalMove::setFlexibilityProperty );
            
            InternalMove_exposer.def( 
                "setFlexibilityProperty"
                , setFlexibilityProperty_function_value
                , ( bp::arg("property") )
                , bp::release_gil_policy()
                , "Set the name of the property used to find the flexibility of each molecule" );
        
        }
        { //::SireMove::InternalMove::setGenerator
        
            typedef void ( ::SireMove::InternalMove::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::InternalMove::setGenerator );
            
            InternalMove_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") )
                , bp::release_gil_policy()
                , "Set the random number generator used to generate the random\nnumber used for this move" );
        
        }
        { //::SireMove::InternalMove::setSampler
        
            typedef void ( ::SireMove::InternalMove::*setSampler_function_type)( ::SireMove::Sampler const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::InternalMove::setSampler );
            
            InternalMove_exposer.def( 
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("sampler") )
                , bp::release_gil_policy()
                , "Set the sampler used to sample molecules for this move" );
        
        }
        { //::SireMove::InternalMove::setSampler
        
            typedef void ( ::SireMove::InternalMove::*setSampler_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::InternalMove::setSampler );
            
            InternalMove_exposer.def( 
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "Set the sampler so that it draws molecules uniformly from the\nmolecule group molgroup" );
        
        }
        { //::SireMove::InternalMove::toString
        
            typedef ::QString ( ::SireMove::InternalMove::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::InternalMove::toString );
            
            InternalMove_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );
        
        }
        { //::SireMove::InternalMove::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::InternalMove::typeName );
            
            InternalMove_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InternalMove_exposer.staticmethod( "typeName" );
        InternalMove_exposer.def( "__copy__", &__copy__);
        InternalMove_exposer.def( "__deepcopy__", &__copy__);
        InternalMove_exposer.def( "clone", &__copy__);
        InternalMove_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::InternalMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalMove_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::InternalMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalMove_exposer.def_pickle(sire_pickle_suite< ::SireMove::InternalMove >());
        InternalMove_exposer.def( "__str__", &__str__< ::SireMove::InternalMove > );
        InternalMove_exposer.def( "__repr__", &__str__< ::SireMove::InternalMove > );
    }

}
