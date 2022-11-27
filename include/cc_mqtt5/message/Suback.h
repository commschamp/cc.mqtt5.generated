// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"SUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_mqtt5/MsgId.h"
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/PacketId.h"
#include "cc_mqtt5/field/PropertiesList.h"
#include "cc_mqtt5/field/ReasonCode.h"
#include "cc_mqtt5/message/SubackCommon.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace message
{

/// @brief Fields of @ref Suback.
/// @tparam TOpt Extra options
/// @see @ref Suback
/// @headerfile cc_mqtt5/message/Suback.h
template <typename TOpt = cc_mqtt5::options::DefaultOptions>
struct SubackFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        cc_mqtt5::field::PacketId<
            TOpt
        >;

    /// @brief Definition of <b>"Properties"</b> field.
    using PropertiesList =
        cc_mqtt5::field::PropertiesList<
            TOpt
        >;

    /// @brief Definition of <b>"List"</b> field.
    class List : public
        comms::field::ArrayList<
            cc_mqtt5::field::FieldBase<>,
            cc_mqtt5::field::ReasonCode<TOpt>,
            typename TOpt::message::SubackFields::List
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_mqtt5::field::FieldBase<>,
                cc_mqtt5::field::ReasonCode<TOpt>,
                typename TOpt::message::SubackFields::List
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::message::SubackFieldsCommon::ListCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        PropertiesList,
        List
    >;
};

/// @brief Definition of <b>"SUBACK"</b> message class.
/// @details
///     See @ref SubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_mqtt5/message/Suback.h
template <typename TMsgBase, typename TOpt = cc_mqtt5::options::DefaultOptions>
class Suback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Suback,
        comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Suback>,
        comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
        comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Suback,
            comms::option::def::StaticNumIdImpl<cc_mqtt5::MsgId_Suback>,
            comms::option::def::FieldsImpl<typename SubackFields<TOpt>::All>,
            comms::option::def::MsgType<Suback<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_packetId index, @b Field_packetId type and @b field_packetId() access fuction
    ///         for @ref SubackFields::PacketId field.
    ///     @li @b FieldIdx_propertiesList index, @b Field_propertiesList type and @b field_propertiesList() access fuction
    ///         for @ref SubackFields::PropertiesList field.
    ///     @li @b FieldIdx_list index, @b Field_list type and @b field_list() access fuction
    ///         for @ref SubackFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        propertiesList,
        list
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_mqtt5::message::SubackCommon::name();
    }

    /// @brief Updated validity check
    bool doValid() const
    {
        if ((!Base::doValid()) || (!Base::flagsZeroed())) {
            return false;
        }

        return !field_list().value().empty();
    }
};

} // namespace message

} // namespace cc_mqtt5