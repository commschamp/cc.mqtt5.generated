// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::Message interface fields.

#pragma once

#include <type_traits>
#include "cc_mqtt5/field/QosCommon.h"

namespace cc_mqtt5
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::Message interface.
/// @see cc_mqtt5::MessageFields
struct MessageFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::MessageFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::MessageFields::FlagsMembers::Retain field.
        struct RetainCommon
        {
            /// @brief Name of the @ref cc_mqtt5::MessageFields::FlagsMembers::Retain field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_mqtt5::MessageFields::FlagsMembers::Retain field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "retain"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::MessageFields::FlagsMembers::Qos field.
        using QosCommon = cc_mqtt5::field::QosCommon;

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::MessageFields::FlagsMembers::Dup field.
        struct DupCommon
        {
            /// @brief Name of the @ref cc_mqtt5::MessageFields::FlagsMembers::Dup field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_mqtt5::MessageFields::FlagsMembers::Dup field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "dup"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::MessageFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_mqtt5::MessageFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }
    };
};
} // namespace cc_mqtt5
