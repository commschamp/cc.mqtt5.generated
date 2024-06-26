// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqtt5/MsgId.h"
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/PropertiesList.h"
#include "cc_mqtt5/field/ReasonCode.h"
#include "cc_mqtt5/message/DisconnectCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Fields of @ref Disconnect.
/// @tparam TOpt Extra options
/// @see @ref Disconnect
/// @headerfile cc_mqtt5/message/Disconnect.h
template <typename TOpt = cc_mqtt5::options::DefaultOptions>
struct DisconnectFields
{
    /// @brief Definition of <b>"Reason Code"</b> field.
    class ReasonCode : public
        comms::field::Optional<
            cc_mqtt5::field::ReasonCode<TOpt>
        >
    {
        using Base =
            comms::field::Optional<
                cc_mqtt5::field::ReasonCode<TOpt>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::DisconnectFieldsCommon::ReasonCodeCommon::name();
        }
    };

    /// @brief Definition of <b>"Properties"</b> field.
    class Properties : public
        comms::field::Optional<
            cc_mqtt5::field::PropertiesList<TOpt>
        >
    {
        using Base =
            comms::field::Optional<
                cc_mqtt5::field::PropertiesList<TOpt>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::DisconnectFieldsCommon::PropertiesCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ReasonCode,
        Properties
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref DisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqtt5/message/Disconnect.h
template <typename TMsgBase, typename TOpt = cc_mqtt5::options::DefaultOptions>
class Disconnect : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Disconnect>,
        comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
        comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Disconnect>,
            comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
            comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_reasonCode index, @b Field_reasonCode type and @b field_reasonCode() access fuction
    ///         for @ref DisconnectFields::ReasonCode field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref DisconnectFields::Properties field.
    COMMS_MSG_FIELDS_NAMES(
        reasonCode,
        properties
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqtt5::message::DisconnectCommon::name();
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
};

} // namespace message

} // namespace cc_mqtt5
