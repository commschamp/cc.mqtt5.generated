// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Publish message and its fields.

#pragma once

#include "mqtt5/field/PropertiesListCommon.h"
#include "mqtt5/field/TopicCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Publish message.
/// @see mqtt5::message::PublishFields
struct PublishFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PublishFields::Topic field.
    using TopicCommon = mqtt5::field::TopicCommon;
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt5::message::PublishFields::PacketId field.
    struct PacketIdCommon
    {
        /// @brief Name of the @ref mqtt5::message::PublishFields::PacketId field.
        static const char* name()
        {
            return "Packet ID";
        }
        
    };
    
    
    /// @brief Common types and functions for members of
    ///     @ref mqtt5::message::PublishFields::PropertiesList field.
    using PropertiesListMembersCommon = mqtt5::field::PropertiesListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PublishFields::PropertiesList field.
    using PropertiesListCommon = mqtt5::field::PropertiesListCommon;
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqtt5::message::PublishFields::Payload field.
    struct PayloadCommon
    {
        /// @brief Name of the @ref mqtt5::message::PublishFields::Payload field.
        static const char* name()
        {
            return "Payload";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Publish message.
/// @see mqtt5::message::Publish
struct PublishCommon
{
    /// @brief Name of the @ref mqtt5::message::Publish message.
    static const char* name()
    {
        return "PUBLISH";
    }
    
};

} // namespace message

} // namespace mqtt5


