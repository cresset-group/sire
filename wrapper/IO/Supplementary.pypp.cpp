// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Supplementary.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireIO/supplementary.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "supplementary.h"

#include "supplementary.h"

SireIO::Supplementary __copy__(const SireIO::Supplementary &other){ return SireIO::Supplementary(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Supplementary_class(){

    { //::SireIO::Supplementary
        typedef bp::class_< SireIO::Supplementary, bp::bases< SireIO::MoleculeParser, SireBase::Property > > Supplementary_exposer_t;
        Supplementary_exposer_t Supplementary_exposer = Supplementary_exposer_t( "Supplementary", "A dunmmy parser class to hold data that is supplementary to a lead parser,\ne.g. data from a parameter file.\n\nAuthor: Lester Hedges\n", bp::init< >("Constructor") );
        bp::scope Supplementary_scope( Supplementary_exposer );
        Supplementary_exposer.def( bp::init< QString const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the file called filename. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        Supplementary_exposer.def( bp::init< QStringList const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("lines"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the passed text lines. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        Supplementary_exposer.def( bp::init< SireIO::Supplementary const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::Supplementary::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::Supplementary::*construct_function_type)( ::QString const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::Supplementary::construct );
            
            Supplementary_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("filename"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return the parser that has been constructed by reading in the passed\nfile using the passed properties" );
        
        }
        { //::SireIO::Supplementary::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::Supplementary::*construct_function_type)( ::QStringList const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::Supplementary::construct );
            
            Supplementary_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("lines"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return the parser that has been constructed by reading in the passed\ntext lines using the passed properties" );
        
        }
        { //::SireIO::Supplementary::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::Supplementary::*construct_function_type)( ::SireSystem::System const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::Supplementary::construct );
            
            Supplementary_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("system"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return this parser constructed from the passed SireSystem::System" );
        
        }
        { //::SireIO::Supplementary::formatDescription
        
            typedef ::QString ( ::SireIO::Supplementary::*formatDescription_function_type)(  ) const;
            formatDescription_function_type formatDescription_function_value( &::SireIO::Supplementary::formatDescription );
            
            Supplementary_exposer.def( 
                "formatDescription"
                , formatDescription_function_value
                , bp::release_gil_policy()
                , "Return a description of the file format" );
        
        }
        { //::SireIO::Supplementary::formatName
        
            typedef ::QString ( ::SireIO::Supplementary::*formatName_function_type)(  ) const;
            formatName_function_type formatName_function_value( &::SireIO::Supplementary::formatName );
            
            Supplementary_exposer.def( 
                "formatName"
                , formatName_function_value
                , bp::release_gil_policy()
                , "Return the format name that is used to identify this file format within Sire" );
        
        }
        { //::SireIO::Supplementary::formatSuffix
        
            typedef ::QStringList ( ::SireIO::Supplementary::*formatSuffix_function_type)(  ) const;
            formatSuffix_function_type formatSuffix_function_value( &::SireIO::Supplementary::formatSuffix );
            
            Supplementary_exposer.def( 
                "formatSuffix"
                , formatSuffix_function_value
                , bp::release_gil_policy()
                , "Return the suffixes that these files are normally associated with" );
        
        }
        { //::SireIO::Supplementary::isSupplementary
        
            typedef bool ( ::SireIO::Supplementary::*isSupplementary_function_type)(  ) const;
            isSupplementary_function_type isSupplementary_function_value( &::SireIO::Supplementary::isSupplementary );
            
            Supplementary_exposer.def( 
                "isSupplementary"
                , isSupplementary_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireIO::Supplementary::nAtoms
        
            typedef int ( ::SireIO::Supplementary::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::Supplementary::nAtoms );
            
            Supplementary_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Supplementary_exposer.def( bp::self != bp::self );
        { //::SireIO::Supplementary::operator=
        
            typedef ::SireIO::Supplementary & ( ::SireIO::Supplementary::*assign_function_type)( ::SireIO::Supplementary const & ) ;
            assign_function_type assign_function_value( &::SireIO::Supplementary::operator= );
            
            Supplementary_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Supplementary_exposer.def( bp::self == bp::self );
        { //::SireIO::Supplementary::toString
        
            typedef ::QString ( ::SireIO::Supplementary::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::Supplementary::toString );
            
            Supplementary_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this parser" );
        
        }
        { //::SireIO::Supplementary::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::Supplementary::typeName );
            
            Supplementary_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class" );
        
        }
        { //::SireIO::Supplementary::what
        
            typedef char const * ( ::SireIO::Supplementary::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::Supplementary::what );
            
            Supplementary_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class" );
        
        }
        Supplementary_exposer.staticmethod( "typeName" );
        Supplementary_exposer.def( "__copy__", &__copy__);
        Supplementary_exposer.def( "__deepcopy__", &__copy__);
        Supplementary_exposer.def( "clone", &__copy__);
        Supplementary_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::Supplementary >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Supplementary_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::Supplementary >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Supplementary_exposer.def_pickle(sire_pickle_suite< ::SireIO::Supplementary >());
        Supplementary_exposer.def( "__str__", &__str__< ::SireIO::Supplementary > );
        Supplementary_exposer.def( "__repr__", &__str__< ::SireIO::Supplementary > );
    }

}
