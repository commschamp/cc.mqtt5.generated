// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/LengthCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class Length : public
    comms::field::IntValue<
        cc_mqtt5::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::HasName
    >
{
    using Base =
        comms::field::IntValue<
            cc_mqtt5::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::HasName
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_mqtt5::field::LengthCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::LengthCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
