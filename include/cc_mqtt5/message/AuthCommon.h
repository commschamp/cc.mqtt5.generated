// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Auth message and its fields.

#pragma once

#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/ReasonCodeCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Auth message.
/// @see cc_mqtt5::message::AuthFields
struct AuthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::AuthFields::ReasonCode field.
    using ReasonCodeCommon = cc_mqtt5::field::ReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::AuthFields::PropertiesList field.
    using PropertiesListMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::AuthFields::PropertiesList field.
    using PropertiesListCommon = cc_mqtt5::field::PropertiesListCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Auth message.
struct AuthCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Auth message.
    static const char* name()
    {
        return "AUTH";
    }
};

} // namespace message

} // namespace cc_mqtt5
