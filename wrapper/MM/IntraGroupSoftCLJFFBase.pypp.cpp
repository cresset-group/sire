// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "IntraGroupSoftCLJFFBase.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intrasoftcljff.h"

#include "intrasoftcljff.h"

SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > __copy__(const SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > &other){ return SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_IntraGroupSoftCLJFFBase_class(){

    { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >
        typedef bp::class_< SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >, bp::bases< SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential>, SireMM::CLJPotentialInterface<SireMM::IntraSoftCLJPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > IntraGroupSoftCLJFFBase_exposer_t;
        IntraGroupSoftCLJFFBase_exposer_t IntraGroupSoftCLJFFBase_exposer = IntraGroupSoftCLJFFBase_exposer_t( "IntraGroupSoftCLJFFBase", bp::init< >() );
        bp::scope IntraGroupSoftCLJFFBase_scope( IntraGroupSoftCLJFFBase_exposer );
        IntraGroupSoftCLJFFBase_exposer.def( bp::init< QString const & >(( bp::arg("name") )) );
        IntraGroupSoftCLJFFBase_exposer.def( bp::init< SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > const & >(( bp::arg("other") )) );
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::components
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::Components const & ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::components );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::containsProperty
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::containsProperty );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::mustNowRecalculateFromScratch
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::mustNowRecalculateFromScratch );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value );
        
        }
        IntraGroupSoftCLJFFBase_exposer.def( bp::self != bp::self );
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::operator=
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > & ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*assign_function_type)( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::operator= );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        IntraGroupSoftCLJFFBase_exposer.def( bp::self == bp::self );
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::properties
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::properties );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::property
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::property );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::setProperty
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::setProperty );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") ) );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::typeName
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::typeName );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::what
        
            typedef SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::Intra2B2GFF< SireMM::SoftCLJPotentialInterface< SireMM::IntraSoftCLJPotential > >::what );
            
            IntraGroupSoftCLJFFBase_exposer.def( 
                "what"
                , what_function_value );
        
        }
        IntraGroupSoftCLJFFBase_exposer.staticmethod( "typeName" );
        IntraGroupSoftCLJFFBase_exposer.def( "__copy__", &__copy__);
        IntraGroupSoftCLJFFBase_exposer.def( "__deepcopy__", &__copy__);
        IntraGroupSoftCLJFFBase_exposer.def( "clone", &__copy__);
        IntraGroupSoftCLJFFBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraGroupSoftCLJFFBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraGroupSoftCLJFFBase_exposer.def( "__str__", &__str__< ::SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > > );
        IntraGroupSoftCLJFFBase_exposer.def( "__repr__", &__str__< ::SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > > );
        IntraGroupSoftCLJFFBase_exposer.def( "__len__", &__len_count< ::SireFF::Intra2B2GFF<SireMM::SoftCLJPotentialInterface<SireMM::IntraSoftCLJPotential> > > );
    }

}
