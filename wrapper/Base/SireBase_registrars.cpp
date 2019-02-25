//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireBase_registrars.h"

#include "Helpers/version_error_impl.h"

#include "propertymap.h"
#include "ranges.h"
#include "variantproperty.h"
#include "lengthproperty.h"
#include "timeproperty.h"
#include "cpuid.h"
#include "booleanproperty.h"
#include "majorminorversion.h"
#include "numberproperty.h"
#include "stringmangler.h"
#include "stringproperty.h"
#include "linktoproperty.h"
#include "propertylist.h"
#include "property.h"
#include "properties.h"

#include "Helpers/objectregistry.hpp"

void register_SireBase_objects()
{

    ObjectRegistry::registerConverterFor< SireBase::PropertyName >();
    ObjectRegistry::registerConverterFor< SireBase::PropertyMap >();
    ObjectRegistry::registerConverterFor< SireBase::SimpleRange >();
    ObjectRegistry::registerConverterFor< SireBase::VariantProperty >();
    ObjectRegistry::registerConverterFor< SireBase::LengthProperty >();
    ObjectRegistry::registerConverterFor< SireBase::TimeProperty >();
    ObjectRegistry::registerConverterFor< SireBase::CPUID >();
    ObjectRegistry::registerConverterFor< SireBase::BooleanProperty >();
    ObjectRegistry::registerConverterFor< SireBase::MajorMinorVersion >();
    ObjectRegistry::registerConverterFor< SireBase::Version >();
    ObjectRegistry::registerConverterFor< SireBase::NumberProperty >();
    ObjectRegistry::registerConverterFor< SireBase::NoMangling >();
    ObjectRegistry::registerConverterFor< SireBase::TrimString >();
    ObjectRegistry::registerConverterFor< SireBase::UpperCaseString >();
    ObjectRegistry::registerConverterFor< SireBase::LowerCaseString >();
    ObjectRegistry::registerConverterFor< SireBase::StringProperty >();
    ObjectRegistry::registerConverterFor< SireBase::LinkToProperty >();
    ObjectRegistry::registerConverterFor< SireBase::DoubleArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::IntegerArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::StringArrayProperty >();
    ObjectRegistry::registerConverterFor< SireBase::PropertyList >();
    ObjectRegistry::registerConverterFor< SireBase::NullProperty >();
    ObjectRegistry::registerConverterFor< SireBase::Properties >();

}

