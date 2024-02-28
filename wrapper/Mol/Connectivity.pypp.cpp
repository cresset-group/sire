// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Connectivity.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/console.h"

#include "SireBase/errors.h"

#include "SireBase/parallel.h"

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "angleid.h"

#include "atomidxmapping.h"

#include "atommatcher.h"

#include "atomselection.h"

#include "bondid.h"

#include "connectivity.h"

#include "dihedralid.h"

#include "improperid.h"

#include "moleculedata.h"

#include "moleculeinfo.h"

#include "moleculeinfodata.h"

#include "moleculeview.h"

#include "tostring.h"

#include <QDataStream>

#include <QDebug>

#include <QElapsedTimer>

#include <boost/assert.hpp>

#include "connectivity.h"

SireMol::Connectivity __copy__(const SireMol::Connectivity &other) { return SireMol::Connectivity(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Connectivity_class()
{

    { //::SireMol::Connectivity
        typedef bp::class_<SireMol::Connectivity, bp::bases<SireMol::ConnectivityBase, SireMol::MolViewProperty, SireBase::Property>> Connectivity_exposer_t;
        Connectivity_exposer_t Connectivity_exposer = Connectivity_exposer_t("Connectivity", "This class contains the connectivity of the molecule, namely which\natoms are connected to which other atoms. The connectivity is used\nto move parts of the molecule (e.g. moving an atom also moves all\nof the atoms that it is connected to), and to automatically generate\nthe internal geometry of the molecule (e.g. to auto-generate\nall of the bonds, angles and dihedrals). Note that the connectivity\nis not the same as the bonding - the connectivity is used to move\nparts of the molecule (e.g. moving an atom should move all of the\natoms it is connected to) and also to auto-generate internal angles\n(e.g. auto-generation of bonds, angles and dihedrals)\n\nAuthor: Christopher Woods\n\n", bp::init<>("Null constructor"));
        bp::scope Connectivity_scope(Connectivity_exposer);
        Connectivity_exposer.def(bp::init<SireMol::MoleculeInfo const &>((bp::arg("molinfo")), "Construct the connectivity for the passed molecule info"));
        Connectivity_exposer.def(bp::init<SireMol::MoleculeData const &>((bp::arg("moldata")), "Construct the connectivity for the molecule whose data\nis in moldata"));
        Connectivity_exposer.def(bp::init<SireMol::MoleculeView const &, bp::optional<SireMol::BondHunter const &, SireBase::PropertyMap const &>>((bp::arg("molview"), bp::arg("bondhunter") = SireMol::CovalentBondHunter(), bp::arg("map") = SireBase::PropertyMap()), "Construct the connectivity for the molecule viewed in the\npassed view. This automatically uses the bond hunting\nfunction to add all of the bonds for the atoms in this view"));
        Connectivity_exposer.def(bp::init<SireMol::ConnectivityEditor const &>((bp::arg("editor")), "Construct the connectivity from the passed editor"));
        Connectivity_exposer.def(bp::init<SireMol::Connectivity const &>((bp::arg("other")), "Copy constructor"));
        { //::SireMol::Connectivity::edit

            typedef ::SireMol::ConnectivityEditor (::SireMol::Connectivity::*edit_function_type)() const;
            edit_function_type edit_function_value(&::SireMol::Connectivity::edit);

            Connectivity_exposer.def(
                "edit", edit_function_value, bp::release_gil_policy(), "Return an editor that can edit a copy of this connectivity");
        }
        Connectivity_exposer.def(bp::self != bp::self);
        { //::SireMol::Connectivity::operator=

            typedef ::SireMol::Connectivity &(::SireMol::Connectivity::*assign_function_type)(::SireMol::Connectivity const &);
            assign_function_type assign_function_value(&::SireMol::Connectivity::operator=);

            Connectivity_exposer.def(
                "assign", assign_function_value, (bp::arg("other")), bp::return_self<>(), "");
        }
        { //::SireMol::Connectivity::operator=

            typedef ::SireMol::Connectivity &(::SireMol::Connectivity::*assign_function_type)(::SireMol::ConnectivityEditor const &);
            assign_function_type assign_function_value(&::SireMol::Connectivity::operator=);

            Connectivity_exposer.def(
                "assign", assign_function_value, (bp::arg("editor")), bp::return_self<>(), "");
        }
        Connectivity_exposer.def(bp::self == bp::self);
        { //::SireMol::Connectivity::typeName

            typedef char const *(*typeName_function_type)();
            typeName_function_type typeName_function_value(&::SireMol::Connectivity::typeName);

            Connectivity_exposer.def(
                "typeName", typeName_function_value, bp::release_gil_policy(), "");
        }
        Connectivity_exposer.staticmethod("typeName");
        Connectivity_exposer.def("__copy__", &__copy__);
        Connectivity_exposer.def("__deepcopy__", &__copy__);
        Connectivity_exposer.def("clone", &__copy__);
        Connectivity_exposer.def("__rlshift__", &__rlshift__QDataStream<::SireMol::Connectivity>,
                                 bp::return_internal_reference<1, bp::with_custodian_and_ward<1, 2>>());
        Connectivity_exposer.def("__rrshift__", &__rrshift__QDataStream<::SireMol::Connectivity>,
                                 bp::return_internal_reference<1, bp::with_custodian_and_ward<1, 2>>());
        Connectivity_exposer.def_pickle(sire_pickle_suite<::SireMol::Connectivity>());
        Connectivity_exposer.def("__str__", &__str__<::SireMol::Connectivity>);
        Connectivity_exposer.def("__repr__", &__str__<::SireMol::Connectivity>);
    }
}
