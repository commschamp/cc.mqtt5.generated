// Generated by commsdsl2comms v3.6.4

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
  : m_protocol(new Mqtt5Protocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() noexcept -> cc::ProtocolPtr
            {
                return m_protocol;
            })
            ;
}

Mqtt5Plugin::~Mqtt5Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt5


