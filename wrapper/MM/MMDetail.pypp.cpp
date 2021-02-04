// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MMDetail.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/propertylist.h"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "mmdetail.h"

#include "mmdetail.h"

SireMM::MMDetail __copy__(const SireMM::MMDetail &other){ return SireMM::MMDetail(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MMDetail_class(){

    { //::SireMM::MMDetail
        typedef bp::class_< SireMM::MMDetail, bp::bases< SireFF::FFDetail, SireBase::Property > > MMDetail_exposer_t;
        MMDetail_exposer_t MMDetail_exposer = MMDetail_exposer_t( "MMDetail", "This class holds most of the data the describes different types\nof molecular mechanics forcefields, e.g. Amber FF99, OPLS etc.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope MMDetail_scope( MMDetail_exposer );
        MMDetail_exposer.def( bp::init< QString, QString, double, double, QString, QString, QString, QString, QString >(( bp::arg("name"), bp::arg("combining_rules"), bp::arg("scale14elec"), bp::arg("scale14vdw"), bp::arg("elecstyle"), bp::arg("vdwstyle"), bp::arg("bondstyle"), bp::arg("anglestyle"), bp::arg("dihedralstyle") ), "Construct passing in all of the required values") );
        MMDetail_exposer.def( bp::init< SireMM::MMDetail const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::MMDetail::angleStyle
        
            typedef ::QString ( ::SireMM::MMDetail::*angleStyle_function_type)(  ) const;
            angleStyle_function_type angleStyle_function_value( &::SireMM::MMDetail::angleStyle );
            
            MMDetail_exposer.def( 
                "angleStyle"
                , angleStyle_function_value
                , "Return the angle model used by this forcefield" );
        
        }
        { //::SireMM::MMDetail::bondStyle
        
            typedef ::QString ( ::SireMM::MMDetail::*bondStyle_function_type)(  ) const;
            bondStyle_function_type bondStyle_function_value( &::SireMM::MMDetail::bondStyle );
            
            MMDetail_exposer.def( 
                "bondStyle"
                , bondStyle_function_value
                , "Return the bond model used by this forcefield" );
        
        }
        { //::SireMM::MMDetail::combiningRules
        
            typedef ::QString ( ::SireMM::MMDetail::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::MMDetail::combiningRules );
            
            MMDetail_exposer.def( 
                "combiningRules"
                , combiningRules_function_value
                , "Return the combining rules for this forcefield" );
        
        }
        { //::SireMM::MMDetail::dihedralStyle
        
            typedef ::QString ( ::SireMM::MMDetail::*dihedralStyle_function_type)(  ) const;
            dihedralStyle_function_type dihedralStyle_function_value( &::SireMM::MMDetail::dihedralStyle );
            
            MMDetail_exposer.def( 
                "dihedralStyle"
                , dihedralStyle_function_value
                , "Return the dihedral model uses by this forcefield" );
        
        }
        { //::SireMM::MMDetail::electrostatic14ScaleFactor
        
            typedef double ( ::SireMM::MMDetail::*electrostatic14ScaleFactor_function_type)(  ) const;
            electrostatic14ScaleFactor_function_type electrostatic14ScaleFactor_function_value( &::SireMM::MMDetail::electrostatic14ScaleFactor );
            
            MMDetail_exposer.def( 
                "electrostatic14ScaleFactor"
                , electrostatic14ScaleFactor_function_value
                , "Return the electrostatic 1-4 scale factor" );
        
        }
        { //::SireMM::MMDetail::electrostaticStyle
        
            typedef ::QString ( ::SireMM::MMDetail::*electrostaticStyle_function_type)(  ) const;
            electrostaticStyle_function_type electrostaticStyle_function_value( &::SireMM::MMDetail::electrostaticStyle );
            
            MMDetail_exposer.def( 
                "electrostaticStyle"
                , electrostaticStyle_function_value
                , "Return the electrostatic model used by this forcefield" );
        
        }
        { //::SireMM::MMDetail::guessFrom
        
            typedef ::SireMM::MMDetail ( *guessFrom_function_type )( ::QString,::QString,::QString,double,double,::QString,::QString,::QString );
            guessFrom_function_type guessFrom_function_value( &::SireMM::MMDetail::guessFrom );
            
            MMDetail_exposer.def( 
                "guessFrom"
                , guessFrom_function_value
                , ( bp::arg("combrule"), bp::arg("elecstyle"), bp::arg("vdwstyle"), bp::arg("elec14"), bp::arg("vdw14"), bp::arg("bondstyle"), bp::arg("anglestyle"), bp::arg("dihedralstyle") )
                , "Function used to guess the forcefield from the passed set of conditions.\nThis returns a null MMDetail object if we cant guess" );
        
        }
        { //::SireMM::MMDetail::isAmberStyle
        
            typedef bool ( ::SireMM::MMDetail::*isAmberStyle_function_type)(  ) const;
            isAmberStyle_function_type isAmberStyle_function_value( &::SireMM::MMDetail::isAmberStyle );
            
            MMDetail_exposer.def( 
                "isAmberStyle"
                , isAmberStyle_function_value
                , "Return whether or not this is an Amber-style forcefield. An Amber-style\nforcefield is one that uses only coulombs law between point charges for electrostatics,\nLJ with arithmetic combining rules for vdw, harmonic bonds and angles and a\nset of cosine functions for dihedrals" );
        
        }
        { //::SireMM::MMDetail::isCompatibleWith
        
            typedef bool ( ::SireMM::MMDetail::*isCompatibleWith_function_type)( ::SireFF::FFDetail const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMM::MMDetail::isCompatibleWith );
            
            MMDetail_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("other") )
                , "Return whether or not this forcefield is compatible with other" );
        
        }
        { //::SireMM::MMDetail::isOPLS
        
            typedef bool ( ::SireMM::MMDetail::*isOPLS_function_type)(  ) const;
            isOPLS_function_type isOPLS_function_value( &::SireMM::MMDetail::isOPLS );
            
            MMDetail_exposer.def( 
                "isOPLS"
                , isOPLS_function_value
                , "Return whether or not this is a GROMACS OPLS force field." );
        
        }
        MMDetail_exposer.def( bp::self != bp::self );
        { //::SireMM::MMDetail::operator=
        
            typedef ::SireMM::MMDetail & ( ::SireMM::MMDetail::*assign_function_type)( ::SireMM::MMDetail const & ) ;
            assign_function_type assign_function_value( &::SireMM::MMDetail::operator= );
            
            MMDetail_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MMDetail_exposer.def( bp::self == bp::self );
        { //::SireMM::MMDetail::toString
        
            typedef ::QString ( ::SireMM::MMDetail::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::MMDetail::toString );
            
            MMDetail_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string form of this forcefield" );
        
        }
        { //::SireMM::MMDetail::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::MMDetail::typeName );
            
            MMDetail_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::MMDetail::usesArithmeticCombiningRules
        
            typedef bool ( ::SireMM::MMDetail::*usesArithmeticCombiningRules_function_type)(  ) const;
            usesArithmeticCombiningRules_function_type usesArithmeticCombiningRules_function_value( &::SireMM::MMDetail::usesArithmeticCombiningRules );
            
            MMDetail_exposer.def( 
                "usesArithmeticCombiningRules"
                , usesArithmeticCombiningRules_function_value
                , "Return whether or not this forcefield uses arithmetic combining rules" );
        
        }
        { //::SireMM::MMDetail::usesBuckinghamTerm
        
            typedef bool ( ::SireMM::MMDetail::*usesBuckinghamTerm_function_type)(  ) const;
            usesBuckinghamTerm_function_type usesBuckinghamTerm_function_value( &::SireMM::MMDetail::usesBuckinghamTerm );
            
            MMDetail_exposer.def( 
                "usesBuckinghamTerm"
                , usesBuckinghamTerm_function_value
                , "Return whether or not this forcefield uses the Buckingham vdw model" );
        
        }
        { //::SireMM::MMDetail::usesCosineDihedrals
        
            typedef bool ( ::SireMM::MMDetail::*usesCosineDihedrals_function_type)(  ) const;
            usesCosineDihedrals_function_type usesCosineDihedrals_function_value( &::SireMM::MMDetail::usesCosineDihedrals );
            
            MMDetail_exposer.def( 
                "usesCosineDihedrals"
                , usesCosineDihedrals_function_value
                , "Return whether or not this forcefield uses cosine-series dihedrals" );
        
        }
        { //::SireMM::MMDetail::usesCoulombCharges
        
            typedef bool ( ::SireMM::MMDetail::*usesCoulombCharges_function_type)(  ) const;
            usesCoulombCharges_function_type usesCoulombCharges_function_value( &::SireMM::MMDetail::usesCoulombCharges );
            
            MMDetail_exposer.def( 
                "usesCoulombCharges"
                , usesCoulombCharges_function_value
                , "Return whether or not this forcefield uses coulomb charges" );
        
        }
        { //::SireMM::MMDetail::usesGeometricCombiningRules
        
            typedef bool ( ::SireMM::MMDetail::*usesGeometricCombiningRules_function_type)(  ) const;
            usesGeometricCombiningRules_function_type usesGeometricCombiningRules_function_value( &::SireMM::MMDetail::usesGeometricCombiningRules );
            
            MMDetail_exposer.def( 
                "usesGeometricCombiningRules"
                , usesGeometricCombiningRules_function_value
                , "Return whether or not this forcefield uses arithmetic combining rules" );
        
        }
        { //::SireMM::MMDetail::usesHarmonicAngles
        
            typedef bool ( ::SireMM::MMDetail::*usesHarmonicAngles_function_type)(  ) const;
            usesHarmonicAngles_function_type usesHarmonicAngles_function_value( &::SireMM::MMDetail::usesHarmonicAngles );
            
            MMDetail_exposer.def( 
                "usesHarmonicAngles"
                , usesHarmonicAngles_function_value
                , "Return whether or not this forcefield uses harmonic angles" );
        
        }
        { //::SireMM::MMDetail::usesHarmonicBonds
        
            typedef bool ( ::SireMM::MMDetail::*usesHarmonicBonds_function_type)(  ) const;
            usesHarmonicBonds_function_type usesHarmonicBonds_function_value( &::SireMM::MMDetail::usesHarmonicBonds );
            
            MMDetail_exposer.def( 
                "usesHarmonicBonds"
                , usesHarmonicBonds_function_value
                , "Return whether or not this forcefield uses harmonic bonds" );
        
        }
        { //::SireMM::MMDetail::usesLJTerm
        
            typedef bool ( ::SireMM::MMDetail::*usesLJTerm_function_type)(  ) const;
            usesLJTerm_function_type usesLJTerm_function_value( &::SireMM::MMDetail::usesLJTerm );
            
            MMDetail_exposer.def( 
                "usesLJTerm"
                , usesLJTerm_function_value
                , "Return whether or not this forcefield uses the Lennard Jones vdw model" );
        
        }
        { //::SireMM::MMDetail::vdw14ScaleFactor
        
            typedef double ( ::SireMM::MMDetail::*vdw14ScaleFactor_function_type)(  ) const;
            vdw14ScaleFactor_function_type vdw14ScaleFactor_function_value( &::SireMM::MMDetail::vdw14ScaleFactor );
            
            MMDetail_exposer.def( 
                "vdw14ScaleFactor"
                , vdw14ScaleFactor_function_value
                , "Return the vdw 1-4 scale factor" );
        
        }
        { //::SireMM::MMDetail::vdwStyle
        
            typedef ::QString ( ::SireMM::MMDetail::*vdwStyle_function_type)(  ) const;
            vdwStyle_function_type vdwStyle_function_value( &::SireMM::MMDetail::vdwStyle );
            
            MMDetail_exposer.def( 
                "vdwStyle"
                , vdwStyle_function_value
                , "Return the vdw model used by this forcefield" );
        
        }
        { //::SireMM::MMDetail::what
        
            typedef char const * ( ::SireMM::MMDetail::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::MMDetail::what );
            
            MMDetail_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MMDetail_exposer.staticmethod( "guessFrom" );
        MMDetail_exposer.staticmethod( "typeName" );
        MMDetail_exposer.def( "__copy__", &__copy__);
        MMDetail_exposer.def( "__deepcopy__", &__copy__);
        MMDetail_exposer.def( "clone", &__copy__);
        MMDetail_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::MMDetail >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MMDetail_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::MMDetail >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MMDetail_exposer.def( "__str__", &__str__< ::SireMM::MMDetail > );
        MMDetail_exposer.def( "__repr__", &__str__< ::SireMM::MMDetail > );
    }

}
