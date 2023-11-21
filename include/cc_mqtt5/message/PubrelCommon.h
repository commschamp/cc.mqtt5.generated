// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Pubrel message and its fields.

#pragma once

#include "cc_mqtt5/field/PacketIdCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Pubrel message.
/// @see cc_mqtt5::message::PubrelFields
struct PubrelFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubrelFields::PacketId field.
    using PacketIdCommon = cc_mqtt5::field::PacketIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubrelFields::ReasonCode field.
    struct ReasonCodeCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::PubrelFields::ReasonCode field.
        static const char* name()
        {
            return "Reason Code";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubrelFields::Properties field.
    struct PropertiesCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::PubrelFields::Properties field.
        static const char* name()
        {
            return "Properties";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Pubrel message.
struct PubrelCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Pubrel message.
    static const char* name()
    {
        return "PUBREL";
    }
};

} // namespace message

} // namespace cc_mqtt5
