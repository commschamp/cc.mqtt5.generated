/// @file
/// @brief Contains definition of <b>"EnableEnum"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/field/FieldBase.h"

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
template <typename TOpt = mqtt5::DefaultOptions, typename... TExtraOpts>
struct EnableEnum : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        EnableEnumVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "EnableEnum";
    }
    
};

} // namespace field

} // namespace mqtt5


