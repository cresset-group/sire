// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ResVariantProperty.pypp.hpp"

namespace bp = boost::python;

#include "resproperty.hpp"

#include "resproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::ResProperty<QVariant> __copy__(const SireMol::ResProperty<QVariant> &other){ return SireMol::ResProperty<QVariant>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_ResVariantProperty_class(){

    { //::SireMol::ResProperty< QVariant >
        typedef bp::class_< SireMol::ResProperty< QVariant >, bp::bases< SireMol::ResProp, SireMol::MolViewProperty, SireBase::Property > > ResVariantProperty_exposer_t;
        ResVariantProperty_exposer_t ResVariantProperty_exposer = ResVariantProperty_exposer_t( "ResVariantProperty", "", bp::init< >("") );
        bp::scope ResVariantProperty_scope( ResVariantProperty_exposer );
        ResVariantProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        ResVariantProperty_exposer.def( bp::init< QVector< QVariant > const & >(( bp::arg("values") ), "") );
        ResVariantProperty_exposer.def( bp::init< SireMol::ResProperty< QVariant > const & >(( bp::arg("other") ), "") );
        { //::SireMol::ResProperty< QVariant >::array

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVector< QVariant > const & ( ::SireMol::ResProperty< QVariant >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::ResProperty< QVariant >::array );

            ResVariantProperty_exposer.def(
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::assertCanConvert

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef void ( ::SireMol::ResProperty< QVariant >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::ResProperty< QVariant >::assertCanConvert );

            ResVariantProperty_exposer.def(
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::assignFrom

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef void ( ::SireMol::ResProperty< QVariant >::*assignFrom_function_type)( ::SireMol::ResProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::ResProperty< QVariant >::assignFrom );

            ResVariantProperty_exposer.def(
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::at

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*at_function_type)( ::SireMol::ResIdx const & ) const;
            at_function_type at_function_value( &::SireMol::ResProperty< QVariant >::at );

            ResVariantProperty_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("residx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::at

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::ResProperty< QVariant >::at );

            ResVariantProperty_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::canConvert

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef bool ( ::SireMol::ResProperty< QVariant >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::ResProperty< QVariant >::canConvert );

            ResVariantProperty_exposer.def(
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::count

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef int ( ::SireMol::ResProperty< QVariant >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::ResProperty< QVariant >::count );

            ResVariantProperty_exposer.def(
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::fromVariant

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::SireMol::ResProperty< QVariant > ( *fromVariant_function_type )( ::SireMol::ResProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::ResProperty< QVariant >::fromVariant );

            ResVariantProperty_exposer.def(
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::get

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*get_function_type)( ::SireMol::ResIdx const & ) const;
            get_function_type get_function_value( &::SireMol::ResProperty< QVariant >::get );

            ResVariantProperty_exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("residx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::get

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::ResProperty< QVariant >::get );

            ResVariantProperty_exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::getAsProperty

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::ResProperty< QVariant >::*getAsProperty_function_type)( ::SireMol::ResIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::ResProperty< QVariant >::getAsProperty );

            ResVariantProperty_exposer.def(
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("idx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::getAsVariant

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant ( ::SireMol::ResProperty< QVariant >::*getAsVariant_function_type)( ::SireMol::ResIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::ResProperty< QVariant >::getAsVariant );

            ResVariantProperty_exposer.def(
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("idx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::isCompatibleWith

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef bool ( ::SireMol::ResProperty< QVariant >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::ResProperty< QVariant >::isCompatibleWith );

            ResVariantProperty_exposer.def(
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::isEmpty

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef bool ( ::SireMol::ResProperty< QVariant >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::ResProperty< QVariant >::isEmpty );

            ResVariantProperty_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::nResidues

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef int ( ::SireMol::ResProperty< QVariant >::*nResidues_function_type)(  ) const;
            nResidues_function_type nResidues_function_value( &::SireMol::ResProperty< QVariant >::nResidues );

            ResVariantProperty_exposer.def(
                "nResidues"
                , nResidues_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ResVariantProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::ResProperty< QVariant >::operator=

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::SireMol::ResProperty< QVariant > & ( ::SireMol::ResProperty< QVariant >::*assign_function_type)( ::SireMol::ResProperty< QVariant > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ResProperty< QVariant >::operator= );

            ResVariantProperty_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        ResVariantProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::ResProperty< QVariant >::operator[]

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*__getitem___function_type)( ::SireMol::ResIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResProperty< QVariant >::operator[] );

            ResVariantProperty_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("residx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::operator[]

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QVariant const & ( ::SireMol::ResProperty< QVariant >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResProperty< QVariant >::operator[] );

            ResVariantProperty_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::operator[]

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QList< QVariant > ( ::SireMol::ResProperty< QVariant >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResProperty< QVariant >::operator[] );

            ResVariantProperty_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::operator[]

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QList< QVariant > ( ::SireMol::ResProperty< QVariant >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ResProperty< QVariant >::operator[] );

            ResVariantProperty_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::set

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::SireMol::ResProperty< QVariant > & ( ::SireMol::ResProperty< QVariant >::*set_function_type)( ::SireMol::ResIdx,::QVariant const & ) ;
            set_function_type set_function_value( &::SireMol::ResProperty< QVariant >::set );

            ResVariantProperty_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("residx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::size

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef int ( ::SireMol::ResProperty< QVariant >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::ResProperty< QVariant >::size );

            ResVariantProperty_exposer.def(
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::toString

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::QString ( ::SireMol::ResProperty< QVariant >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::ResProperty< QVariant >::toString );

            ResVariantProperty_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::toVariant

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef ::SireMol::ResProperty< QVariant > ( ::SireMol::ResProperty< QVariant >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::ResProperty< QVariant >::toVariant );

            ResVariantProperty_exposer.def(
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::ResProperty< QVariant >::typeName

            typedef SireMol::ResProperty< QVariant > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ResProperty< QVariant >::typeName );

            ResVariantProperty_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ResVariantProperty_exposer.staticmethod( "fromVariant" );
        ResVariantProperty_exposer.staticmethod( "typeName" );
        ResVariantProperty_exposer.def( "__copy__", &__copy__);
        ResVariantProperty_exposer.def( "__deepcopy__", &__copy__);
        ResVariantProperty_exposer.def( "clone", &__copy__);
        ResVariantProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ResProperty<QVariant> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResVariantProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ResProperty<QVariant> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResVariantProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::ResProperty<QVariant> >());
        ResVariantProperty_exposer.def( "__str__", &__str__< ::SireMol::ResProperty<QVariant> > );
        ResVariantProperty_exposer.def( "__repr__", &__str__< ::SireMol::ResProperty<QVariant> > );
        ResVariantProperty_exposer.def( "__len__", &__len_size< ::SireMol::ResProperty<QVariant> > );
    }

}
