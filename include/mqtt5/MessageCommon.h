// Generated by commsdsl2comms v3.7.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::Message interface fields.

#pragma once

#include <type_traits>
#include "mqtt5/field/QosCommon.h"

namespace mqtt5
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::Message interface.
/// @see mqtt5::MessageFields
struct MessageFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt5::MessageFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref mqtt5::MessageFields::FlagsMembers::Retain field.
        struct RetainCommon
        {
            /// @brief Name of the @ref mqtt5::MessageFields::FlagsMembers::Retain field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref mqtt5::MessageFields::FlagsMembers::Retain field.
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
        ///     @ref mqtt5::MessageFields::FlagsMembers::Qos field.
        using QosCommon = mqtt5::field::QosCommon;
        
        /// @brief Common functions for
        ///     @ref mqtt5::MessageFields::FlagsMembers::Dup field.
        struct DupCommon
        {
            /// @brief Name of the @ref mqtt5::MessageFields::FlagsMembers::Dup field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref mqtt5::MessageFields::FlagsMembers::Dup field.
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
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt5::MessageFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref mqtt5::MessageFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }
        
    };
    
    
};
} // namespace mqtt5


