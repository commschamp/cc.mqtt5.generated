// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of <b>"CONNECT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_mqtt5/MsgId.h"
#include "cc_mqtt5/field/BinData.h"
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/PropertiesList.h"
#include "cc_mqtt5/field/ProtocolName.h"
#include "cc_mqtt5/field/Qos.h"
#include "cc_mqtt5/field/String.h"
#include "cc_mqtt5/message/ConnectCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Fields of @ref Connect.
/// @tparam TOpt Extra options
/// @see @ref Connect
/// @headerfile cc_mqtt5/message/Connect.h
template <typename TOpt = cc_mqtt5::options::DefaultOptions>
struct ConnectFields
{
    /// @brief Definition of <b>"Protocol Name"</b> field.
    using ProtocolName =
        cc_mqtt5::field::ProtocolName<
            TOpt,
            typename TOpt::message::ConnectFields::ProtocolName
        >;

    /// @brief Definition of <b>"Protocol Version"</b> field.
    class ProtocolVersion : public
        comms::field::IntValue<
            cc_mqtt5::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<5>,
            comms::option::def::ValidNumValue<5>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_mqtt5::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<5>,
                comms::option::def::ValidNumValue<5>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::ProtocolVersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::ProtocolVersionCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(5);
            return true;
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Flags field.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Low : public
            comms::field::BitmaskValue<
                cc_mqtt5::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::BitmaskReservedBits<0x1U, 0x0U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_mqtt5::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::BitmaskReservedBits<0x1U, 0x0U>
                >;
        public:
            /// @brief Provide names for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values:
            ///      @li @b BitIdx_cleanStart.
            ///      @li @b BitIdx_willFlag.
            COMMS_BITMASK_BITS(
                cleanStart=1,
                willFlag=2
            );

            /// @brief Generates independent access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///      @li @b getBitValue_cleanStart() and @b setBitValue_cleanStart().
            ///      @li @b getBitValue_willFlag() and @b setBitValue_willFlag().
            COMMS_BITMASK_BITS_ACCESS(
                cleanStart,
                willFlag
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::LowCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::LowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::LowCommon::name();
            }
        };

        /// @brief Definition of <b>"Will QoS"</b> field.
        class WillQos : public
            cc_mqtt5::field::Qos<
                TOpt,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base =
                cc_mqtt5::field::Qos<
                    TOpt,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::WillQosCommon::name();
            }
        };

        /// @brief Definition of <b>""</b> field.
        class High : public
            comms::field::BitmaskValue<
                cc_mqtt5::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_mqtt5::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_willRetain, @b getBitValue_willRetain() and @b setBitValue_willRetain().
            ///      @li @b BitIdx_passwordFlag, @b getBitValue_passwordFlag() and @b setBitValue_passwordFlag().
            ///      @li @b BitIdx_userNameFlag, @b getBitValue_userNameFlag() and @b setBitValue_userNameFlag().
            COMMS_BITMASK_BITS_SEQ(
                willRetain,
                passwordFlag,
                userNameFlag
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::HighCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::HighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::FlagsMembersCommon::HighCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Low,
               WillQos,
               High
            >;
    };

    /// @brief Definition of <b>"Connect Flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            cc_mqtt5::field::FieldBase<>,
            typename FlagsMembers::All,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_mqtt5::field::FieldBase<>,
                typename FlagsMembers::All,
                comms::option::def::HasVersionDependentMembers<false>
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_low index, @b Field_low type and @b field_low() access function -
        ///         for cc_mqtt5::message::ConnectFields::FlagsMembers::Low member field.
        ///     @li @b FieldIdx_willQos index, @b Field_willQos type and @b field_willQos() access function -
        ///         for cc_mqtt5::message::ConnectFields::FlagsMembers::WillQos member field.
        ///     @li @b FieldIdx_high index, @b Field_high type and @b field_high() access function -
        ///         for cc_mqtt5::message::ConnectFields::FlagsMembers::High member field.
        COMMS_FIELD_MEMBERS_NAMES(
            low,
            willQos,
            high
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::FlagsCommon::name();
        }
    };

    /// @brief Definition of <b>"Keep Alive"</b> field.
    class KeepAlive : public
        comms::field::IntValue<
            cc_mqtt5::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_mqtt5::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::KeepAliveCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::KeepAliveCommon::name();
        }
    };

    /// @brief Definition of <b>"Properties"</b> field.
    using Properties =
        cc_mqtt5::field::PropertiesList<
            TOpt,
            typename TOpt::message::ConnectFields::Properties
        >;

    /// @brief Definition of <b>"Client ID"</b> field.
    class ClientId : public
        cc_mqtt5::field::String<
            TOpt,
            typename TOpt::message::ConnectFields::ClientId
        >
    {
        using Base =
            cc_mqtt5::field::String<
                TOpt,
                typename TOpt::message::ConnectFields::ClientId
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::ClientIdCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref WillProperties field.
    struct WillPropertiesMembers
    {
        /// @brief Definition of <b>"Will Properties"</b> field.
        class ActWillProperties : public
            cc_mqtt5::field::PropertiesList<
                TOpt,
                typename TOpt::message::ConnectFields::WillPropertiesMembers::ActWillProperties
            >
        {
            using Base =
                cc_mqtt5::field::PropertiesList<
                    TOpt,
                    typename TOpt::message::ConnectFields::WillPropertiesMembers::ActWillProperties
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::WillPropertiesMembersCommon::ActWillPropertiesCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"Will Properties"</b> field.
    class WillProperties : public
        comms::field::Optional<
            typename WillPropertiesMembers::ActWillProperties,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename WillPropertiesMembers::ActWillProperties,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::WillPropertiesCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref WillTopic field.
    struct WillTopicMembers
    {
        /// @brief Definition of <b>"Will Topic"</b> field.
        class WillTopic : public
            cc_mqtt5::field::String<
                TOpt,
                typename TOpt::message::ConnectFields::WillTopicMembers::WillTopic
            >
        {
            using Base =
                cc_mqtt5::field::String<
                    TOpt,
                    typename TOpt::message::ConnectFields::WillTopicMembers::WillTopic
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::WillTopicMembersCommon::WillTopicCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"Will Topic"</b> field.
    class WillTopic : public
        comms::field::Optional<
            typename WillTopicMembers::WillTopic,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename WillTopicMembers::WillTopic,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::WillTopicCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref WillMessage field.
    struct WillMessageMembers
    {
        /// @brief Definition of <b>"Will Message"</b> field.
        class WillMessage : public
            cc_mqtt5::field::BinData<
                TOpt,
                typename TOpt::message::ConnectFields::WillMessageMembers::WillMessage
            >
        {
            using Base =
                cc_mqtt5::field::BinData<
                    TOpt,
                    typename TOpt::message::ConnectFields::WillMessageMembers::WillMessage
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::WillMessageMembersCommon::WillMessageCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"Will Message"</b> field.
    class WillMessage : public
        comms::field::Optional<
            typename WillMessageMembers::WillMessage,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename WillMessageMembers::WillMessage,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::WillMessageCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref UserName field.
    struct UserNameMembers
    {
        /// @brief Definition of <b>"User Name"</b> field.
        class UserName : public
            cc_mqtt5::field::String<
                TOpt,
                typename TOpt::message::ConnectFields::UserNameMembers::UserName
            >
        {
            using Base =
                cc_mqtt5::field::String<
                    TOpt,
                    typename TOpt::message::ConnectFields::UserNameMembers::UserName
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::UserNameMembersCommon::UserNameCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"User Name"</b> field.
    class UserName : public
        comms::field::Optional<
            typename UserNameMembers::UserName,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename UserNameMembers::UserName,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::UserNameCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Password field.
    struct PasswordMembers
    {
        /// @brief Definition of <b>"Password"</b> field.
        class Password : public
            cc_mqtt5::field::BinData<
                TOpt,
                typename TOpt::message::ConnectFields::PasswordMembers::Password
            >
        {
            using Base =
                cc_mqtt5::field::BinData<
                    TOpt,
                    typename TOpt::message::ConnectFields::PasswordMembers::Password
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_mqtt5::message::ConnectFieldsCommon::PasswordMembersCommon::PasswordCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"Password"</b> field.
    class Password : public
        comms::field::Optional<
            typename PasswordMembers::Password,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename PasswordMembers::Password,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::ConnectFieldsCommon::PasswordCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ProtocolName,
        ProtocolVersion,
        Flags,
        KeepAlive,
        Properties,
        ClientId,
        WillProperties,
        WillTopic,
        WillMessage,
        UserName,
        Password
    >;
};

/// @brief Definition of <b>"CONNECT"</b> message class.
/// @details
///     See @ref ConnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqtt5/message/Connect.h
template <typename TMsgBase, typename TOpt = cc_mqtt5::options::DefaultOptions>
class Connect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connect,
        comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Connect>,
        comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
        comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connect,
            comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Connect>,
            comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
            comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_protocolName index, @b Field_protocolName type and @b field_protocolName() access fuction
    ///         for @ref ConnectFields::ProtocolName field.
    ///     @li @b FieldIdx_protocolVersion index, @b Field_protocolVersion type and @b field_protocolVersion() access fuction
    ///         for @ref ConnectFields::ProtocolVersion field.
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref ConnectFields::Flags field.
    ///     @li @b FieldIdx_keepAlive index, @b Field_keepAlive type and @b field_keepAlive() access fuction
    ///         for @ref ConnectFields::KeepAlive field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref ConnectFields::Properties field.
    ///     @li @b FieldIdx_clientId index, @b Field_clientId type and @b field_clientId() access fuction
    ///         for @ref ConnectFields::ClientId field.
    ///     @li @b FieldIdx_willProperties index, @b Field_willProperties type and @b field_willProperties() access fuction
    ///         for @ref ConnectFields::WillProperties field.
    ///     @li @b FieldIdx_willTopic index, @b Field_willTopic type and @b field_willTopic() access fuction
    ///         for @ref ConnectFields::WillTopic field.
    ///     @li @b FieldIdx_willMessage index, @b Field_willMessage type and @b field_willMessage() access fuction
    ///         for @ref ConnectFields::WillMessage field.
    ///     @li @b FieldIdx_userName index, @b Field_userName type and @b field_userName() access fuction
    ///         for @ref ConnectFields::UserName field.
    ///     @li @b FieldIdx_password index, @b Field_password type and @b field_password() access fuction
    ///         for @ref ConnectFields::Password field.
    COMMS_MSG_FIELDS_NAMES(
        protocolName,
        protocolVersion,
        flags,
        keepAlive,
        properties,
        clientId,
        willProperties,
        willTopic,
        willMessage,
        userName,
        password
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 9U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqtt5::message::ConnectCommon::name();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template doReadUntilAndUpdateLen<FieldIdx_willProperties>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_willProperties();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_willProperties, FieldIdx_willTopic>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_willTopic();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_willTopic, FieldIdx_willMessage>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_willMessage();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_willMessage, FieldIdx_userName>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_userName();

            es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_userName, FieldIdx_password>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_password();

            es = Base::template doReadFrom<FieldIdx_password>(iter, len);
        } while (false);

        return es;
    }

    // Generated validity check functionality
    bool doValid() const
    {
        if (!Base::doValid()) {
            return false;
        }

        return
            ((Base::transportField_flags().field_retain().getValue() == static_cast<typename Base::TransportField_flags::Field_retain::ValueType>(0)) &&
             (Base::transportField_flags().field_qos().getValue() == static_cast<typename Base::TransportField_flags::Field_qos::ValueType>(0)) &&
             (Base::transportField_flags().field_dup().getValue() == static_cast<typename Base::TransportField_flags::Field_dup::ValueType>(0)));
    }

    /// @brief Generated refresh functionality.
    bool doRefresh()
    {
       bool updated = Base::doRefresh();
       updated = refresh_willProperties() || updated;
       updated = refresh_willTopic() || updated;
       updated = refresh_willMessage() || updated;
       updated = refresh_userName() || updated;
       updated = refresh_password() || updated;
       return updated;
    }

private:
    void readPrepare_willProperties()
    {
        refresh_willProperties();
    }

    void readPrepare_willTopic()
    {
        refresh_willTopic();
    }

    void readPrepare_willMessage()
    {
        refresh_willMessage();
    }

    void readPrepare_userName()
    {
        refresh_userName();
    }

    void readPrepare_password()
    {
        refresh_password();
    }

    bool refresh_willProperties()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_low().getBitValue_willFlag()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_willProperties().getMode() == mode) {
            return false;
        }

        field_willProperties().setMode(mode);
        return true;
    }

    bool refresh_willTopic()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_low().getBitValue_willFlag()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_willTopic().getMode() == mode) {
            return false;
        }

        field_willTopic().setMode(mode);
        return true;
    }

    bool refresh_willMessage()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_low().getBitValue_willFlag()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_willMessage().getMode() == mode) {
            return false;
        }

        field_willMessage().setMode(mode);
        return true;
    }

    bool refresh_userName()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_high().getBitValue_userNameFlag()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_userName().getMode() == mode) {
            return false;
        }

        field_userName().setMode(mode);
        return true;
    }

    bool refresh_password()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_flags().field_high().getBitValue_passwordFlag()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_password().getMode() == mode) {
            return false;
        }

        field_password().setMode(mode);
        return true;
    }
};

} // namespace message

} // namespace cc_mqtt5
