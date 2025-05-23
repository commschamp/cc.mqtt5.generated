// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::VarLenInt field.

#pragma once

#include <cstdint>

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::VarLenInt field.
struct VarLenIntCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqtt5::field::VarLenInt field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref cc_mqtt5::field::VarLenInt field.
    static const char* name()
    {
        return "VarLenInt";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_mqtt5
