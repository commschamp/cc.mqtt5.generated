// Generated by commsdsl2comms v3.6.4

/// @file
/// @brief Contains definition of <b>"EnableEnum"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/EnableEnumCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"EnableEnum"</b> field.
/// @see @ref mqtt5::field::EnableEnumVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class EnableEnum : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        mqtt5::field::EnableEnumVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>
    >
{
    using Base = 
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::EnableEnumVal,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 1>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::EnableEnumCommon::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return mqtt5::field::EnableEnumCommon::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace mqtt5


