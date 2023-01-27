// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Puback message and its fields.

#pragma once

#include "cc_mqtt5/field/PacketIdCommon.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/ReasonCodeCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Puback message.
/// @see cc_mqtt5::message::PubackFields
struct PubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubackFields::PacketId field.
    using PacketIdCommon = cc_mqtt5::field::PacketIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubackFields::ReasonCode field.
    using ReasonCodeCommon = cc_mqtt5::field::ReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::PubackFields::PropertiesList field.
    using PropertiesListMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubackFields::PropertiesList field.
    using PropertiesListCommon = cc_mqtt5::field::PropertiesListCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Puback message.
struct PubackCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Puback message.
    static const char* name()
    {
        return "PUBACK";
    }
};

} // namespace message

} // namespace cc_mqtt5
