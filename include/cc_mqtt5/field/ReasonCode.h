// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of <b>"Reason Code"</b> field.

#pragma once

#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/ReasonCodeCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"Reason Code"</b> field.
/// @see @ref cc_mqtt5::field::ReasonCodeCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ReasonCode : public
    comms::field::EnumValue<
        cc_mqtt5::field::FieldBase<>,
        cc_mqtt5::field::ReasonCodeCommon::ValueType,
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
            cc_mqtt5::field::FieldBase<>,
            cc_mqtt5::field::ReasonCodeCommon::ValueType,
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
    using ValueNameInfo = cc_mqtt5::field::ReasonCodeCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_mqtt5::field::ReasonCodeCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_mqtt5::field::ReasonCodeCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqtt5::field::ReasonCodeCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_mqtt5::field::ReasonCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqtt5::field::ReasonCodeCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_mqtt5::field::ReasonCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_mqtt5::field::ReasonCodeCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_mqtt5::field::ReasonCodeCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::ReasonCodeCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
