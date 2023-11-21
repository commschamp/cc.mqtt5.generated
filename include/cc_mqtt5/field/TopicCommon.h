// Generated by commsdsl2comms v6.2.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::Topic field.

#pragma once

#include "cc_mqtt5/field/StringCommon.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::Topic field.
struct TopicCommon : public cc_mqtt5::field::StringCommon
{
    /// @brief Name of the @ref cc_mqtt5::field::Topic field.
    static const char* name()
    {
        return "Topic";
    }
};

} // namespace field

} // namespace cc_mqtt5
