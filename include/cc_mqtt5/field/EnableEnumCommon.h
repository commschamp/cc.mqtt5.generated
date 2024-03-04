// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::EnableEnum field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::EnableEnum field.
struct EnableEnumCommon
{
    /// @brief Values enumerator for
    ///     @ref cc_mqtt5::field::EnableEnum field.
    enum class ValueType : std::uint8_t
    {
        Disabled = 0, ///< value @b Disabled. 
        Enabled = 1, ///< value @b Enabled. 

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = const char*;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_mqtt5::field::EnableEnum field.
    static const char* name()
    {
        return "EnableEnum";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
            return nullptr;
        }

        return namesMapInfo.first[static_cast<std::size_t>(val)];
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const char* Map[] = {
            "Disabled",
            "Enabled"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref cc_mqtt5::field::EnableEnum field.
using EnableEnumVal = EnableEnumCommon::ValueType;

} // namespace field

} // namespace cc_mqtt5
