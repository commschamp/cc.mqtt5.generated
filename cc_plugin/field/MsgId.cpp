// Generated by commsdsl2comms v3.7.0

#include "MsgId.h"

#include "comms_champion/property/field.h"
#include "mqtt5/field/MsgId.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqtt5::field::MsgId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("CONNECT", 1)
            .add("CONNACK", 2)
            .add("PUBLISH", 3)
            .add("PUBACK", 4)
            .add("PUBREC", 5)
            .add("PUBREL", 6)
            .add("PUBCOMP", 7)
            .add("SUBSCRIBE", 8)
            .add("SUBACK", 9)
            .add("UNSUBSCRIBE", 10)
            .add("UNSUBACK", 11)
            .add("PINGREQ", 12)
            .add("PINGRESP", 13)
            .add("DISCONNECT", 14)
            .add("AUTH", 15)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


