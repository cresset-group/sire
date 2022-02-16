// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SegFloatProperty.pypp.hpp"

namespace bp = boost::python;

#include "segproperty.hpp"

#include "segproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::SegProperty<double> __copy__(const SireMol::SegProperty<double> &other){ return SireMol::SegProperty<double>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_SegFloatProperty_class(){

    { //::SireMol::SegProperty< double >
        typedef bp::class_< SireMol::SegProperty< double >, bp::bases< SireMol::SegProp, SireMol::MolViewProperty, SireBase::Property > > SegFloatProperty_exposer_t;
        SegFloatProperty_exposer_t SegFloatProperty_exposer = SegFloatProperty_exposer_t( "SegFloatProperty", "", bp::init< >("") );
        bp::scope SegFloatProperty_scope( SegFloatProperty_exposer );
        SegFloatProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        SegFloatProperty_exposer.def( bp::init< QVector< double > const & >(( bp::arg("values") ), "") );
        SegFloatProperty_exposer.def( bp::init< SireMol::SegProperty< double > const & >(( bp::arg("other") ), "") );
        { //::SireMol::SegProperty< double >::array
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::QVector< double > const & ( ::SireMol::SegProperty< double >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::SegProperty< double >::array );
            
            SegFloatProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::assertCanConvert
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef void ( ::SireMol::SegProperty< double >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::SegProperty< double >::assertCanConvert );
            
            SegFloatProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::assignFrom
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef void ( ::SireMol::SegProperty< double >::*assignFrom_function_type)( ::SireMol::SegProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::SegProperty< double >::assignFrom );
            
            SegFloatProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::at
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::SegProperty< double >::*at_function_type)( ::SireMol::SegIdx const & ) const;
            at_function_type at_function_value( &::SireMol::SegProperty< double >::at );
            
            SegFloatProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::canConvert
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< double >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::SegProperty< double >::canConvert );
            
            SegFloatProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::count
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef int ( ::SireMol::SegProperty< double >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::SegProperty< double >::count );
            
            SegFloatProperty_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::fromVariant
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::SireMol::SegProperty< double > ( *fromVariant_function_type )( ::SireMol::SegProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::SegProperty< double >::fromVariant );
            
            SegFloatProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::get
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::SegProperty< double >::*get_function_type)( ::SireMol::SegIdx const & ) const;
            get_function_type get_function_value( &::SireMol::SegProperty< double >::get );
            
            SegFloatProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::isCompatibleWith
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< double >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::SegProperty< double >::isCompatibleWith );
            
            SegFloatProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::isEmpty
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< double >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::SegProperty< double >::isEmpty );
            
            SegFloatProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::nSegments
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef int ( ::SireMol::SegProperty< double >::*nSegments_function_type)(  ) const;
            nSegments_function_type nSegments_function_value( &::SireMol::SegProperty< double >::nSegments );
            
            SegFloatProperty_exposer.def( 
                "nSegments"
                , nSegments_function_value
                , "" );
        
        }
        SegFloatProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::SegProperty< double >::operator=
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::SireMol::SegProperty< double > & ( ::SireMol::SegProperty< double >::*assign_function_type)( ::SireMol::SegProperty< double > const & ) ;
            assign_function_type assign_function_value( &::SireMol::SegProperty< double >::operator= );
            
            SegFloatProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SegFloatProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::SegProperty< double >::operator[]
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef double const & ( ::SireMol::SegProperty< double >::*__getitem___function_type)( ::SireMol::SegIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::SegProperty< double >::operator[] );
            
            SegFloatProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::set
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::SireMol::SegProperty< double > & ( ::SireMol::SegProperty< double >::*set_function_type)( ::SireMol::SegIdx,double const & ) ;
            set_function_type set_function_value( &::SireMol::SegProperty< double >::set );
            
            SegFloatProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("segidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::size
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef int ( ::SireMol::SegProperty< double >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::SegProperty< double >::size );
            
            SegFloatProperty_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::toString
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::QString ( ::SireMol::SegProperty< double >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::SegProperty< double >::toString );
            
            SegFloatProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::toVariant
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef ::SireMol::SegProperty< QVariant > ( ::SireMol::SegProperty< double >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::SegProperty< double >::toVariant );
            
            SegFloatProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , "" );
        
        }
        { //::SireMol::SegProperty< double >::typeName
        
            typedef SireMol::SegProperty< double > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::SegProperty< double >::typeName );
            
            SegFloatProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        SegFloatProperty_exposer.staticmethod( "fromVariant" );
        SegFloatProperty_exposer.staticmethod( "typeName" );
        SegFloatProperty_exposer.def( "__copy__", &__copy__);
        SegFloatProperty_exposer.def( "__deepcopy__", &__copy__);
        SegFloatProperty_exposer.def( "clone", &__copy__);
        SegFloatProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::SegProperty<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegFloatProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::SegProperty<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegFloatProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::SegProperty<double> >());
        SegFloatProperty_exposer.def( "__str__", &__str__< ::SireMol::SegProperty<double> > );
        SegFloatProperty_exposer.def( "__repr__", &__str__< ::SireMol::SegProperty<double> > );
        SegFloatProperty_exposer.def( "__len__", &__len_size< ::SireMol::SegProperty<double> > );
    }

}
