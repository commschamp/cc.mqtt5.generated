/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct Length : public
    comms::field::IntValue<
        mqtt5::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Length";
    }
    
};

} // namespace field

} // namespace mqtt5


