// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of protocol server default options.

#pragma once

#include "cc_mqtt5/options/DefaultOptions.h"

namespace cc_mqtt5
{

namespace options
{

/// @brief Default server options of the protocol.
template <typename TBase = cc_mqtt5::options::DefaultOptions>
struct ServerDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Connack
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Connect
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Pingreq message.
        using Pingreq =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Pingreq
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Pingresp message.
        using Pingresp =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Pingresp
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Suback
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Subscribe
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Unsuback
            >;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Unsubscribe
            >;
    }; // struct message
};

/// @brief Alias to @ref ServerDefaultOptionsT with default template parameter.
using ServerDefaultOptions = ServerDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqtt5
