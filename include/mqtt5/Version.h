/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol library as single numeric value
#define MQTT5_VERSION (0U)

namespace mqtt5
{

/// @brief Version of the protocol library as single numeric value
inline constexpr unsigned version()
{
    return MQTT5_VERSION;
}

} // namespace mqtt5


static_assert(COMMS_MAKE_VERSION(1, 0, 0) <= comms::version(),
    "The version of COMMS library is too old");

