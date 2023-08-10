// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Connack message and its fields.

#pragma once

#include <type_traits>
#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/ReasonCodeCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Connack message.
/// @see cc_mqtt5::message::ConnackFields
struct ConnackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnackFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnackFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_mqtt5::message::ConnackFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Session Present"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnackFields::ReasonCode field.
    using ReasonCodeCommon = cc_mqtt5::field::ReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnackFields::PropertiesList field.
    using PropertiesListMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnackFields::PropertiesList field.
    using PropertiesListCommon = cc_mqtt5::field::PropertiesListCommon;
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Connack message.
struct ConnackCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Connack message.
    static const char* name()
    {
        return "CONNACK";
    }
};

} // namespace message

} // namespace cc_mqtt5
