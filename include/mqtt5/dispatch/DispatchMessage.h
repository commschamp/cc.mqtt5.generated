/// @file
/// @brief Contains dispatch to handling function(s) for all input messages.

#pragma once

#include <type_traits>
#include "mqtt5/MsgId.h"
#include "mqtt5/input/AllMessages.h"

namespace mqtt5
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = mqtt5::Message<...>;
///     using MyConnect = mqtt5::message::Connect<MyInterface, mqtt5::options::DefaultOptions>;
///     using MyConnack = mqtt5::message::Connack<MyInterface, mqtt5::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyConnect& msg) {...}
///         void handle(MyConnack& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in mqtt5/dispatch/DispatchMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchMessage(
    mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case mqtt5::MsgId_Connect:
    {
        using MsgType = mqtt5::message::Connect<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Connack:
    {
        using MsgType = mqtt5::message::Connack<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Publish:
    {
        using MsgType = mqtt5::message::Publish<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Puback:
    {
        using MsgType = mqtt5::message::Puback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Pubrec:
    {
        using MsgType = mqtt5::message::Pubrec<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Pubrel:
    {
        using MsgType = mqtt5::message::Pubrel<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Pubcomp:
    {
        using MsgType = mqtt5::message::Pubcomp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Subscribe:
    {
        using MsgType = mqtt5::message::Subscribe<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Suback:
    {
        using MsgType = mqtt5::message::Suback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Unsubscribe:
    {
        using MsgType = mqtt5::message::Unsubscribe<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Unsuback:
    {
        using MsgType = mqtt5::message::Unsuback<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Pingreq:
    {
        using MsgType = mqtt5::message::Pingreq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Pingresp:
    {
        using MsgType = mqtt5::message::Pingresp<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Disconnect:
    {
        using MsgType = mqtt5::message::Disconnect<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case mqtt5::MsgId_Auth:
    {
        using MsgType = mqtt5::message::Auth<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessage(), but receives extra @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref mqtt5::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
///     Expected to be @b 0.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessage()
/// @note Defined in mqtt5/dispatch/DispatchMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchMessage(
    mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    if (idx != 0U) {
        return handler.handle(msg);
    }
    return dispatchMessage(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessage(), but passing
///     mqtt5::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessage()
/// @note Defined in mqtt5/dispatch/DispatchMessage.h
template<typename TMsg, typename THandler>
auto dispatchMessageDefaultOptions(
    mqtt5::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchMessage<mqtt5::options::DefaultOptions>(id, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchMessageDefaultOptions(), 
///     but receives extra @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchMessageDefaultOptions()
/// @note Defined in mqtt5/dispatch/DispatchMessage.h
template<typename TMsg, typename THandler>
auto dispatchMessageDefaultOptions(
    mqtt5::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchMessage<mqtt5::options::DefaultOptions>(id, idx, msg, handler);
}

} // namespace dispatch

} // namespace mqtt5


