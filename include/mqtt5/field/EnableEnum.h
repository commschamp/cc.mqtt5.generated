/// @file
/// @brief Contains definition of <b>"EnableEnum"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Values enumerator for @ref mqtt5::field::EnableEnum field.
enum class EnableEnumVal : std::uint8_t
{
    Disabled = 0, ///< value @b Disabled
    Enabled = 1, ///< value @b Enabled
    
};

/// @brief Definition of <b>"EnableEnum"</b> field.
/// @see @ref mqtt5::field::EnableEnumVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct EnableEnum : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        EnableEnumVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "EnableEnum";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(EnableEnumVal val)
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

} // namespace field

} // namespace mqtt5


