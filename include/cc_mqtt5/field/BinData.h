// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains definition of <b>"BinData"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqtt5/field/BinDataCommon.h"
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/Length.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"BinData"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class BinData : public
    comms::field::ArrayList<
        cc_mqtt5::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::BinData,
        comms::option::def::SequenceSerLengthFieldPrefix<cc_mqtt5::field::Length<TOpt> >
    >
{
    using Base =
        comms::field::ArrayList<
            cc_mqtt5::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            typename TOpt::field::BinData,
            comms::option::def::SequenceSerLengthFieldPrefix<cc_mqtt5::field::Length<TOpt> >
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::BinDataCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
