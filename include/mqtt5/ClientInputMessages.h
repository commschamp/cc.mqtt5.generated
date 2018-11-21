/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/message/Auth.h"
#include "mqtt5/message/Connack.h"
#include "mqtt5/message/Disconnect.h"
#include "mqtt5/message/Pingresp.h"
#include "mqtt5/message/Puback.h"
#include "mqtt5/message/Pubcomp.h"
#include "mqtt5/message/Publish.h"
#include "mqtt5/message/Pubrec.h"
#include "mqtt5/message/Pubrel.h"
#include "mqtt5/message/Suback.h"
#include "mqtt5/message/Unsuback.h"

namespace mqtt5
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqtt5::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        mqtt5::message::Connack<TBase, TOpt>,
        mqtt5::message::Publish<TBase, TOpt>,
        mqtt5::message::Puback<TBase, TOpt>,
        mqtt5::message::Pubrec<TBase, TOpt>,
        mqtt5::message::Pubrel<TBase, TOpt>,
        mqtt5::message::Pubcomp<TBase, TOpt>,
        mqtt5::message::Suback<TBase, TOpt>,
        mqtt5::message::Unsuback<TBase, TOpt>,
        mqtt5::message::Pingresp<TBase, TOpt>,
        mqtt5::message::Disconnect<TBase, TOpt>,
        mqtt5::message::Auth<TBase, TOpt>
    >;

} // namespace mqtt5


