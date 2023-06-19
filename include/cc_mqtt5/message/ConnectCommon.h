// Generated by commsdsl2comms v6.2.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::message::Connect message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "cc_mqtt5/field/BinDataCommon.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/ProtocolNameCommon.h"
#include "cc_mqtt5/field/QosCommon.h"
#include "cc_mqtt5/field/StringCommon.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_mqtt5::message::Connect message.
/// @see cc_mqtt5::message::ConnectFields
struct ConnectFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::ProtocolName field.
    using ProtocolNameCommon = cc_mqtt5::field::ProtocolNameCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::ProtocolVersion field.
    struct ProtocolVersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_mqtt5::message::ConnectFields::ProtocolVersion field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::ProtocolVersion field.
        static const char* name()
        {
            return "Protocol Version";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::FlagsMembers::Low field.
        struct LowCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::FlagsMembers::Low field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_mqtt5::message::ConnectFields::FlagsMembers::Low field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    nullptr,
                    "Clean Start",
                    "Will Flag"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::FlagsMembers::WillQos field.
        struct WillQosCommon : public cc_mqtt5::field::QosCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::FlagsMembers::WillQos field.
            static const char* name()
            {
                return "Will QoS";
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::FlagsMembers::High field.
        struct HighCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::FlagsMembers::High field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_mqtt5::message::ConnectFields::FlagsMembers::High field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "Will Retain",
                    "Password Flag",
                    "User Name Flag"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::Flags field.
        static const char* name()
        {
            return "Connect Flags";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::KeepAlive field.
    struct KeepAliveCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_mqtt5::message::ConnectFields::KeepAlive field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::KeepAlive field.
        static const char* name()
        {
            return "Keep Alive";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::Properties field.
    using PropertiesMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::Properties field.
    using PropertiesCommon = cc_mqtt5::field::PropertiesListCommon;

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::ClientId field.
    struct ClientIdCommon : public cc_mqtt5::field::StringCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::ClientId field.
        static const char* name()
        {
            return "Client ID";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::WillProperties field.
    struct WillPropertiesMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_mqtt5::message::ConnectFields::WillPropertiesMembers::Properties field.
        using PropertiesMembersCommon = cc_mqtt5::field::PropertiesListMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::WillPropertiesMembers::Properties field.
        struct PropertiesCommon : public cc_mqtt5::field::PropertiesListCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillPropertiesMembers::Properties field.
            static const char* name()
            {
                return "Will Properties";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::WillProperties field.
    struct WillPropertiesCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillProperties field.
        static const char* name()
        {
            return "Will Properties";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::WillTopic field.
    struct WillTopicMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::WillTopicMembers::WillTopic field.
        struct WillTopicCommon : public cc_mqtt5::field::StringCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillTopicMembers::WillTopic field.
            static const char* name()
            {
                return "Will Topic";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::WillTopic field.
    struct WillTopicCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillTopic field.
        static const char* name()
        {
            return "Will Topic";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::WillMessage field.
    struct WillMessageMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::WillMessageMembers::WillMessage field.
        struct WillMessageCommon : public cc_mqtt5::field::BinDataCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillMessageMembers::WillMessage field.
            static const char* name()
            {
                return "Will Message";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::WillMessage field.
    struct WillMessageCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::WillMessage field.
        static const char* name()
        {
            return "Will Message";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::UserName field.
    struct UserNameMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::UserNameMembers::UserName field.
        struct UserNameCommon : public cc_mqtt5::field::StringCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::UserNameMembers::UserName field.
            static const char* name()
            {
                return "User Name";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::UserName field.
    struct UserNameCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::UserName field.
        static const char* name()
        {
            return "User Name";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_mqtt5::message::ConnectFields::Password field.
    struct PasswordMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::message::ConnectFields::PasswordMembers::Password field.
        struct PasswordCommon : public cc_mqtt5::field::BinDataCommon
        {
            /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::PasswordMembers::Password field.
            static const char* name()
            {
                return "Password";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_mqtt5::message::ConnectFields::Password field.
    struct PasswordCommon
    {
        /// @brief Name of the @ref cc_mqtt5::message::ConnectFields::Password field.
        static const char* name()
        {
            return "Password";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_mqtt5::message::Connect message.
struct ConnectCommon
{
    /// @brief Name of the @ref cc_mqtt5::message::Connect message.
    static const char* name()
    {
        return "CONNECT";
    }
};

} // namespace message

} // namespace cc_mqtt5
