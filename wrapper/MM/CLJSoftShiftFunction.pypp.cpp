// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "CLJSoftShiftFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/multidouble.h"

#include "SireMaths/multifloat.h"

#include "SireMaths/multiint.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/gridinfo.h"

#include "cljshiftfunction.h"

#include <QDebug>

#include <QElapsedTimer>

#include "cljshiftfunction.h"

SireMM::CLJSoftShiftFunction __copy__(const SireMM::CLJSoftShiftFunction &other){ return SireMM::CLJSoftShiftFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CLJSoftShiftFunction_class(){

    { //::SireMM::CLJSoftShiftFunction
        typedef bp::class_< SireMM::CLJSoftShiftFunction, bp::bases< SireMM::CLJSoftFunction, SireMM::CLJCutoffFunction, SireMM::CLJFunction, SireBase::Property > > CLJSoftShiftFunction_exposer_t;
        CLJSoftShiftFunction_exposer_t CLJSoftShiftFunction_exposer = CLJSoftShiftFunction_exposer_t( "CLJSoftShiftFunction", "This CLJFunction calculates the intermolecular coulomb and LJ energy of the passed\nCLJAtoms using a force shifted electrostatics cutoff, and provides a soft-core\npotential that can soften molecules that are involved in free energy calculations\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope CLJSoftShiftFunction_scope( CLJSoftShiftFunction_exposer );
        CLJSoftShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length >(( bp::arg("cutoff") ), "Copy constructor") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("cutoff") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("combining_rules") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftShiftFunction_exposer.def( bp::init< SireMM::CLJSoftShiftFunction const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJSoftShiftFunction::defaultShiftFunction

            typedef ::SireMM::CLJFunctionPtr ( *defaultShiftFunction_function_type )(  );
            defaultShiftFunction_function_type defaultShiftFunction_function_value( &::SireMM::CLJSoftShiftFunction::defaultShiftFunction );

            CLJSoftShiftFunction_exposer.def(
                "defaultShiftFunction"
                , defaultShiftFunction_function_value
                , bp::release_gil_policy()
                , "" );

        }
        CLJSoftShiftFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJSoftShiftFunction::operator=

            typedef ::SireMM::CLJSoftShiftFunction & ( ::SireMM::CLJSoftShiftFunction::*assign_function_type)( ::SireMM::CLJSoftShiftFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJSoftShiftFunction::operator= );

            CLJSoftShiftFunction_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        CLJSoftShiftFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJSoftShiftFunction::toString

            typedef ::QString ( ::SireMM::CLJSoftShiftFunction::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJSoftShiftFunction::toString );

            CLJSoftShiftFunction_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::CLJSoftShiftFunction::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJSoftShiftFunction::typeName );

            CLJSoftShiftFunction_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::CLJSoftShiftFunction::what

            typedef char const * ( ::SireMM::CLJSoftShiftFunction::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJSoftShiftFunction::what );

            CLJSoftShiftFunction_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        CLJSoftShiftFunction_exposer.staticmethod( "defaultShiftFunction" );
        CLJSoftShiftFunction_exposer.staticmethod( "typeName" );
        CLJSoftShiftFunction_exposer.def( "__copy__", &__copy__);
        CLJSoftShiftFunction_exposer.def( "__deepcopy__", &__copy__);
        CLJSoftShiftFunction_exposer.def( "clone", &__copy__);
        CLJSoftShiftFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJSoftShiftFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftShiftFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJSoftShiftFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftShiftFunction_exposer.def_pickle(sire_pickle_suite< ::SireMM::CLJSoftShiftFunction >());
        CLJSoftShiftFunction_exposer.def( "__str__", &__str__< ::SireMM::CLJSoftShiftFunction > );
        CLJSoftShiftFunction_exposer.def( "__repr__", &__str__< ::SireMM::CLJSoftShiftFunction > );
    }

}
