// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_mqtt5::field::ReasonCode field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace cc_mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_mqtt5::field::ReasonCode field.
struct ReasonCodeCommon
{
    /// @brief Values enumerator for
    ///     @ref cc_mqtt5::field::ReasonCode field.
    enum class ValueType : std::uint8_t
    {
        Success = 0, ///< value @b Success. 
        NormalDisconnection = 0, ///< value <b>Normal Disconnection</b>. 
        GrantedQos0 = 0, ///< value <b>Granted QoS0</b>. 
        GrantedQos1 = 1, ///< value <b>Granted QoS1</b>. 
        GrantedQos2 = 2, ///< value <b>Granted QoS2</b>. 
        DisconnectWithWill = 4, ///< value <b>Disconnect w/ Will</b>. 
        NoMatchingSubscribers = 16, ///< value <b>No Matching Subscribers</b>. 
        NoSubscriptionExisted = 17, ///< value <b>No Subscription Existed</b>. 
        ContinueAuth = 24, ///< value <b>Continue authentication</b>. 
        ReAuth = 25, ///< value <b>Re-authenticate</b>. 
        UnspecifiedError = 128, ///< value <b>Unspecified error</b>. 
        MalformedPacket = 129, ///< value <b>Malformed Packet</b>. 
        ProtocolError = 130, ///< value <b>Protocol Error</b>. 
        ImplSpecificError = 131, ///< value <b>Impl. Specific Error</b>. 
        UnsupportedVersion = 132, ///< value <b>Unsupported Version</b>. 
        ClientIdInvalid = 133, ///< value <b>Client ID Invalid</b>. 
        BadUserPassword = 134, ///< value <b>Bad Username/Password</b>. 
        NotAuthorized = 135, ///< value <b>Not authorized</b>. 
        ServerUnavailable = 136, ///< value <b>Server unavailable</b>. 
        ServerBusy = 137, ///< value <b>Server busy</b>. 
        Banned = 138, ///< value @b Banned. 
        ServerShuttingDown = 139, ///< value <b>Server shutting down</b>. 
        BadAuthMethod = 140, ///< value <b>Bad auth method</b>. 
        KeepAliveTimeout = 141, ///< value <b>Keep Alive timeout</b>. 
        SessionTakenOver = 142, ///< value <b>Session taken over</b>. 
        TopicFilterInvalid = 143, ///< value <b>Topic Filter invalid</b>. 
        TopicNameInvalid = 144, ///< value <b>Topic Name invalid</b>. 
        PacketIdInUse = 145, ///< value <b>Packet ID in use</b>. 
        PacketIdNotFound = 146, ///< value <b>Packet ID not found</b>. 
        ReceiveMaxExceeded = 147, ///< value <b>Receive Max exceeded</b>. 
        TopicAliasInvalid = 148, ///< value <b>Topic Alias invalid</b>. 
        PacketTooLarge = 149, ///< value <b>Packet too large</b>. 
        MsgRateTooHigh = 150, ///< value <b>Message rate too high</b>. 
        QuotaExceeded = 151, ///< value <b>Quota exceeded</b>. 
        AdministrativeAction = 152, ///< value <b>Administrative action</b>. 
        PayloadFormatInvalid = 153, ///< value <b>Payload format invalid</b>. 
        RetainNotSupported = 154, ///< value <b>Retain not supported</b>. 
        QosNotSupported = 155, ///< value <b>QoS not supported</b>. 
        UseAnotherServer = 156, ///< value <b>Use another server</b>. 
        ServerMoved = 157, ///< value <b>Server moved</b>. 
        SharedSubNotSuppored = 158, ///< value <b>Shared Sub not supported</b>. 
        ConnectionRateExceeded = 159, ///< value <b>Connection rate exceeded</b>. 
        MaxConnectTime = 160, ///< value <b>Maximum connect time</b>. 
        SubIdsNotSupported = 161, ///< value <b>Sub IDs not supported</b>. 
        WildcardSubsNotSupported = 162, ///< value <b>Wildcard Subs not supported</b>. 

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 162, ///< Last defined value.
        ValuesLimit = 163, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_mqtt5::field::ReasonCode field.
    static const char* name()
    {
        return "Reason Code";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        auto begIter = namesMapInfo.first;
        auto endIter = begIter + namesMapInfo.second;
        auto iter = std::lower_bound(
            begIter, endIter, val,
            [](const ValueNameInfo& info, ValueType v) -> bool
            {
                return info.first < v;
            });

        if ((iter == endIter) || (iter->first != val)) {
            return nullptr;
        }

        return iter->second;
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const ValueNameInfo Map[] = {
            std::make_pair(ValueType::Success, "Success"),
            std::make_pair(ValueType::GrantedQos1, "Granted QoS1"),
            std::make_pair(ValueType::GrantedQos2, "Granted QoS2"),
            std::make_pair(ValueType::DisconnectWithWill, "Disconnect w/ Will"),
            std::make_pair(ValueType::NoMatchingSubscribers, "No Matching Subscribers"),
            std::make_pair(ValueType::NoSubscriptionExisted, "No Subscription Existed"),
            std::make_pair(ValueType::ContinueAuth, "Continue authentication"),
            std::make_pair(ValueType::ReAuth, "Re-authenticate"),
            std::make_pair(ValueType::UnspecifiedError, "Unspecified error"),
            std::make_pair(ValueType::MalformedPacket, "Malformed Packet"),
            std::make_pair(ValueType::ProtocolError, "Protocol Error"),
            std::make_pair(ValueType::ImplSpecificError, "Impl. Specific Error"),
            std::make_pair(ValueType::UnsupportedVersion, "Unsupported Version"),
            std::make_pair(ValueType::ClientIdInvalid, "Client ID Invalid"),
            std::make_pair(ValueType::BadUserPassword, "Bad Username/Password"),
            std::make_pair(ValueType::NotAuthorized, "Not authorized"),
            std::make_pair(ValueType::ServerUnavailable, "Server unavailable"),
            std::make_pair(ValueType::ServerBusy, "Server busy"),
            std::make_pair(ValueType::Banned, "Banned"),
            std::make_pair(ValueType::ServerShuttingDown, "Server shutting down"),
            std::make_pair(ValueType::BadAuthMethod, "Bad auth method"),
            std::make_pair(ValueType::KeepAliveTimeout, "Keep Alive timeout"),
            std::make_pair(ValueType::SessionTakenOver, "Session taken over"),
            std::make_pair(ValueType::TopicFilterInvalid, "Topic Filter invalid"),
            std::make_pair(ValueType::TopicNameInvalid, "Topic Name invalid"),
            std::make_pair(ValueType::PacketIdInUse, "Packet ID in use"),
            std::make_pair(ValueType::PacketIdNotFound, "Packet ID not found"),
            std::make_pair(ValueType::ReceiveMaxExceeded, "Receive Max exceeded"),
            std::make_pair(ValueType::TopicAliasInvalid, "Topic Alias invalid"),
            std::make_pair(ValueType::PacketTooLarge, "Packet too large"),
            std::make_pair(ValueType::MsgRateTooHigh, "Message rate too high"),
            std::make_pair(ValueType::QuotaExceeded, "Quota exceeded"),
            std::make_pair(ValueType::AdministrativeAction, "Administrative action"),
            std::make_pair(ValueType::PayloadFormatInvalid, "Payload format invalid"),
            std::make_pair(ValueType::RetainNotSupported, "Retain not supported"),
            std::make_pair(ValueType::QosNotSupported, "QoS not supported"),
            std::make_pair(ValueType::UseAnotherServer, "Use another server"),
            std::make_pair(ValueType::ServerMoved, "Server moved"),
            std::make_pair(ValueType::SharedSubNotSuppored, "Shared Sub not supported"),
            std::make_pair(ValueType::ConnectionRateExceeded, "Connection rate exceeded"),
            std::make_pair(ValueType::MaxConnectTime, "Maximum connect time"),
            std::make_pair(ValueType::SubIdsNotSupported, "Sub IDs not supported"),
            std::make_pair(ValueType::WildcardSubsNotSupported, "Wildcard Subs not supported")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref cc_mqtt5::field::ReasonCode field.
using ReasonCodeVal = ReasonCodeCommon::ValueType;

} // namespace field

} // namespace cc_mqtt5
