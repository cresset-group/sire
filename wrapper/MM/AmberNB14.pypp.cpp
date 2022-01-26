// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberNB14.pypp.hpp"

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

SireMM::AmberNB14 __copy__(const SireMM::AmberNB14 &other){ return SireMM::AmberNB14(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberNB14_class(){

    { //::SireMM::AmberNB14
        typedef bp::class_< SireMM::AmberNB14 > AmberNB14_exposer_t;
        AmberNB14_exposer_t AmberNB14_exposer = AmberNB14_exposer_t( "AmberNB14", "This simple class holds Amber parameters for a 1-4 scale factor", bp::init< bp::optional< double, double > >(( bp::arg("cscl")=0, bp::arg("ljscl")=0 ), "") );
        bp::scope AmberNB14_scope( AmberNB14_exposer );
        AmberNB14_exposer.def( bp::init< SireMM::AmberNB14 const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberNB14::cscl
        
            typedef double ( ::SireMM::AmberNB14::*cscl_function_type)(  ) const;
            cscl_function_type cscl_function_value( &::SireMM::AmberNB14::cscl );
            
            AmberNB14_exposer.def( 
                "cscl"
                , cscl_function_value
                , "" );
        
        }
        { //::SireMM::AmberNB14::ljscl
        
            typedef double ( ::SireMM::AmberNB14::*ljscl_function_type)(  ) const;
            ljscl_function_type ljscl_function_value( &::SireMM::AmberNB14::ljscl );
            
            AmberNB14_exposer.def( 
                "ljscl"
                , ljscl_function_value
                , "" );
        
        }
        AmberNB14_exposer.def( bp::self != bp::self );
        AmberNB14_exposer.def( bp::self < bp::self );
        AmberNB14_exposer.def( bp::self <= bp::self );
        { //::SireMM::AmberNB14::operator=
        
            typedef ::SireMM::AmberNB14 & ( ::SireMM::AmberNB14::*assign_function_type)( ::SireMM::AmberNB14 const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberNB14::operator= );
            
            AmberNB14_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberNB14_exposer.def( bp::self == bp::self );
        AmberNB14_exposer.def( bp::self > bp::self );
        AmberNB14_exposer.def( bp::self >= bp::self );
        { //::SireMM::AmberNB14::operator[]
        
            typedef double ( ::SireMM::AmberNB14::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberNB14::operator[] );
            
            AmberNB14_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::AmberNB14::toScaleFactor
        
            typedef ::SireMM::CLJScaleFactor ( ::SireMM::AmberNB14::*toScaleFactor_function_type)(  ) const;
            toScaleFactor_function_type toScaleFactor_function_value( &::SireMM::AmberNB14::toScaleFactor );
            
            AmberNB14_exposer.def( 
                "toScaleFactor"
                , toScaleFactor_function_value
                , "Return the value converted to a CLJScaleFactor" );
        
        }
        { //::SireMM::AmberNB14::toString
        
            typedef ::QString ( ::SireMM::AmberNB14::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberNB14::toString );
            
            AmberNB14_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMM::AmberNB14::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::AmberNB14::typeName );
            
            AmberNB14_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::AmberNB14::what
        
            typedef char const * ( ::SireMM::AmberNB14::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::AmberNB14::what );
            
            AmberNB14_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        AmberNB14_exposer.staticmethod( "typeName" );
        AmberNB14_exposer.def( "__copy__", &__copy__);
        AmberNB14_exposer.def( "__deepcopy__", &__copy__);
        AmberNB14_exposer.def( "clone", &__copy__);
        AmberNB14_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberNB14 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberNB14_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberNB14 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberNB14_exposer.def_pickle(sire_pickle_suite< ::SireMM::AmberNB14 >());
        AmberNB14_exposer.def( "__str__", &__str__< ::SireMM::AmberNB14 > );
        AmberNB14_exposer.def( "__repr__", &__str__< ::SireMM::AmberNB14 > );
    }

}
