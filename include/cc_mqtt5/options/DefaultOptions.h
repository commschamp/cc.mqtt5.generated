// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace cc_mqtt5
{

namespace options
{

/// @brief Empty class to serve as the base for options.
struct EmptyOptions {};

/// @brief Default (empty) options of the protocol.
template <typename TBase = EmptyOptions>
struct DefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref
        ///     cc_mqtt5::field::BinData field.
        using BinData = comms::option::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::field::PropertiesList field.
        using PropertiesList = comms::option::EmptyOption;

        struct PropertyMembers
        {
            struct ContentTypeMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::ContentTypeMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct ContentTypeMembers

            struct ResponseTopicMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::ResponseTopicMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct ResponseTopicMembers

            struct CorrelationDataMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::CorrelationDataMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct CorrelationDataMembers

            struct AssignedClientIdMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::AssignedClientIdMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct AssignedClientIdMembers

            struct AuthMethodMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::AuthMethodMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct AuthMethodMembers

            struct AuthDataMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::AuthDataMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct AuthDataMembers

            struct ResponseInfoMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::ResponseInfoMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct ResponseInfoMembers

            struct ServerRefMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::ServerRefMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct ServerRefMembers

            struct ReasonStrMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::field::PropertyMembers::ReasonStrMembers::Value
                ///     field.
                using Value = comms::option::EmptyOption;
            }; // struct ReasonStrMembers

            struct UserPropertyMembers
            {
                struct ValueMembers
                {
                    /// @brief Extra options for @ref
                    ///     cc_mqtt5::field::PropertyMembers::UserPropertyMembers::ValueMembers::First
                    ///     field.
                    using First = comms::option::EmptyOption;

                    /// @brief Extra options for @ref
                    ///     cc_mqtt5::field::PropertyMembers::UserPropertyMembers::ValueMembers::Second
                    ///     field.
                    using Second = comms::option::EmptyOption;
                }; // struct ValueMembers
            }; // struct UserPropertyMembers
        }; // struct PropertyMembers

        /// @brief Extra options for @ref
        ///     cc_mqtt5::field::ProtocolName field.
        using ProtocolName = comms::option::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::field::String field.
        using String = comms::option::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::field::Topic field.
        using Topic = comms::option::EmptyOption;
    }; // struct field

    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Connack message.
        struct ConnackFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::ConnackFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Connack message.
        using Connack = comms::option::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Connect message.
        struct ConnectFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::ConnectFields::ProtocolName
            ///     field.
            using ProtocolName = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::ConnectFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::ConnectFields::ClientId
            ///     field.
            using ClientId = comms::option::EmptyOption;

            struct WillPropertiesMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::message::ConnectFields::WillPropertiesMembers::ActWillProperties
                ///     field.
                using ActWillProperties = comms::option::EmptyOption;
            }; // struct WillPropertiesMembers

            struct WillTopicMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::message::ConnectFields::WillTopicMembers::WillTopic
                ///     field.
                using WillTopic = comms::option::EmptyOption;
            }; // struct WillTopicMembers

            struct WillMessageMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::message::ConnectFields::WillMessageMembers::WillMessage
                ///     field.
                using WillMessage = comms::option::EmptyOption;
            }; // struct WillMessageMembers

            struct UserNameMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::message::ConnectFields::UserNameMembers::UserName
                ///     field.
                using UserName = comms::option::EmptyOption;
            }; // struct UserNameMembers

            struct PasswordMembers
            {
                /// @brief Extra options for @ref
                ///     cc_mqtt5::message::ConnectFields::PasswordMembers::Password
                ///     field.
                using Password = comms::option::EmptyOption;
            }; // struct PasswordMembers
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Connect message.
        using Connect = comms::option::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Pingreq message.
        using Pingreq = comms::option::EmptyOption;

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Pingresp message.
        using Pingresp = comms::option::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Publish message.
        struct PublishFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::PublishFields::Topic
            ///     field.
            using Topic = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::PublishFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::PublishFields::Payload
            ///     field.
            using Payload = comms::option::EmptyOption;
        };

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Suback message.
        struct SubackFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::SubackFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::SubackFields::List
            ///     field.
            using List = comms::option::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Suback message.
        using Suback = comms::option::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Subscribe message.
        struct SubscribeFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::SubscribeFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            struct ListMembers
            {
                struct ElementMembers
                {
                    /// @brief Extra options for @ref
                    ///     cc_mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Topic
                    ///     field.
                    using Topic = comms::option::EmptyOption;
                }; // struct ElementMembers
            }; // struct ListMembers

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::SubscribeFields::List
            ///     field.
            using List = comms::option::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Subscribe message.
        using Subscribe = comms::option::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Unsuback message.
        struct UnsubackFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::UnsubackFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::UnsubackFields::List
            ///     field.
            using List = comms::option::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Unsuback message.
        using Unsuback = comms::option::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_mqtt5::message::Unsubscribe message.
        struct UnsubscribeFields
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::UnsubscribeFields::Properties
            ///     field.
            using Properties = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::message::UnsubscribeFields::List
            ///     field.
            using List = comms::option::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_mqtt5::message::Unsubscribe message.
        using Unsubscribe = comms::option::EmptyOption;
    }; // struct message

    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_mqtt5::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_mqtt5::frame::FrameLayers::Data
            ///     layer.
            using Data = comms::option::EmptyOption;

            /// @brief Extra options for @ref
            ///     cc_mqtt5::frame::FrameLayers::IdAndFlags
            ///     layer.
            using IdAndFlags = comms::option::EmptyOption;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Default (empty) options of the protocol.
using DefaultOptions = DefaultOptionsT<>;

} // namespace options

} // namespace cc_mqtt5
