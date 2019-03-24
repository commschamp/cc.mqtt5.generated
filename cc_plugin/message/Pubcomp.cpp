#include "Pubcomp.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/PacketId.h"
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

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::PubcompFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

static QVariantMap createProps_reasonCode()
{
    using Field = mqtt5::message::PubcompFields<>::ReasonCode;
    return cc_plugin::field::createProps_reasonCode(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::PubcompFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_reasonCode());
    props.append(createProps_propertiesList());
    return props;
}

} // namespace

Pubcomp::Pubcomp() = default;
Pubcomp::~Pubcomp() = default;
Pubcomp& Pubcomp::operator=(const Pubcomp&) = default;
Pubcomp& Pubcomp::operator=(Pubcomp&&) = default;

const QVariantList& Pubcomp::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


