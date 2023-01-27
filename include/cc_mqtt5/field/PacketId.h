// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"Packet ID"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/PacketIdCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"Packet ID"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PacketId : public
    comms::field::IntValue<
        cc_mqtt5::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    using Base =
        comms::field::IntValue<
            cc_mqtt5::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_mqtt5::field::PacketIdCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::PacketIdCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
