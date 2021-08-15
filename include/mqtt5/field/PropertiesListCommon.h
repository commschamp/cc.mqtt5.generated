// Generated by commsdsl2comms v3.6.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PropertiesList field.

#pragma once

#include <cstdint>

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::PropertiesList list.
struct PropertiesListMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PropertiesListMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PropertiesListMembers::Length field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref mqtt5::field::PropertiesListMembers::Length field.
        static const char* name()
        {
            return "Length";
        }
        
    };
    
};

/// @brief Scope for all the common definitions of the
///     @ref mqtt5::field::PropertiesList field.
struct PropertiesListCommon
{
    /// @brief Name of the @ref mqtt5::field::PropertiesList field.
    static const char* name()
    {
        return "Properties";
    }
    
};


} // namespace field

} // namespace mqtt5


