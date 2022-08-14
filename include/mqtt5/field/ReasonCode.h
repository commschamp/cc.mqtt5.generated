// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Reason Code"</b> field.

#pragma once

#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/ReasonCodeCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Reason Code"</b> field.
/// @see @ref mqtt5::field::ReasonCodeCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ReasonCode : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        mqtt5::field::ReasonCodeCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>,
        comms::option::def::ValidNumValue<4>,
        comms::option::def::ValidNumValueRange<16, 17>,
        comms::option::def::ValidNumValueRange<24, 25>,
        comms::option::def::ValidNumValueRange<128, 162>
    >
{
    using Base =
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::ReasonCodeCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 2>,
            comms::option::def::ValidNumValue<4>,
            comms::option::def::ValidNumValueRange<16, 17>,
            comms::option::def::ValidNumValueRange<24, 25>,
            comms::option::def::ValidNumValueRange<128, 162>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = mqtt5::field::ReasonCodeCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref mqtt5::field::ReasonCodeCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = mqtt5::field::ReasonCodeCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref mqtt5::field::ReasonCodeCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return mqtt5::field::ReasonCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref mqtt5::field::ReasonCodeCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return mqtt5::field::ReasonCodeCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::ReasonCodeCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
