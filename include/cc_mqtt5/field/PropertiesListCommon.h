// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::PropertiesList field.

#pragma once

#include <cstdint>

namespace cc_mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_mqtt5::field::PropertiesList field.
struct PropertiesListMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::field::PropertiesListMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_mqtt5::field::PropertiesListMembers::Length field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_mqtt5::field::PropertiesListMembers::Length field.
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
};

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::PropertiesList field.
struct PropertiesListCommon
{
    /// @brief Name of the @ref cc_mqtt5::field::PropertiesList field.
    static const char* name()
    {
        return "Properties";
    }
};

} // namespace field

} // namespace cc_mqtt5
