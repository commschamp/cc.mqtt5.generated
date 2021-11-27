// Generated by commsdsl2comms v3.7.0

#include "Topic.h"

#include "cc_plugin/field/String.h"
#include "comms_champion/property/field.h"
#include "mqtt5/field/Topic.h"


namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_topic(const char* name, bool serHidden)
{
    auto props = cc_plugin::field::createProps_string(name, serHidden);
    return props;
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5


