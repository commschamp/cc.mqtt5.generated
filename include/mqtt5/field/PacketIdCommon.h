// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PacketId field.

#pragma once

#include <cstdint>

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::PacketId field.
struct PacketIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqtt5::field::PacketId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref mqtt5::field::PacketId field.
    static const char* name()
    {
        return "Packet ID";
    }
    
};

} // namespace field

} // namespace mqtt5


