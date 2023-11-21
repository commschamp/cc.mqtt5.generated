// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains definition of <b>"String"</b> field.

#pragma once

#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/Length.h"
#include "cc_mqtt5/field/StringCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"String"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class String : public
    comms::field::String<
        cc_mqtt5::field::FieldBase<>,
        TExtraOpts...,
        typename TOpt::field::String,
        comms::option::def::SequenceSerLengthFieldPrefix<cc_mqtt5::field::Length<TOpt> >
    >
{
    using Base =
        comms::field::String<
            cc_mqtt5::field::FieldBase<>,
            TExtraOpts...,
            typename TOpt::field::String,
            comms::option::def::SequenceSerLengthFieldPrefix<cc_mqtt5::field::Length<TOpt> >
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::StringCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
