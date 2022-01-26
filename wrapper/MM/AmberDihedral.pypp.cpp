// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberDihedral.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireCAS/expression.h"

#include "SireCAS/sum.h"

#include "SireCAS/symbol.h"

#include "SireCAS/trigfuncs.h"

#include "SireCAS/values.h"

#include "SireError/errors.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/gromacsparams.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "amberparams.h"

#include <QDebug>

#include "amberparams.h"

SireMM::AmberDihedral __copy__(const SireMM::AmberDihedral &other){ return SireMM::AmberDihedral(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberDihedral_class(){

    { //::SireMM::AmberDihedral
        typedef bp::class_< SireMM::AmberDihedral > AmberDihedral_exposer_t;
        AmberDihedral_exposer_t AmberDihedral_exposer = AmberDihedral_exposer_t( "AmberDihedral", "This simple class holds Amber dihedral or improper parameter", bp::init< >("") );
        bp::scope AmberDihedral_scope( AmberDihedral_exposer );
        AmberDihedral_exposer.def( bp::init< SireMM::AmberDihPart >(( bp::arg("part") ), "") );
        AmberDihedral_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Symbol const &, bp::optional< bool > >(( bp::arg("f"), bp::arg("PHI"), bp::arg("test_ryckaert_bellemans")=(bool)(true) ), "") );
        AmberDihedral_exposer.def( bp::init< SireMM::AmberDihedral const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberDihedral::energy
        
            typedef double ( ::SireMM::AmberDihedral::*energy_function_type)( double ) const;
            energy_function_type energy_function_value( &::SireMM::AmberDihedral::energy );
            
            AmberDihedral_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("phi") )
                , "" );
        
        }
        { //::SireMM::AmberDihedral::hash
        
            typedef ::uint ( ::SireMM::AmberDihedral::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMM::AmberDihedral::hash );
            
            AmberDihedral_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        AmberDihedral_exposer.def( bp::self != bp::self );
        AmberDihedral_exposer.def( bp::self + bp::other< SireMM::AmberDihPart >() );
        { //::SireMM::AmberDihedral::operator=
        
            typedef ::SireMM::AmberDihedral & ( ::SireMM::AmberDihedral::*assign_function_type)( ::SireMM::AmberDihedral const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberDihedral::operator= );
            
            AmberDihedral_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberDihedral_exposer.def( bp::self == bp::self );
        { //::SireMM::AmberDihedral::operator[]
        
            typedef ::SireMM::AmberDihPart ( ::SireMM::AmberDihedral::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberDihedral::operator[] );
            
            AmberDihedral_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::AmberDihedral::terms
        
            typedef ::QVector< SireMM::AmberDihPart > ( ::SireMM::AmberDihedral::*terms_function_type)(  ) const;
            terms_function_type terms_function_value( &::SireMM::AmberDihedral::terms );
            
            AmberDihedral_exposer.def( 
                "terms"
                , terms_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihedral::toExpression
        
            typedef ::SireCAS::Expression ( ::SireMM::AmberDihedral::*toExpression_function_type)( ::SireCAS::Symbol const & ) const;
            toExpression_function_type toExpression_function_value( &::SireMM::AmberDihedral::toExpression );
            
            AmberDihedral_exposer.def( 
                "toExpression"
                , toExpression_function_value
                , ( bp::arg("PHI") )
                , "" );
        
        }
        { //::SireMM::AmberDihedral::toString
        
            typedef ::QString ( ::SireMM::AmberDihedral::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberDihedral::toString );
            
            AmberDihedral_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihedral::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::AmberDihedral::typeName );
            
            AmberDihedral_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihedral::what
        
            typedef char const * ( ::SireMM::AmberDihedral::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::AmberDihedral::what );
            
            AmberDihedral_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        AmberDihedral_exposer.staticmethod( "typeName" );
        AmberDihedral_exposer.def( "__copy__", &__copy__);
        AmberDihedral_exposer.def( "__deepcopy__", &__copy__);
        AmberDihedral_exposer.def( "clone", &__copy__);
        AmberDihedral_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberDihedral >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberDihedral_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberDihedral >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberDihedral_exposer.def_pickle(sire_pickle_suite< ::SireMM::AmberDihedral >());
        AmberDihedral_exposer.def( "__str__", &__str__< ::SireMM::AmberDihedral > );
        AmberDihedral_exposer.def( "__repr__", &__str__< ::SireMM::AmberDihedral > );
        AmberDihedral_exposer.def( "__hash__", &::SireMM::AmberDihedral::hash );
    }

}
