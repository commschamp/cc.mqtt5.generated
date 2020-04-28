// Generated by commsdsl2comms v3.4.0

#include "Auth.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/ReasonCode.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_reasonCode()
{
    using Field = mqtt5::message::AuthFields<>::ReasonCode;
    auto props = cc_plugin::field::createProps_reasonCode(Field::name());
    return props;
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::AuthFields<>::PropertiesList;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_reasonCode());
    props.append(createProps_propertiesList());
    return props;
}

} // namespace

Auth::Auth() = default;
Auth::~Auth() = default;
Auth& Auth::operator=(const Auth&) = default;
Auth& Auth::operator=(Auth&&) = default;

const QVariantList& Auth::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


