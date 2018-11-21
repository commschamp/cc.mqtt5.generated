/// @file
/// @brief Contains definition of <b>"Reason Code"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/field/FieldBase.h"

namespace mqtt5
{

namespace field
{

/// @brief Values enumerator for @ref ReasonCode field.
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
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::DefaultOptions, typename... TExtraOpts>
struct ReasonCode : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        ReasonCodeVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 2>,
        comms::option::ValidNumValue<4>,
        comms::option::ValidNumValueRange<16, 17>,
        comms::option::ValidNumValueRange<24, 25>,
        comms::option::ValidNumValueRange<128, 162>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Reason Code";
    }
    
};

} // namespace field

} // namespace mqtt5


