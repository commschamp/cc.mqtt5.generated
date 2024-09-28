// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Disconnect message and its fields.

#pragma once

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Disconnect message.
/// @see cc_mqtt5::message::DisconnectFields
struct DisconnectFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::DisconnectFields::ReasonCode field.
    struct ReasonCodeCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::DisconnectFields::ReasonCode field.
        static const char* name()
        {
            return "Reason Code";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::DisconnectFields::Properties field.
    struct PropertiesCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::DisconnectFields::Properties field.
        static const char* name()
        {
            return "Properties";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Disconnect message.
struct DisconnectCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Disconnect message.
    static const char* name()
    {
        return "DISCONNECT";
    }
};

} // namespace message

} // namespace cc_mqtt5
