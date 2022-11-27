// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of the AllMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_mqtt5/message/Auth.h"
#include "cc_mqtt5/message/Connack.h"
#include "cc_mqtt5/message/Connect.h"
#include "cc_mqtt5/message/Disconnect.h"
#include "cc_mqtt5/message/Pingreq.h"
#include "cc_mqtt5/message/Pingresp.h"
#include "cc_mqtt5/message/Puback.h"
#include "cc_mqtt5/message/Pubcomp.h"
#include "cc_mqtt5/message/Publish.h"
#include "cc_mqtt5/message/Pubrec.h"
#include "cc_mqtt5/message/Pubrel.h"
#include "cc_mqtt5/message/Suback.h"
#include "cc_mqtt5/message/Subscribe.h"
#include "cc_mqtt5/message/Unsuback.h"
#include "cc_mqtt5/message/Unsubscribe.h"
#include "cc_mqtt5/options/DefaultOptions.h"

namespace cc_mqtt5
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_mqtt5::options::DefaultOptions>
using AllMessages =
    std::tuple<
        cc_mqtt5::message::Connect<TBase, TOpt>,
        cc_mqtt5::message::Connack<TBase, TOpt>,
        cc_mqtt5::message::Publish<TBase, TOpt>,
        cc_mqtt5::message::Puback<TBase, TOpt>,
        cc_mqtt5::message::Pubrec<TBase, TOpt>,
        cc_mqtt5::message::Pubrel<TBase, TOpt>,
        cc_mqtt5::message::Pubcomp<TBase, TOpt>,
        cc_mqtt5::message::Subscribe<TBase, TOpt>,
        cc_mqtt5::message::Suback<TBase, TOpt>,
        cc_mqtt5::message::Unsubscribe<TBase, TOpt>,
        cc_mqtt5::message::Unsuback<TBase, TOpt>,
        cc_mqtt5::message::Pingreq<TBase, TOpt>,
        cc_mqtt5::message::Pingresp<TBase, TOpt>,
        cc_mqtt5::message::Disconnect<TBase, TOpt>,
        cc_mqtt5::message::Auth<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_mqtt5