// Generated by commsdsl2comms v6.2.0

/// @file
/// @brief Contains definition of protocol server input messages dynamic memory allocation message factory options.

#pragma once

#include "cc_mqtt5/factory/ServerInputMessagesDynMemMsgFactory.h"
#include "cc_mqtt5/options/DefaultOptions.h"

namespace cc_mqtt5
{

namespace options
{

/// @brief Provided server input messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_mqtt5::options::DefaultOptions>
struct ServerInputMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_mqtt5::factory::ServerInputMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_mqtt5::factory::ServerInputMessagesDynMemMsgFactory<TInterface, ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;
};

/// @brief Alias to @ref ServerInputMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using ServerInputMessagesDynMemMsgFactoryDefaultOptions = ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_mqtt5
