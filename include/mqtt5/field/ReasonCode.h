/// @file
/// @brief Contains definition of <b>"Reason Code"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Values enumerator for @ref mqtt5::field::ReasonCode field.
enum class ReasonCodeVal : std::uint8_t
{
    Success = 0, ///< value @b Success
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
    Banned = 138, ///< value @b Banned
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
    
};

/// @brief Definition of <b>"Reason Code"</b> field.
/// @see @ref mqtt5::field::ReasonCodeVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct ReasonCode : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        ReasonCodeVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>,
        comms::option::def::ValidNumValue<4>,
        comms::option::def::ValidNumValueRange<16, 17>,
        comms::option::def::ValidNumValueRange<24, 25>,
        comms::option::def::ValidNumValueRange<128, 162>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Reason Code";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ReasonCodeVal val)
    {
        using NameInfo = std::pair<ReasonCodeVal, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ReasonCodeVal::Success, "Success"),
            std::make_pair(ReasonCodeVal::GrantedQos1, "Granted QoS1"),
            std::make_pair(ReasonCodeVal::GrantedQos2, "Granted QoS2"),
            std::make_pair(ReasonCodeVal::DisconnectWithWill, "Disconnect w/ Will"),
            std::make_pair(ReasonCodeVal::NoMatchingSubscribers, "No Matching Subscribers"),
            std::make_pair(ReasonCodeVal::NoSubscriptionExisted, "No Subscription Existed"),
            std::make_pair(ReasonCodeVal::ContinueAuth, "Continue authentication"),
            std::make_pair(ReasonCodeVal::ReAuth, "Re-authenticate"),
            std::make_pair(ReasonCodeVal::UnspecifiedError, "Unspecified error"),
            std::make_pair(ReasonCodeVal::MalformedPacket, "Malformed Packet"),
            std::make_pair(ReasonCodeVal::ProtocolError, "Protocol Error"),
            std::make_pair(ReasonCodeVal::ImplSpecificError, "Impl. Specific Error"),
            std::make_pair(ReasonCodeVal::UnsupportedVersion, "Unsupported Version"),
            std::make_pair(ReasonCodeVal::ClientIdInvalid, "Client ID Invalid"),
            std::make_pair(ReasonCodeVal::BadUserPassword, "Bad Username/Password"),
            std::make_pair(ReasonCodeVal::NotAuthorized, "Not authorized"),
            std::make_pair(ReasonCodeVal::ServerUnavailable, "Server unavailable"),
            std::make_pair(ReasonCodeVal::ServerBusy, "Server busy"),
            std::make_pair(ReasonCodeVal::Banned, "Banned"),
            std::make_pair(ReasonCodeVal::ServerShuttingDown, "Server shutting down"),
            std::make_pair(ReasonCodeVal::BadAuthMethod, "Bad auth method"),
            std::make_pair(ReasonCodeVal::KeepAliveTimeout, "Keep Alive timeout"),
            std::make_pair(ReasonCodeVal::SessionTakenOver, "Session taken over"),
            std::make_pair(ReasonCodeVal::TopicFilterInvalid, "Topic Filter invalid"),
            std::make_pair(ReasonCodeVal::TopicNameInvalid, "Topic Name invalid"),
            std::make_pair(ReasonCodeVal::PacketIdInUse, "Packet ID in use"),
            std::make_pair(ReasonCodeVal::PacketIdNotFound, "Packet ID not found"),
            std::make_pair(ReasonCodeVal::ReceiveMaxExceeded, "Receive Max exceeded"),
            std::make_pair(ReasonCodeVal::TopicAliasInvalid, "Topic Alias invalid"),
            std::make_pair(ReasonCodeVal::PacketTooLarge, "Packet too large"),
            std::make_pair(ReasonCodeVal::MsgRateTooHigh, "Message rate too high"),
            std::make_pair(ReasonCodeVal::QuotaExceeded, "Quota exceeded"),
            std::make_pair(ReasonCodeVal::AdministrativeAction, "Administrative action"),
            std::make_pair(ReasonCodeVal::PayloadFormatInvalid, "Payload format invalid"),
            std::make_pair(ReasonCodeVal::RetainNotSupported, "Retain not supported"),
            std::make_pair(ReasonCodeVal::QosNotSupported, "QoS not supported"),
            std::make_pair(ReasonCodeVal::UseAnotherServer, "Use another server"),
            std::make_pair(ReasonCodeVal::ServerMoved, "Server moved"),
            std::make_pair(ReasonCodeVal::SharedSubNotSuppored, "Shared Sub not supported"),
            std::make_pair(ReasonCodeVal::ConnectionRateExceeded, "Connection rate exceeded"),
            std::make_pair(ReasonCodeVal::MaxConnectTime, "Maximum connect time"),
            std::make_pair(ReasonCodeVal::SubIdsNotSupported, "Sub IDs not supported"),
            std::make_pair(ReasonCodeVal::WildcardSubsNotSupported, "Wildcard Subs not supported")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, ReasonCodeVal v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

} // namespace field

} // namespace mqtt5


