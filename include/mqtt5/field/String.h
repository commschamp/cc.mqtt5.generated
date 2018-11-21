/// @file
/// @brief Contains definition of <b>"String"</b> field.

#pragma once

#include "comms/field/String.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/Length.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"String"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::DefaultOptions, typename... TExtraOpts>
struct String : public
    comms::field::String<
        mqtt5::field::FieldBase<>,
        typename TOpt::field::String,
        TExtraOpts...,
        comms::option::SequenceSerLengthFieldPrefix<mqtt5::field::Length<TOpt> >
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "String";
    }
    
};

} // namespace field

} // namespace mqtt5


