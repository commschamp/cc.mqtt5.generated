// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains dispatch to handling function(s) for client input input messages.

#pragma once

#include "cc_mqtt5/MsgId.h"
#include "cc_mqtt5/input/ClientInputMessages.h"
#include "cc_mqtt5/options/DefaultOptions.h"

namespace cc_mqtt5
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = cc_mqtt5::Message<...>;
///     using MyConnack = cc_mqtt5::message::Connack<MyInterface, cc_mqtt5::options::DefaultOptions>;
///     using MyPublish = cc_mqtt5::message::Publish<MyInterface, cc_mqtt5::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyConnack& msg) {...}
///         void handle(MyPublish& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in cc_mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    cc_mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case cc_mqtt5::MsgId_Connack:
    {
        using MsgType = cc_mqtt5::message::Connack<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Publish:
    {
        using MsgType = cc_mqtt5::message::Publish<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Puback:
    {
        using MsgType = cc_mqtt5::message::Puback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Pubrec:
    {
        using MsgType = cc_mqtt5::message::Pubrec<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Pubrel:
    {
        using MsgType = cc_mqtt5::message::Pubrel<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Pubcomp:
    {
        using MsgType = cc_mqtt5::message::Pubcomp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Suback:
    {
        using MsgType = cc_mqtt5::message::Suback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Unsuback:
    {
        using MsgType = cc_mqtt5::message::Unsuback<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Pingresp:
    {
        using MsgType = cc_mqtt5::message::Pingresp<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Disconnect:
    {
        using MsgType = cc_mqtt5::message::Disconnect<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    case cc_mqtt5::MsgId_Auth:
    {
        using MsgType = cc_mqtt5::message::Auth<InterfaceType, TProtOptions>;
        return handler.handle(static_cast<MsgType&>(msg));
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in cc_mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchClientInputMessage(
    cc_mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchClientInputMessage<TProtOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessage(), but passing
///     cc_mqtt5::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessage()
/// @note Defined in cc_mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    cc_mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<cc_mqtt5::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchClientInputMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchClientInputMessageDefaultOptions()
/// @note Defined in cc_mqtt5/dispatch/DispatchClientInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchClientInputMessageDefaultOptions(
    cc_mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchClientInputMessage<cc_mqtt5::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref cc_mqtt5::options::DefaultOptions.
/// @headerfile cc_mqtt5/dispatch/DispatchClientInputMessage.h
template <typename TProtOptions = cc_mqtt5::options::DefaultOptions>
struct ClientInputMsgDispatcher
{
    /// @brief Class detection tag
    using MsgDispatcherTag = void;

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] idx Index (or offset) of the message among those having the same numeric ID.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqtt5::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(cc_mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, idx, msg, handler))
    {
        return cc_mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, idx, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(cc_mqtt5::MsgId id, std::size_t idx, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, idx, msg, handler))
    {
        return dispatch(id, idx, msg, handler);
    }

    /// @brief Dispatch message to its handler.
    /// @details Uses appropriate @ref dispatchClientInputMessage() function.
    /// @param[in] id ID of the message.
    /// @param[in] msg Reference to message object.
    /// @param[in] handler Reference to handler object.
    /// @return What the @ref dispatchClientInputMessage() function returns.
    template <typename TMsg, typename THandler>
    static auto dispatch(cc_mqtt5::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(cc_mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, msg, handler))
    {
        return cc_mqtt5::dispatch::dispatchClientInputMessage<TProtOptions>(id, msg, handler);
    }

    /// @brief Complementary dispatch function.
    /// @details Same as other dispatch without @b TAllMessages template parameter,
    ///     used by  @b comms::processAllWithDispatchViaDispatcher().
    template <typename TAllMessages, typename TMsg, typename THandler>
    static auto dispatch(cc_mqtt5::MsgId id, TMsg& msg, THandler& handler) ->
        decltype(dispatch(id, msg, handler))
    {
        return dispatch(id, msg, handler);
    }
};

/// @brief Message dispatcher class to be used with
///     @b comms::processAllWithDispatchViaDispatcher() function (or similar).
/// @details Same as ClientInputMsgDispatcher, but passing
///     @ref cc_mqtt5::options::DefaultOptions as template parameter.
/// @note Defined in cc_mqtt5/dispatch/DispatchClientInputMessage.h
using ClientInputMsgDispatcherDefaultOptions =
    ClientInputMsgDispatcher<>;

} // namespace dispatch

} // namespace cc_mqtt5
