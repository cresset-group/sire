// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "CGIntProperty.pypp.hpp"

namespace bp = boost::python;

#include "cgproperty.hpp"

#include "cgproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

#include "SireMol/atomidxmapping.h"

SireMol::CGProperty<long long> __copy__(const SireMol::CGProperty<long long> &other){ return SireMol::CGProperty<long long>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_CGIntProperty_class(){

    { //::SireMol::CGProperty< long long >
        typedef bp::class_< SireMol::CGProperty< long long >, bp::bases< SireMol::CGProp, SireMol::MolViewProperty, SireBase::Property > > CGIntProperty_exposer_t;
        CGIntProperty_exposer_t CGIntProperty_exposer = CGIntProperty_exposer_t( "CGIntProperty", "", bp::init< >("") );
        bp::scope CGIntProperty_scope( CGIntProperty_exposer );
        CGIntProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        CGIntProperty_exposer.def( bp::init< QVector< long long > const & >(( bp::arg("values") ), "") );
        CGIntProperty_exposer.def( bp::init< SireMol::CGProperty< long long > const & >(( bp::arg("other") ), "") );
        { //::SireMol::CGProperty< long long >::array
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::QVector< long long > const & ( ::SireMol::CGProperty< long long >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::CGProperty< long long >::array );
            
            CGIntProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::assertCanConvert
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef void ( ::SireMol::CGProperty< long long >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::CGProperty< long long >::assertCanConvert );
            
            CGIntProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::assignFrom
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef void ( ::SireMol::CGProperty< long long >::*assignFrom_function_type)( ::SireMol::CGProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::CGProperty< long long >::assignFrom );
            
            CGIntProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::at
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*at_function_type)( ::SireMol::CGIdx const & ) const;
            at_function_type at_function_value( &::SireMol::CGProperty< long long >::at );
            
            CGIntProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::at
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::CGProperty< long long >::at );
            
            CGIntProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::canConvert
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::CGProperty< long long >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::CGProperty< long long >::canConvert );
            
            CGIntProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::count
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef int ( ::SireMol::CGProperty< long long >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::CGProperty< long long >::count );
            
            CGIntProperty_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::fromVariant
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireMol::CGProperty< long long > ( *fromVariant_function_type )( ::SireMol::CGProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::CGProperty< long long >::fromVariant );
            
            CGIntProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::get
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*get_function_type)( ::SireMol::CGIdx const & ) const;
            get_function_type get_function_value( &::SireMol::CGProperty< long long >::get );
            
            CGIntProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::get
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::CGProperty< long long >::get );
            
            CGIntProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::getAsProperty
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::CGProperty< long long >::*getAsProperty_function_type)( ::SireMol::CGIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::CGProperty< long long >::getAsProperty );
            
            CGIntProperty_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("idx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::getAsVariant
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::QVariant ( ::SireMol::CGProperty< long long >::*getAsVariant_function_type)( ::SireMol::CGIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::CGProperty< long long >::getAsVariant );
            
            CGIntProperty_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("idx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::isCompatibleWith
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::CGProperty< long long >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::CGProperty< long long >::isCompatibleWith );
            
            CGIntProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::isEmpty
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::CGProperty< long long >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::CGProperty< long long >::isEmpty );
            
            CGIntProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::merge
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireBase::PropertyList ( ::SireMol::CGProperty< long long >::*merge_function_type)( ::SireMol::MolViewProperty const &,::SireMol::AtomIdxMapping const &,::QString const &,::SireBase::PropertyMap const & ) const;
            merge_function_type merge_function_value( &::SireMol::CGProperty< long long >::merge );
            
            CGIntProperty_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("other"), bp::arg("mapping"), bp::arg("ghost")=::QString( ), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::nCutGroups
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef int ( ::SireMol::CGProperty< long long >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::CGProperty< long long >::nCutGroups );
            
            CGIntProperty_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CGIntProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::CGProperty< long long >::operator=
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireMol::CGProperty< long long > & ( ::SireMol::CGProperty< long long >::*assign_function_type)( ::SireMol::CGProperty< long long > const & ) ;
            assign_function_type assign_function_value( &::SireMol::CGProperty< long long >::operator= );
            
            CGIntProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CGIntProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::CGProperty< long long >::operator[]
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*__getitem___function_type)( ::SireMol::CGIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::CGProperty< long long >::operator[] );
            
            CGIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::operator[]
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::CGProperty< long long >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::CGProperty< long long >::operator[] );
            
            CGIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::operator[]
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::QList< long long > ( ::SireMol::CGProperty< long long >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::CGProperty< long long >::operator[] );
            
            CGIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::operator[]
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::QList< long long > ( ::SireMol::CGProperty< long long >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::CGProperty< long long >::operator[] );
            
            CGIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::set
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireMol::CGProperty< long long > & ( ::SireMol::CGProperty< long long >::*set_function_type)( ::SireMol::CGIdx,long long int const & ) ;
            set_function_type set_function_value( &::SireMol::CGProperty< long long >::set );
            
            CGIntProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::size
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef int ( ::SireMol::CGProperty< long long >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::CGProperty< long long >::size );
            
            CGIntProperty_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::toString
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::QString ( ::SireMol::CGProperty< long long >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::CGProperty< long long >::toString );
            
            CGIntProperty_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::toVariant
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef ::SireMol::CGProperty< QVariant > ( ::SireMol::CGProperty< long long >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::CGProperty< long long >::toVariant );
            
            CGIntProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::CGProperty< long long >::typeName
        
            typedef SireMol::CGProperty< long long > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::CGProperty< long long >::typeName );
            
            CGIntProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CGIntProperty_exposer.staticmethod( "fromVariant" );
        CGIntProperty_exposer.staticmethod( "typeName" );
        CGIntProperty_exposer.def( "__copy__", &__copy__);
        CGIntProperty_exposer.def( "__deepcopy__", &__copy__);
        CGIntProperty_exposer.def( "clone", &__copy__);
        CGIntProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::CGProperty<long long> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGIntProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::CGProperty<long long> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGIntProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::CGProperty<long long> >());
        CGIntProperty_exposer.def( "__str__", &__str__< ::SireMol::CGProperty<long long> > );
        CGIntProperty_exposer.def( "__repr__", &__str__< ::SireMol::CGProperty<long long> > );
        CGIntProperty_exposer.def( "__len__", &__len_size< ::SireMol::CGProperty<long long> > );
    }

}
