#include "Mqtt5Plugin.h"

#include "Mqtt5Protocol.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace plugin
{

Mqtt5Plugin::Mqtt5Plugin()
{
    pluginProperties()
        .setProtocolCreateFunc(
            []() -> cc::ProtocolPtr
            {
                return cc::ProtocolPtr(new Mqtt5Protocol());
            });
}

Mqtt5Plugin::~Mqtt5Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt5


