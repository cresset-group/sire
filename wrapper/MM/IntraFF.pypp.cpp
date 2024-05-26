// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "IntraFF.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/errors.h"

#include "SireBase/lengthproperty.h"

#include "SireBase/refcountdata.h"

#include "SireError/errors.h"

#include "SireMol/atomselection.h"

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/molresid.h"

#include "SireMol/partialmolecule.h"

#include "SireMol/residue.h"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "cljcalculator.h"

#include "cljshiftfunction.h"

#include "intraff.h"

#include <QDebug>

#include <QElapsedTimer>

#include "intraff.h"

SireMM::IntraFF __copy__(const SireMM::IntraFF &other){ return SireMM::IntraFF(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_IntraFF_class(){

    { //::SireMM::IntraFF
        typedef bp::class_< SireMM::IntraFF, bp::bases< SireFF::G1FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > IntraFF_exposer_t;
        IntraFF_exposer_t IntraFF_exposer = IntraFF_exposer_t( "IntraFF", "This forcefield is used to calculate the intramolecular\ncoulomb and LJ energy of the contained molecules. Note\nthat this is the coulomb and LJ energy of the non-bonded\natoms only, i.e. it does not contain the scaled\n1-4 coulomb and LJ energies. These should be calculated\nseparately, e.g. via additional terms added to InternalFF\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope IntraFF_scope( IntraFF_exposer );
        IntraFF_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "Construct, specifying the name of the forcefield") );
        IntraFF_exposer.def( bp::init< SireMM::IntraFF const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::IntraFF::accept
        
            typedef void ( ::SireMM::IntraFF::*accept_function_type)(  ) ;
            accept_function_type accept_function_value( &::SireMM::IntraFF::accept );
            
            IntraFF_exposer.def( 
                "accept"
                , accept_function_value
                , bp::release_gil_policy()
                , "Tell the forcefield that the last move was accepted. This tells the\nforcefield to make permanent any temporary changes that were used a workspace\nto avoid memory allocation during a move" );
        
        }
        { //::SireMM::IntraFF::cljFunction
        
            typedef ::SireMM::CLJIntraFunction const & ( ::SireMM::IntraFF::*cljFunction_function_type)(  ) const;
            cljFunction_function_type cljFunction_function_value( &::SireMM::IntraFF::cljFunction );
            
            IntraFF_exposer.def( 
                "cljFunction"
                , cljFunction_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the function used to calculate the energy" );
        
        }
        { //::SireMM::IntraFF::cljFunction
        
            typedef ::SireMM::CLJIntraFunction const & ( ::SireMM::IntraFF::*cljFunction_function_type)( ::QString ) const;
            cljFunction_function_type cljFunction_function_value( &::SireMM::IntraFF::cljFunction );
            
            IntraFF_exposer.def( 
                "cljFunction"
                , cljFunction_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the CLJFunction associated with the passed key" );
        
        }
        { //::SireMM::IntraFF::cljFunctionKeys
        
            typedef ::QStringList ( ::SireMM::IntraFF::*cljFunctionKeys_function_type)(  ) const;
            cljFunctionKeys_function_type cljFunctionKeys_function_value( &::SireMM::IntraFF::cljFunctionKeys );
            
            IntraFF_exposer.def( 
                "cljFunctionKeys"
                , cljFunctionKeys_function_value
                , bp::release_gil_policy()
                , "Return the keys of all CLJFunctions added to this forcefield" );
        
        }
        { //::SireMM::IntraFF::cljFunctions
        
            typedef ::QHash< QString, SireBase::PropPtr< SireMM::CLJFunction > > ( ::SireMM::IntraFF::*cljFunctions_function_type)(  ) const;
            cljFunctions_function_type cljFunctions_function_value( &::SireMM::IntraFF::cljFunctions );
            
            IntraFF_exposer.def( 
                "cljFunctions"
                , cljFunctions_function_value
                , bp::release_gil_policy()
                , "Return the hash of all CLJFunctions in this forcefield, indexed by their key" );
        
        }
        { //::SireMM::IntraFF::components
        
            typedef ::SireMM::MultiCLJComponent const & ( ::SireMM::IntraFF::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireMM::IntraFF::components );
            
            IntraFF_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the energy components of this forcefield" );
        
        }
        { //::SireMM::IntraFF::containsProperty
        
            typedef bool ( ::SireMM::IntraFF::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::IntraFF::containsProperty );
            
            IntraFF_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "Return whether or not this forcefield contains the property property" );
        
        }
        { //::SireMM::IntraFF::disableParallelCalculation
        
            typedef void ( ::SireMM::IntraFF::*disableParallelCalculation_function_type)(  ) ;
            disableParallelCalculation_function_type disableParallelCalculation_function_value( &::SireMM::IntraFF::disableParallelCalculation );
            
            IntraFF_exposer.def( 
                "disableParallelCalculation"
                , disableParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Turn off use of a multicore parallel calculation of the energy.\nThis may be quicker if you have few atoms in the forcefield,\nor if you are only planning on allocating one core per forcefield" );
        
        }
        { //::SireMM::IntraFF::disableReproducibleCalculation
        
            typedef void ( ::SireMM::IntraFF::*disableReproducibleCalculation_function_type)(  ) ;
            disableReproducibleCalculation_function_type disableReproducibleCalculation_function_value( &::SireMM::IntraFF::disableReproducibleCalculation );
            
            IntraFF_exposer.def( 
                "disableReproducibleCalculation"
                , disableReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Turn off an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will not be identical)" );
        
        }
        { //::SireMM::IntraFF::enableParallelCalculation
        
            typedef void ( ::SireMM::IntraFF::*enableParallelCalculation_function_type)(  ) ;
            enableParallelCalculation_function_type enableParallelCalculation_function_value( &::SireMM::IntraFF::enableParallelCalculation );
            
            IntraFF_exposer.def( 
                "enableParallelCalculation"
                , enableParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Turn on use of a multicore parallel calculation of the energy.\nThis is on by default, and spreads the energy calculations over\navailable cores" );
        
        }
        { //::SireMM::IntraFF::enableReproducibleCalculation
        
            typedef void ( ::SireMM::IntraFF::*enableReproducibleCalculation_function_type)(  ) ;
            enableReproducibleCalculation_function_type enableReproducibleCalculation_function_value( &::SireMM::IntraFF::enableReproducibleCalculation );
            
            IntraFF_exposer.def( 
                "enableReproducibleCalculation"
                , enableReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Turn on an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will be identical)" );
        
        }
        { //::SireMM::IntraFF::mustNowRecalculateFromScratch
        
            typedef void ( ::SireMM::IntraFF::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireMM::IntraFF::mustNowRecalculateFromScratch );
            
            IntraFF_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , bp::release_gil_policy()
                , "Signal that this forcefield must now be recalculated from scratch" );
        
        }
        { //::SireMM::IntraFF::nCLJFunctions
        
            typedef int ( ::SireMM::IntraFF::*nCLJFunctions_function_type)(  ) const;
            nCLJFunctions_function_type nCLJFunctions_function_value( &::SireMM::IntraFF::nCLJFunctions );
            
            IntraFF_exposer.def( 
                "nCLJFunctions"
                , nCLJFunctions_function_value
                , bp::release_gil_policy()
                , "Return the number of CLJ functions in this forcefield. There should always\nbe at least one" );
        
        }
        { //::SireMM::IntraFF::needsAccepting
        
            typedef bool ( ::SireMM::IntraFF::*needsAccepting_function_type)(  ) const;
            needsAccepting_function_type needsAccepting_function_value( &::SireMM::IntraFF::needsAccepting );
            
            IntraFF_exposer.def( 
                "needsAccepting"
                , needsAccepting_function_value
                , bp::release_gil_policy()
                , "Return whether or not this forcefield is using a temporary workspace that\nneeds to be accepted" );
        
        }
        IntraFF_exposer.def( bp::self != bp::self );
        { //::SireMM::IntraFF::operator=
        
            typedef ::SireMM::IntraFF & ( ::SireMM::IntraFF::*assign_function_type)( ::SireMM::IntraFF const & ) ;
            assign_function_type assign_function_value( &::SireMM::IntraFF::operator= );
            
            IntraFF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IntraFF_exposer.def( bp::self == bp::self );
        { //::SireMM::IntraFF::properties
        
            typedef ::SireBase::Properties const & ( ::SireMM::IntraFF::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::IntraFF::properties );
            
            IntraFF_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the properties of this function" );
        
        }
        { //::SireMM::IntraFF::property
        
            typedef ::SireBase::Property const & ( ::SireMM::IntraFF::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::IntraFF::property );
            
            IntraFF_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the value of the forcefield property with name name" );
        
        }
        { //::SireMM::IntraFF::removeAllCLJFunctions
        
            typedef void ( ::SireMM::IntraFF::*removeAllCLJFunctions_function_type)(  ) ;
            removeAllCLJFunctions_function_type removeAllCLJFunctions_function_value( &::SireMM::IntraFF::removeAllCLJFunctions );
            
            IntraFF_exposer.def( 
                "removeAllCLJFunctions"
                , removeAllCLJFunctions_function_value
                , bp::release_gil_policy()
                , "Function to remove all of the CLJFunctions (except for the default function)" );
        
        }
        { //::SireMM::IntraFF::removeCLJFunctionAt
        
            typedef void ( ::SireMM::IntraFF::*removeCLJFunctionAt_function_type)( ::QString ) ;
            removeCLJFunctionAt_function_type removeCLJFunctionAt_function_value( &::SireMM::IntraFF::removeCLJFunctionAt );
            
            IntraFF_exposer.def( 
                "removeCLJFunctionAt"
                , removeCLJFunctionAt_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Remove the CLJ function with key key - note that you cannot remove\nthe default CLJ function" );
        
        }
        { //::SireMM::IntraFF::setCLJFunction
        
            typedef void ( ::SireMM::IntraFF::*setCLJFunction_function_type)( ::SireMM::CLJIntraFunction const & ) ;
            setCLJFunction_function_type setCLJFunction_function_value( &::SireMM::IntraFF::setCLJFunction );
            
            IntraFF_exposer.def( 
                "setCLJFunction"
                , setCLJFunction_function_value
                , ( bp::arg("cljfunc") )
                , bp::release_gil_policy()
                , "Function used to set the CLJIntraFunction used to calculate\nthe intramolecular energy" );
        
        }
        { //::SireMM::IntraFF::setCLJFunction
        
            typedef void ( ::SireMM::IntraFF::*setCLJFunction_function_type)( ::QString,::SireMM::CLJIntraFunction const & ) ;
            setCLJFunction_function_type setCLJFunction_function_value( &::SireMM::IntraFF::setCLJFunction );
            
            IntraFF_exposer.def( 
                "setCLJFunction"
                , setCLJFunction_function_value
                , ( bp::arg("key"), bp::arg("cljfunc") )
                , bp::release_gil_policy()
                , "Set the CLJFunction with key key equal to cljfunc" );
        
        }
        { //::SireMM::IntraFF::setProperty
        
            typedef bool ( ::SireMM::IntraFF::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::IntraFF::setProperty );
            
            IntraFF_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , bp::release_gil_policy()
                , "Set the forcefield property called name to the value property. Note that\nthis only affects the default CLJFunction. Additional functions must\nbe configured before adding them to the forcefield" );
        
        }
        { //::SireMM::IntraFF::setUseParallelCalculation
        
            typedef void ( ::SireMM::IntraFF::*setUseParallelCalculation_function_type)( bool ) ;
            setUseParallelCalculation_function_type setUseParallelCalculation_function_value( &::SireMM::IntraFF::setUseParallelCalculation );
            
            IntraFF_exposer.def( 
                "setUseParallelCalculation"
                , setUseParallelCalculation_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to use a multicore parallel algorithm\nto calculate the energy" );
        
        }
        { //::SireMM::IntraFF::setUseReproducibleCalculation
        
            typedef void ( ::SireMM::IntraFF::*setUseReproducibleCalculation_function_type)( bool ) ;
            setUseReproducibleCalculation_function_type setUseReproducibleCalculation_function_value( &::SireMM::IntraFF::setUseReproducibleCalculation );
            
            IntraFF_exposer.def( 
                "setUseReproducibleCalculation"
                , setUseReproducibleCalculation_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Switch on or off use of an energy summing algorithm that guarantees the\nsame energy regardless of whether a single core or multicore calculation\nis being performed" );
        
        }
        { //::SireMM::IntraFF::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::IntraFF::typeName );
            
            IntraFF_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::IntraFF::usesParallelCalculation
        
            typedef bool ( ::SireMM::IntraFF::*usesParallelCalculation_function_type)(  ) const;
            usesParallelCalculation_function_type usesParallelCalculation_function_value( &::SireMM::IntraFF::usesParallelCalculation );
            
            IntraFF_exposer.def( 
                "usesParallelCalculation"
                , usesParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Return whether or not a parallel algorithm is used to calculate energies" );
        
        }
        { //::SireMM::IntraFF::usesReproducibleCalculation
        
            typedef bool ( ::SireMM::IntraFF::*usesReproducibleCalculation_function_type)(  ) const;
            usesReproducibleCalculation_function_type usesReproducibleCalculation_function_value( &::SireMM::IntraFF::usesReproducibleCalculation );
            
            IntraFF_exposer.def( 
                "usesReproducibleCalculation"
                , usesReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Return whether or not a reproducible energy summing algorithm is being\nused to accumulate the energies" );
        
        }
        { //::SireMM::IntraFF::what
        
            typedef char const * ( ::SireMM::IntraFF::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::IntraFF::what );
            
            IntraFF_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IntraFF_exposer.staticmethod( "typeName" );
        IntraFF_exposer.def( "__copy__", &__copy__<SireMM::IntraFF>);
        IntraFF_exposer.def( "__deepcopy__", &__copy__<SireMM::IntraFF>);
        IntraFF_exposer.def( "clone", &__copy__<SireMM::IntraFF>);
        IntraFF_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::IntraFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraFF_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::IntraFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraFF_exposer.def_pickle(sire_pickle_suite< ::SireMM::IntraFF >());
        IntraFF_exposer.def( "__str__", &__str__< ::SireMM::IntraFF > );
        IntraFF_exposer.def( "__repr__", &__str__< ::SireMM::IntraFF > );
        IntraFF_exposer.def( "__len__", &__len_count< ::SireMM::IntraFF > );
    }

}
