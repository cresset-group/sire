// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "AbsFromMass.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atomselection.h"

#include "core.h"

#include "editor.hpp"

#include "evaluator.h"

#include "moleculedata.h"

#include "moleculeview.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "weightfunction.h"

#include "weightfunction.h"

SireMol::AbsFromMass __copy__(const SireMol::AbsFromMass &other){ return SireMol::AbsFromMass(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_AbsFromMass_class(){

    { //::SireMol::AbsFromMass
        typedef bp::class_< SireMol::AbsFromMass, bp::bases< SireMol::WeightFunction, SireBase::Property > > AbsFromMass_exposer_t;
        AbsFromMass_exposer_t AbsFromMass_exposer = AbsFromMass_exposer_t( "AbsFromMass", "This class calculates the weight by assigning all of the weight to\nthe group with the most mass\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope AbsFromMass_scope( AbsFromMass_exposer );
        AbsFromMass_exposer.def( bp::init< SireMol::AbsFromMass const & >(( bp::arg("other") ), "") );
        AbsFromMass_exposer.def( bp::self != bp::self );
        { //::SireMol::AbsFromMass::operator()
        
            typedef double ( ::SireMol::AbsFromMass::*__call___function_type)( ::SireMol::MoleculeData const &,::SireMol::AtomSelection const &,::SireMol::AtomSelection const &,::SireBase::PropertyMap const & ) const;
            __call___function_type __call___function_value( &::SireMol::AbsFromMass::operator() );
            
            AbsFromMass_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("moldata"), bp::arg("group0"), bp::arg("group1"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::AbsFromMass::operator()
        
            typedef double ( ::SireMol::AbsFromMass::*__call___function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            __call___function_type __call___function_value( &::SireMol::AbsFromMass::operator() );
            
            AbsFromMass_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("view0"), bp::arg("map0"), bp::arg("view1"), bp::arg("map1") )
                , "" );
        
        }
        { //::SireMol::AbsFromMass::operator=
        
            typedef ::SireMol::AbsFromMass & ( ::SireMol::AbsFromMass::*assign_function_type)( ::SireMol::AbsFromMass const & ) ;
            assign_function_type assign_function_value( &::SireMol::AbsFromMass::operator= );
            
            AbsFromMass_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("arg0") )
                , bp::return_self< >()
                , "" );
        
        }
        AbsFromMass_exposer.def( bp::self == bp::self );
        { //::SireMol::AbsFromMass::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AbsFromMass::typeName );
            
            AbsFromMass_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AbsFromMass_exposer.staticmethod( "typeName" );
        AbsFromMass_exposer.def( "__copy__", &__copy__);
        AbsFromMass_exposer.def( "__deepcopy__", &__copy__);
        AbsFromMass_exposer.def( "clone", &__copy__);
        AbsFromMass_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AbsFromMass >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AbsFromMass_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AbsFromMass >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AbsFromMass_exposer.def_pickle(sire_pickle_suite< ::SireMol::AbsFromMass >());
        AbsFromMass_exposer.def( "__str__", &__str__< ::SireMol::AbsFromMass > );
        AbsFromMass_exposer.def( "__repr__", &__str__< ::SireMol::AbsFromMass > );
    }

}
