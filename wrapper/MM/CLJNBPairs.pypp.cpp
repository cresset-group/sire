// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJNBPairs.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireMol/moleculeinfo.h"

#include "SireStream/datastream.h"

#include "cljnbpairs.h"

#include "cljnbpairs.h"

SireMM::CLJNBPairs __copy__(const SireMM::CLJNBPairs &other){ return SireMM::CLJNBPairs(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CLJNBPairs_class(){

    { //::SireMM::CLJNBPairs
        typedef bp::class_< SireMM::CLJNBPairs, bp::bases< SireMM::AtomPairs<SireMM::CLJScaleFactor>, SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > CLJNBPairs_exposer_t;
        CLJNBPairs_exposer_t CLJNBPairs_exposer = CLJNBPairs_exposer_t( "CLJNBPairs", "This class holds all of the non-bonded scale factors that are used\nto scale the intramolecular atom-atom coulomb and Lennard-Jones\ninteractions between pairs of atoms, e.g. for most MM forcefields,\nthe scale factors for 1-1, 1-2 and 1-3 pairs are zero, the\n1-4 pairs are scaled by a coulomb and LJ factor (e.g. 0.5 for OPLS)\nand the 1-5 and above pairs are not scaled (i.e. the coulomb and\nLJ factors equal 1)\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope CLJNBPairs_scope( CLJNBPairs_exposer );
        CLJNBPairs_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireMM::CLJScaleFactor const & > >(( bp::arg("molview"), bp::arg("default_scale")=SireMM::CLJScaleFactor(1, 1) ), "Construct for the molecule viewed in molview") );
        CLJNBPairs_exposer.def( bp::init< SireMol::MoleculeInfoData const &, bp::optional< SireMM::CLJScaleFactor const & > >(( bp::arg("molinfo"), bp::arg("default_scale")=SireMM::CLJScaleFactor(1, 1) ), "Construct, using default_scale for all of the atom-atom\ninteractions in the molecule molinfo") );
        CLJNBPairs_exposer.def( bp::init< SireMol::MoleculeInfo const &, bp::optional< SireMM::CLJScaleFactor const & > >(( bp::arg("molinfo"), bp::arg("default_scale")=SireMM::CLJScaleFactor(1, 1) ), "Construct, using default_scale for all of the atom-atom\ninteractions in the molecule molinfo") );
        CLJNBPairs_exposer.def( bp::init< SireMol::Connectivity const &, SireMM::CLJScaleFactor const & >(( bp::arg("connectivity"), bp::arg("scale14") ), "Construct, automatically setting the bonded pairs to 0 (bond and angled atoms),\nnon-bonded pairs to 1, and 1-4 pairs to scale14") );
        CLJNBPairs_exposer.def( bp::init< SireMM::CLJNBPairs const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJNBPairs::excludedAtoms
        
            typedef ::QVector< SireMol::AtomIdx > ( ::SireMM::CLJNBPairs::*excludedAtoms_function_type)(  ) const;
            excludedAtoms_function_type excludedAtoms_function_value( &::SireMM::CLJNBPairs::excludedAtoms );
            
            CLJNBPairs_exposer.def( 
                "excludedAtoms"
                , excludedAtoms_function_value
                , bp::release_gil_policy()
                , "Return the IDs of atoms that dont interact with any other atom in\nthe intramolecular non-bonded calculation (their scale factors to all\nother atoms is zero)" );
        
        }
        { //::SireMM::CLJNBPairs::excludedAtoms
        
            typedef ::QVector< SireMol::AtomIdx > ( ::SireMM::CLJNBPairs::*excludedAtoms_function_type)( ::SireMol::AtomID const & ) const;
            excludedAtoms_function_type excludedAtoms_function_value( &::SireMM::CLJNBPairs::excludedAtoms );
            
            CLJNBPairs_exposer.def( 
                "excludedAtoms"
                , excludedAtoms_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Return the excluded atoms for the atom matching ID atomid. This\nreturns all of the atoms for which the interaction with atomid is\nequal to zero" );
        
        }
        { //::SireMM::CLJNBPairs::nExcludedAtoms
        
            typedef int ( ::SireMM::CLJNBPairs::*nExcludedAtoms_function_type)(  ) const;
            nExcludedAtoms_function_type nExcludedAtoms_function_value( &::SireMM::CLJNBPairs::nExcludedAtoms );
            
            CLJNBPairs_exposer.def( 
                "nExcludedAtoms"
                , nExcludedAtoms_function_value
                , bp::release_gil_policy()
                , "Return the total number of atoms that are excluded from the internal\nnon-bonded calculation. These are atoms that do not interact with any\nother atoms (e.g. because their nbscl factors to all other atoms in\nthe molecule are zero)" );
        
        }
        { //::SireMM::CLJNBPairs::nExcludedAtoms
        
            typedef int ( ::SireMM::CLJNBPairs::*nExcludedAtoms_function_type)( ::SireMol::AtomID const & ) const;
            nExcludedAtoms_function_type nExcludedAtoms_function_value( &::SireMM::CLJNBPairs::nExcludedAtoms );
            
            CLJNBPairs_exposer.def( 
                "nExcludedAtoms"
                , nExcludedAtoms_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Return the number of excluded atoms for the atom matching ID atomid.\nThis returns the number of atoms that do not interact with this atom\nusing a non-bonded potential" );
        
        }
        CLJNBPairs_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJNBPairs::operator=
        
            typedef ::SireMM::CLJNBPairs & ( ::SireMM::CLJNBPairs::*assign_function_type)( ::SireMM::CLJNBPairs const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJNBPairs::operator= );
            
            CLJNBPairs_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CLJNBPairs_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJNBPairs::toString
        
            typedef ::QString ( ::SireMM::CLJNBPairs::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJNBPairs::toString );
            
            CLJNBPairs_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJNBPairs::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJNBPairs::typeName );
            
            CLJNBPairs_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CLJNBPairs_exposer.staticmethod( "typeName" );
        CLJNBPairs_exposer.def( "__copy__", &__copy__);
        CLJNBPairs_exposer.def( "__deepcopy__", &__copy__);
        CLJNBPairs_exposer.def( "clone", &__copy__);
        CLJNBPairs_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJNBPairs >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJNBPairs_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJNBPairs >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJNBPairs_exposer.def_pickle(sire_pickle_suite< ::SireMM::CLJNBPairs >());
        CLJNBPairs_exposer.def( "__str__", &__str__< ::SireMM::CLJNBPairs > );
        CLJNBPairs_exposer.def( "__repr__", &__str__< ::SireMM::CLJNBPairs > );
    }

}
