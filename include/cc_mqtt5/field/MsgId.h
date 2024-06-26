// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/MsgIdCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @see @ref cc_mqtt5::MsgId
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class MsgId : public
    comms::field::EnumValue<
        cc_mqtt5::field::FieldBase<>,
        cc_mqtt5::field::MsgIdCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<1, 15>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_mqtt5::field::FieldBase<>,
            cc_mqtt5::field::MsgIdCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<1, 15>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_mqtt5::field::MsgIdCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_mqtt5::field::MsgIdCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_mqtt5::field::MsgIdCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqtt5::field::MsgIdCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_mqtt5::field::MsgIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_mqtt5::field::MsgIdCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_mqtt5::field::MsgIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_mqtt5::field::MsgIdCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_mqtt5::field::MsgIdCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::MsgIdCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
