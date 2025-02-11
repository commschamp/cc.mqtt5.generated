// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::PacketId field.

#pragma once

#include <cstdint>

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::PacketId field.
struct PacketIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_mqtt5::field::PacketId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_mqtt5::field::PacketId field.
    static const char* name()
    {
        return "Packet ID";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_mqtt5
