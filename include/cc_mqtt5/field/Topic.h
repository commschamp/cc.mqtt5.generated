// Generated by commsdsl2comms v6.2.3

/// @file
/// @brief Contains definition of <b>"Topic"</b> field.

#pragma once

#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/String.h"
#include "cc_mqtt5/field/TopicCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Definition of <b>"Topic"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class Topic : public
    cc_mqtt5::field::String<
        TOpt,
        TExtraOpts...
    >
{
    using Base =
        cc_mqtt5::field::String<
            TOpt,
            TExtraOpts...
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::TopicCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
