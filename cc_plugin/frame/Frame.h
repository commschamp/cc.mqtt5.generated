// Generated by commsdsl2comms v3.6.2

#pragma once

#include "mqtt5/frame/Frame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/input/AllMessages.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace frame
{

using Frame =
    mqtt5::frame::Frame<
        mqtt5::cc_plugin::Message,
        mqtt5::cc_plugin::input::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace mqtt5


