// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Unsubscribe message and its fields.

#pragma once

#include "cc_mqtt5/field/PacketIdCommon.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Unsubscribe message.
/// @see cc_mqtt5::message::UnsubscribeFields
struct UnsubscribeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::UnsubscribeFields::PacketId field.
    using PacketIdCommon = cc_mqtt5::field::PacketIdCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::UnsubscribeFields::Properties field.
    using PropertiesMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::UnsubscribeFields::Properties field.
    using PropertiesCommon = cc_mqtt5::field::PropertiesListCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::UnsubscribeFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::UnsubscribeFields::List field.
        static const char* name()
        {
            return "List";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Unsubscribe message.
struct UnsubscribeCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Unsubscribe message.
    static const char* name()
    {
        return "UNSUBSCRIBE";
    }
};

} // namespace message

} // namespace cc_mqtt5
