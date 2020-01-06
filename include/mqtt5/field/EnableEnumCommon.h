// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::EnableEnum field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::EnableEnum field.
struct EnableEnumCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::EnableEnum field.
    enum class ValueType : std::uint8_t
    {
        Disabled = 0, ///< value @b Disabled
        Enabled = 1, ///< value @b Enabled
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref mqtt5::field::EnableEnum field.
    static const char* name()
    {
        return "EnableEnum";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "Disabled",
            "Enabled"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref mqtt5::field::EnableEnum field.
using EnableEnumVal = EnableEnumCommon::ValueType;

} // namespace field

} // namespace mqtt5

