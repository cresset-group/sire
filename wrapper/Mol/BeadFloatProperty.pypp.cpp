// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "BeadFloatProperty.pypp.hpp"

namespace bp = boost::python;

#include "beadproperty.hpp"

#include "beadproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::BeadProperty<double> __copy__(const SireMol::BeadProperty<double> &other){ return SireMol::BeadProperty<double>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_BeadFloatProperty_class(){

    { //::SireMol::BeadProperty< double >
        typedef bp::class_< SireMol::BeadProperty< double >, bp::bases< SireMol::BeadProp, SireMol::MolViewProperty, SireBase::Property > > BeadFloatProperty_exposer_t;
        BeadFloatProperty_exposer_t BeadFloatProperty_exposer = BeadFloatProperty_exposer_t( "BeadFloatProperty", "", bp::init< >("") );
        bp::scope BeadFloatProperty_scope( BeadFloatProperty_exposer );
        BeadFloatProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMol::Beading const & >(( bp::arg("molinfo"), bp::arg("beading") ), "") );
        BeadFloatProperty_exposer.def( bp::init< QVector< double > const &, SireMol::Beading const & >(( bp::arg("values"), bp::arg("beading") ), "") );
        BeadFloatProperty_exposer.def( bp::init< SireMol::BeadProperty< double > const & >(( bp::arg("other") ), "") );
        { //::SireMol::BeadProperty< double >::array
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::QVector< double > const & ( ::SireMol::BeadProperty< double >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::BeadProperty< double >::array );
            
            BeadFloatProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::assertCanConvert
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef void ( ::SireMol::BeadProperty< double >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::BeadProperty< double >::assertCanConvert );
            
            BeadFloatProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::assignFrom
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef void ( ::SireMol::BeadProperty< double >::*assignFrom_function_type)( ::SireMol::BeadProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::BeadProperty< double >::assignFrom );
            
            BeadFloatProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::at
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::BeadProperty< double >::*at_function_type)( ::SireMol::BeadIdx const & ) const;
            at_function_type at_function_value( &::SireMol::BeadProperty< double >::at );
            
            BeadFloatProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::canConvert
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< double >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::BeadProperty< double >::canConvert );
            
            BeadFloatProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::count
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< double >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::BeadProperty< double >::count );
            
            BeadFloatProperty_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::fromVariant
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::SireMol::BeadProperty< double > ( *fromVariant_function_type )( ::SireMol::BeadProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::BeadProperty< double >::fromVariant );
            
            BeadFloatProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::get
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::BeadProperty< double >::*get_function_type)( ::SireMol::BeadIdx const & ) const;
            get_function_type get_function_value( &::SireMol::BeadProperty< double >::get );
            
            BeadFloatProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::isCompatibleWith
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< double >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::BeadProperty< double >::isCompatibleWith );
            
            BeadFloatProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::isEmpty
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< double >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::BeadProperty< double >::isEmpty );
            
            BeadFloatProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::nBeads
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< double >::*nBeads_function_type)(  ) const;
            nBeads_function_type nBeads_function_value( &::SireMol::BeadProperty< double >::nBeads );
            
            BeadFloatProperty_exposer.def( 
                "nBeads"
                , nBeads_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BeadFloatProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::BeadProperty< double >::operator=
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::SireMol::BeadProperty< double > & ( ::SireMol::BeadProperty< double >::*assign_function_type)( ::SireMol::BeadProperty< double > const & ) ;
            assign_function_type assign_function_value( &::SireMol::BeadProperty< double >::operator= );
            
            BeadFloatProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        BeadFloatProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::BeadProperty< double >::operator[]
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::BeadProperty< double >::*__getitem___function_type)( ::SireMol::BeadIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::BeadProperty< double >::operator[] );
            
            BeadFloatProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::set
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::SireMol::BeadProperty< double > & ( ::SireMol::BeadProperty< double >::*set_function_type)( ::SireMol::BeadIdx,double const & ) ;
            set_function_type set_function_value( &::SireMol::BeadProperty< double >::set );
            
            BeadFloatProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("beadidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::size
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< double >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::BeadProperty< double >::size );
            
            BeadFloatProperty_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::toString
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::QString ( ::SireMol::BeadProperty< double >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::BeadProperty< double >::toString );
            
            BeadFloatProperty_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::toVariant
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef ::SireMol::BeadProperty< QVariant > ( ::SireMol::BeadProperty< double >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::BeadProperty< double >::toVariant );
            
            BeadFloatProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< double >::typeName
        
            typedef SireMol::BeadProperty< double > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::BeadProperty< double >::typeName );
            
            BeadFloatProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BeadFloatProperty_exposer.staticmethod( "fromVariant" );
        BeadFloatProperty_exposer.staticmethod( "typeName" );
        BeadFloatProperty_exposer.def( "__copy__", &__copy__);
        BeadFloatProperty_exposer.def( "__deepcopy__", &__copy__);
        BeadFloatProperty_exposer.def( "clone", &__copy__);
        BeadFloatProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::BeadProperty<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadFloatProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::BeadProperty<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadFloatProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::BeadProperty<double> >());
        BeadFloatProperty_exposer.def( "__str__", &__str__< ::SireMol::BeadProperty<double> > );
        BeadFloatProperty_exposer.def( "__repr__", &__str__< ::SireMol::BeadProperty<double> > );
        BeadFloatProperty_exposer.def( "__len__", &__len_size< ::SireMol::BeadProperty<double> > );
    }

}
