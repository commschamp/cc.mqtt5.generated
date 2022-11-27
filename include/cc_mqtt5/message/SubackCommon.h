// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Suback message and its fields.

#pragma once

#include "cc_mqtt5/field/PacketIdCommon.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Suback message.
/// @see cc_mqtt5::message::SubackFields
struct SubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::SubackFields::PacketId field.
    using PacketIdCommon = cc_mqtt5::field::PacketIdCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::SubackFields::PropertiesList field.
    using PropertiesListMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::SubackFields::PropertiesList field.
    using PropertiesListCommon = cc_mqtt5::field::PropertiesListCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::SubackFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::SubackFields::List field.
        static const char* name()
        {
            return "List";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Suback message.
struct SubackCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Suback message.
    static const char* name()
    {
        return "SUBACK";
    }
};

} // namespace message

} // namespace cc_mqtt5
