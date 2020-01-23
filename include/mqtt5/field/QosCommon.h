// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::Qos field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::Qos field.
struct QosCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::Qos field.
    enum class ValueType : std::uint8_t
    {
        AtMostOnceDelivery = 0, ///< value @b AtMostOnceDelivery
        AtLeastOnceDelivery = 1, ///< value @b AtLeastOnceDelivery
        ExactlyOnceDelivery = 2, ///< value @b ExactlyOnceDelivery
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref mqtt5::field::Qos field.
    static const char* name()
    {
        return "Qos";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "AtMostOnceDelivery",
            "AtLeastOnceDelivery",
            "ExactlyOnceDelivery"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref mqtt5::field::Qos field.
using QosVal = QosCommon::ValueType;

} // namespace field

} // namespace mqtt5


