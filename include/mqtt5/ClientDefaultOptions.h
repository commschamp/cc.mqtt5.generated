/// @file
/// @brief Contains definition of protocol default options for client.

#pragma once

#include "DefaultOptions.h"

namespace mqtt5
{

/// @brief Default options of the protocol specific for a client.
struct ClientDefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for @ref mqtt5::message::Connack message.
        using Connack =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Connect message.
        using Connect =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Pingreq message.
        using Pingreq =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Pingresp message.
        using Pingresp =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Suback message.
        using Suback =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Subscribe message.
        using Subscribe =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Unsuback message.
        using Unsuback =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
    };
    
};

} // namespace mqtt5


