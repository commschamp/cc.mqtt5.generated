#include "PropertiesList.h"

#include "cc_plugin/field/BinData.h"
#include "cc_plugin/field/EnableEnum.h"
#include "cc_plugin/field/Property.h"
#include "cc_plugin/field/String.h"
#include "cc_plugin/field/VarLenInt.h"
#include "comms_champion/property/field.h"
#include "mqtt5/field/PropertiesList.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_propertiesList(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::PropertiesList<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(cc_plugin::field::createProps_property(Field::ValueType::value_type::name(), serHidden))
            .serialisedHidden()
            .prefixName("Length")
            .showPrefix()
            .appendIndexToElementName()
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


