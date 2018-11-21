/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace mqtt5
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref mqtt5::field::BinData field.
        using BinData = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::field::PropertiesList field.
        using PropertiesList = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::field::ProtocolName field.
        using ProtocolName = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::field::String field.
        using String = comms::option::EmptyOption;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref mqtt5::message::Connack message.
        using Connack = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Connect message.
        using Connect = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Pingreq message.
        using Pingreq = comms::option::EmptyOption;
        
        /// @brief Extra options for @ref mqtt5::message::Pingresp message.
        using Pingresp = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Publish message.
        struct PublishFields
        {
            /// @brief Extra options for @ref mqtt5::message::PublishFields::Payload field.
            using Payload = comms::option::EmptyOption;
            
        }; // struct PublishFields
        
        
        /// @brief Extra options for fields of @ref mqtt5::message::Suback message.
        struct SubackFields
        {
            /// @brief Extra options for @ref mqtt5::message::SubackFields::List field.
            using List = comms::option::EmptyOption;
            
        }; // struct SubackFields
        
        /// @brief Extra options for @ref mqtt5::message::Suback message.
        using Suback = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Subscribe message.
        struct SubscribeFields
        {
            /// @brief Extra options for @ref mqtt5::message::SubscribeFields::List field.
            using List = comms::option::EmptyOption;
            
        }; // struct SubscribeFields
        
        /// @brief Extra options for @ref mqtt5::message::Subscribe message.
        using Subscribe = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Unsuback message.
        struct UnsubackFields
        {
            /// @brief Extra options for @ref mqtt5::message::UnsubackFields::List field.
            using List = comms::option::EmptyOption;
            
        }; // struct UnsubackFields
        
        /// @brief Extra options for @ref mqtt5::message::Unsuback message.
        using Unsuback = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref mqtt5::message::Unsubscribe message.
        struct UnsubscribeFields
        {
            /// @brief Extra options for @ref mqtt5::message::UnsubscribeFields::List field.
            using List = comms::option::EmptyOption;
            
        }; // struct UnsubscribeFields
        
        /// @brief Extra options for @ref mqtt5::message::Unsubscribe message.
        using Unsubscribe = comms::option::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of @ref mqtt5::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref mqtt5::frame::FrameLayers::Data layer.
            using Data = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref mqtt5::frame::FrameLayers::IdAndFlags layer.
            using IdAndFlags = comms::option::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace mqtt5


