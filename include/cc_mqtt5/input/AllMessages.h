// Generated by commsdsl2comms v6.2.1

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

/// @brief All messages of the protocol in ascending order.
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

/// @brief Create type aliases for the all messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_MQTT5_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Connect ## suffix_ = cc_mqtt5::message::Connect<interface_, opts_>; \
    using prefix_ ## Connack ## suffix_ = cc_mqtt5::message::Connack<interface_, opts_>; \
    using prefix_ ## Publish ## suffix_ = cc_mqtt5::message::Publish<interface_, opts_>; \
    using prefix_ ## Puback ## suffix_ = cc_mqtt5::message::Puback<interface_, opts_>; \
    using prefix_ ## Pubrec ## suffix_ = cc_mqtt5::message::Pubrec<interface_, opts_>; \
    using prefix_ ## Pubrel ## suffix_ = cc_mqtt5::message::Pubrel<interface_, opts_>; \
    using prefix_ ## Pubcomp ## suffix_ = cc_mqtt5::message::Pubcomp<interface_, opts_>; \
    using prefix_ ## Subscribe ## suffix_ = cc_mqtt5::message::Subscribe<interface_, opts_>; \
    using prefix_ ## Suback ## suffix_ = cc_mqtt5::message::Suback<interface_, opts_>; \
    using prefix_ ## Unsubscribe ## suffix_ = cc_mqtt5::message::Unsubscribe<interface_, opts_>; \
    using prefix_ ## Unsuback ## suffix_ = cc_mqtt5::message::Unsuback<interface_, opts_>; \
    using prefix_ ## Pingreq ## suffix_ = cc_mqtt5::message::Pingreq<interface_, opts_>; \
    using prefix_ ## Pingresp ## suffix_ = cc_mqtt5::message::Pingresp<interface_, opts_>; \
    using prefix_ ## Disconnect ## suffix_ = cc_mqtt5::message::Disconnect<interface_, opts_>; \
    using prefix_ ## Auth ## suffix_ = cc_mqtt5::message::Auth<interface_, opts_>;

/// @brief Create type aliases for the all messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_MQTT5_ALIASES_FOR_ALL_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_MQTT5_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, cc_mqtt5::options::DefaultOptions)
