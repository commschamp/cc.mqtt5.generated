// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Connack message and its fields.

#pragma once

#include <type_traits>
#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/ReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{


/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Connack message.
/// @see mqtt5::message::ConnackFields
struct ConnackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ConnackFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref mqtt5::message::ConnackFields::Flags field.
        static const char* name()
        {
            return "Flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref mqtt5::message::ConnackFields::Flags field.
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
    ///     @ref mqtt5::message::ConnackFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ReasonCodeCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::ConnackFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ConnackFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Connack message.
struct ConnackCommon
{
    /// @brief Name of the @ref mqtt5::message::Connack message.
    static const char* name()
    {
        return "CONNACK";
    }
    
};

} // namespace message

} // namespace mqtt5



