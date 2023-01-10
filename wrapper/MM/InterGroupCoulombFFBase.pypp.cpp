// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InterGroupCoulombFFBase.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intercoulombff.h"

#include "intercoulombff.h"

SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > __copy__(const SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > &other){ return SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_InterGroupCoulombFFBase_class(){

    { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >
        typedef bp::class_< SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >, bp::bases< SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InterGroupCoulombFFBase_exposer_t;
        InterGroupCoulombFFBase_exposer_t InterGroupCoulombFFBase_exposer = InterGroupCoulombFFBase_exposer_t( "InterGroupCoulombFFBase", "", bp::init< >("") );
        bp::scope InterGroupCoulombFFBase_scope( InterGroupCoulombFFBase_exposer );
        InterGroupCoulombFFBase_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        InterGroupCoulombFFBase_exposer.def( bp::init< SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > const & >(( bp::arg("other") ), "") );
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::components
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::Components const & ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::components );
            
            InterGroupCoulombFFBase_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::containsProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::containsProperty );
            
            InterGroupCoulombFFBase_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::mustNowRecalculateFromScratch
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::mustNowRecalculateFromScratch );
            
            InterGroupCoulombFFBase_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InterGroupCoulombFFBase_exposer.def( bp::self != bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::operator=
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > & ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*assign_function_type)( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::operator= );
            
            InterGroupCoulombFFBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InterGroupCoulombFFBase_exposer.def( bp::self == bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::properties
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::properties );
            
            InterGroupCoulombFFBase_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::property
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::property );
            
            InterGroupCoulombFFBase_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::setProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::setProperty );
            
            InterGroupCoulombFFBase_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::typeName
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::typeName );
            
            InterGroupCoulombFFBase_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::what
        
            typedef SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::Inter2B2GFF< SireMM::CoulombPotentialInterface< SireMM::InterCoulombPotential > >::what );
            
            InterGroupCoulombFFBase_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InterGroupCoulombFFBase_exposer.staticmethod( "typeName" );
        InterGroupCoulombFFBase_exposer.def( "__copy__", &__copy__);
        InterGroupCoulombFFBase_exposer.def( "__deepcopy__", &__copy__);
        InterGroupCoulombFFBase_exposer.def( "clone", &__copy__);
        InterGroupCoulombFFBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupCoulombFFBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupCoulombFFBase_exposer.def_pickle(sire_pickle_suite< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > >());
        InterGroupCoulombFFBase_exposer.def( "__str__", &__str__< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > > );
        InterGroupCoulombFFBase_exposer.def( "__repr__", &__str__< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > > );
        InterGroupCoulombFFBase_exposer.def( "__len__", &__len_count< ::SireFF::Inter2B2GFF<SireMM::CoulombPotentialInterface<SireMM::InterCoulombPotential> > > );
    }

}
