// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"PUBCOMP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"
#include "mqtt5/message/PubcompCommon.h"
#include "mqtt5/options/DefaultOptions.h"


namespace mqtt5
{

namespace message
{


/// @brief Fields of @ref Pubcomp.
/// @tparam TOpt Extra options
/// @see @ref Pubcomp
/// @headerfile mqtt5/message/Pubcomp.h
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PubcompFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt5::field::PacketId<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Reason Code"</b> field.
    using ReasonCode =
        mqtt5::field::ReasonCode<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Properties"</b> field.
    using PropertiesList =
        mqtt5::field::PropertiesList<
            TOpt
        >;
    
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        ReasonCode,
        PropertiesList
    >;
};

/// @brief Definition of <b>"PUBCOMP"</b> message class.
/// @details
///     See @ref PubcompFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqtt5/message/Pubcomp.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Pubcomp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Pubcomp>,
        comms::option::def::FieldsImpl<typename PubcompFields<TOpt>::All>,
        comms::option::def::MsgType<Pubcomp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Pubcomp>,
            comms::option::def::FieldsImpl<typename PubcompFields<TOpt>::All>,
            comms::option::def::MsgType<Pubcomp<TMsgBase, TOpt> >,
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
    ///         for @ref PubcompFields::PacketId field.
    ///     @li @b FieldIdx_reasonCode index, @b Field_reasonCode type and @b field_reasonCode() access fuction
    ///         for @ref PubcompFields::ReasonCode field.
    ///     @li @b FieldIdx_propertiesList index, @b Field_propertiesList type and @b field_propertiesList() access fuction
    ///         for @ref PubcompFields::PropertiesList field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        reasonCode,
        propertiesList
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::PubcompCommon::name();
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    

};

} // namespace message

} // namespace mqtt5


