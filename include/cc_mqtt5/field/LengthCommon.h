// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::Length field.

#pragma once

#include <cstdint>

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::Length field.
struct LengthCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqtt5::field::Length field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_mqtt5::field::Length field.
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

} // namespace cc_mqtt5
