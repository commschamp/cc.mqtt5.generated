/// @file
/// @brief Contains definition of <b>"VarLenInt"</b> field.

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

/// @brief Definition of <b>"VarLenInt"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct VarLenInt : public
    comms::field::IntValue<
        mqtt5::field::FieldBase<comms::option::LittleEndian>,
        std::uint32_t,
        TExtraOpts...,
        comms::option::VarLength<1U, 4U>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "VarLenInt";
    }
    
};

} // namespace field

} // namespace mqtt5


