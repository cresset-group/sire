// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InternalMoveSingle.pypp.hpp"

namespace bp = boost::python;

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

#include "internalmovesingle.h"

#include <QDebug>

#include <QTime>

#include "internalmovesingle.h"

SireMove::InternalMoveSingle __copy__(const SireMove::InternalMoveSingle &other){ return SireMove::InternalMoveSingle(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_InternalMoveSingle_class(){

    { //::SireMove::InternalMoveSingle
        typedef bp::class_< SireMove::InternalMoveSingle, bp::bases< SireMove::MonteCarlo, SireMove::Move, SireBase::Property > > InternalMoveSingle_exposer_t;
        InternalMoveSingle_exposer_t InternalMoveSingle_exposer = InternalMoveSingle_exposer_t( "InternalMoveSingle", "This class implements an intramolecular Monte Carlo move that uses\nthe move() method to perturb intramolecular degrees of freedom and\nthat may be applied to a random molecule (or part of a molecule)\nwithin a MoleculeGroup. It is based on the ZMatMove class.\n\nAuthor: Julien Michel\n", bp::init< bp::optional< SireBase::PropertyMap const & > >(( bp::arg("map")=SireBase::PropertyMap() ), "Null constructor") );
        bp::scope InternalMoveSingle_scope( InternalMoveSingle_exposer );
        InternalMoveSingle_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the internal move for the passed group of molecules") );
        InternalMoveSingle_exposer.def( bp::init< SireMove::Sampler const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("sampler"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the mover move that samples molecules from the\npassed sampler") );
        InternalMoveSingle_exposer.def( bp::init< SireMove::InternalMoveSingle const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::InternalMoveSingle::flexibilityProperty

            typedef ::SireBase::PropertyName const & ( ::SireMove::InternalMoveSingle::*flexibilityProperty_function_type)(  ) const;
            flexibilityProperty_function_type flexibilityProperty_function_value( &::SireMove::InternalMoveSingle::flexibilityProperty );

            InternalMoveSingle_exposer.def(
                "flexibilityProperty"
                , flexibilityProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the property used to find the flexibility of each molecule" );

        }
        { //::SireMove::InternalMoveSingle::moleculeGroup

            typedef ::SireMol::MoleculeGroup const & ( ::SireMove::InternalMoveSingle::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireMove::InternalMoveSingle::moleculeGroup );

            InternalMoveSingle_exposer.def(
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group that is sampled for this move" );

        }
        { //::SireMove::InternalMoveSingle::move

            typedef void ( ::SireMove::InternalMoveSingle::*move_function_type)( ::SireSystem::System &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::InternalMoveSingle::move );

            InternalMoveSingle_exposer.def(
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats")=(bool)(true) )
                , "Actually perform nmoves moves of the molecules in the\nsystem system, optionally recording simulation statistics\nif record_stats is true" );

        }
        InternalMoveSingle_exposer.def( bp::self != bp::self );
        { //::SireMove::InternalMoveSingle::operator=

            typedef ::SireMove::InternalMoveSingle & ( ::SireMove::InternalMoveSingle::*assign_function_type)( ::SireMove::InternalMoveSingle const & ) ;
            assign_function_type assign_function_value( &::SireMove::InternalMoveSingle::operator= );

            InternalMoveSingle_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        InternalMoveSingle_exposer.def( bp::self == bp::self );
        { //::SireMove::InternalMoveSingle::sampler

            typedef ::SireMove::Sampler const & ( ::SireMove::InternalMoveSingle::*sampler_function_type)(  ) const;
            sampler_function_type sampler_function_value( &::SireMove::InternalMoveSingle::sampler );

            InternalMoveSingle_exposer.def(
                "sampler"
                , sampler_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the sampler used to sample molecules to move" );

        }
        { //::SireMove::InternalMoveSingle::setFlexibilityProperty

            typedef void ( ::SireMove::InternalMoveSingle::*setFlexibilityProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setFlexibilityProperty_function_type setFlexibilityProperty_function_value( &::SireMove::InternalMoveSingle::setFlexibilityProperty );

            InternalMoveSingle_exposer.def(
                "setFlexibilityProperty"
                , setFlexibilityProperty_function_value
                , ( bp::arg("property") )
                , bp::release_gil_policy()
                , "Set the name of the property used to find the flexibility of each molecule" );

        }
        { //::SireMove::InternalMoveSingle::setGenerator

            typedef void ( ::SireMove::InternalMoveSingle::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::InternalMoveSingle::setGenerator );

            InternalMoveSingle_exposer.def(
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") )
                , bp::release_gil_policy()
                , "Set the random number generator used to generate the random\nnumber used for this move" );

        }
        { //::SireMove::InternalMoveSingle::setSampler

            typedef void ( ::SireMove::InternalMoveSingle::*setSampler_function_type)( ::SireMove::Sampler const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::InternalMoveSingle::setSampler );

            InternalMoveSingle_exposer.def(
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("sampler") )
                , bp::release_gil_policy()
                , "Set the sampler used to sample molecules for this move" );

        }
        { //::SireMove::InternalMoveSingle::setSampler

            typedef void ( ::SireMove::InternalMoveSingle::*setSampler_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::InternalMoveSingle::setSampler );

            InternalMoveSingle_exposer.def(
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "Set the sampler so that it draws molecules uniformly from the\nmolecule group molgroup" );

        }
        { //::SireMove::InternalMoveSingle::setSynchronisedCoordinates

            typedef void ( ::SireMove::InternalMoveSingle::*setSynchronisedCoordinates_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setSynchronisedCoordinates_function_type setSynchronisedCoordinates_function_value( &::SireMove::InternalMoveSingle::setSynchronisedCoordinates );

            InternalMoveSingle_exposer.def(
                "setSynchronisedCoordinates"
                , setSynchronisedCoordinates_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMove::InternalMoveSingle::synchronisedMols

            typedef ::SireMol::MoleculeGroup const & ( ::SireMove::InternalMoveSingle::*synchronisedMols_function_type)(  ) const;
            synchronisedMols_function_type synchronisedMols_function_value( &::SireMove::InternalMoveSingle::synchronisedMols );

            InternalMoveSingle_exposer.def(
                "synchronisedMols"
                , synchronisedMols_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMove::InternalMoveSingle::toString

            typedef ::QString ( ::SireMove::InternalMoveSingle::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::InternalMoveSingle::toString );

            InternalMoveSingle_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );

        }
        { //::SireMove::InternalMoveSingle::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::InternalMoveSingle::typeName );

            InternalMoveSingle_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        InternalMoveSingle_exposer.staticmethod( "typeName" );
        InternalMoveSingle_exposer.def( "__copy__", &__copy__);
        InternalMoveSingle_exposer.def( "__deepcopy__", &__copy__);
        InternalMoveSingle_exposer.def( "clone", &__copy__);
        InternalMoveSingle_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::InternalMoveSingle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalMoveSingle_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::InternalMoveSingle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalMoveSingle_exposer.def_pickle(sire_pickle_suite< ::SireMove::InternalMoveSingle >());
        InternalMoveSingle_exposer.def( "__str__", &__str__< ::SireMove::InternalMoveSingle > );
        InternalMoveSingle_exposer.def( "__repr__", &__str__< ::SireMove::InternalMoveSingle > );
    }

}
