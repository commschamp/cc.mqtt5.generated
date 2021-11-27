// Generated by commsdsl2comms v3.7.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::Length field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::Length field.
struct LengthCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqtt5::field::Length field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref mqtt5::field::Length field.
    static const char* name()
    {
        return "Length";
    }
    
    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
    
};

} // namespace field

} // namespace mqtt5


