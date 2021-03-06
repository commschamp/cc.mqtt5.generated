// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"Qos"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/QosCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Qos"</b> field.
/// @see @ref mqtt5::field::QosVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class Qos : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        mqtt5::field::QosVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>
    >
{
    using Base = 
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::QosVal,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 2>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::QosCommon::name();
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        return mqtt5::field::QosCommon::valueName(val);
    }
    
    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }
    
};

} // namespace field

} // namespace mqtt5


