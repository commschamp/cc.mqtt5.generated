// Generated by commsdsl2comms v6.2.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Pubrel message and its fields.

#pragma once

#include "cc_mqtt5/field/PacketIdCommon.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/ReasonCodeCommon.h"

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
    using ReasonCodeCommon = cc_mqtt5::field::ReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::PubrelFields::PropertiesList field.
    using PropertiesListMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::PubrelFields::PropertiesList field.
    using PropertiesListCommon = cc_mqtt5::field::PropertiesListCommon;
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
