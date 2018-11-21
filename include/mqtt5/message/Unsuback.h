/// @file
/// @brief Contains definition of <b>"UNSUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt5/DefaultOptions.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Unsuback.
/// @tparam TOpt Extra options
/// @see @ref Unsuback
/// @headerfile "mqtt5/message/Unsuback.h"
template <typename TOpt = mqtt5::DefaultOptions>
struct UnsubackFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt5::field::PacketId<
           TOpt
       >;
    
    /// @brief Definition of <b>"Properties"</b> field.
    using PropertiesList =
        mqtt5::field::PropertiesList<
           TOpt
       >;
    
    /// @brief Definition of <b>"List"</b> field.
    struct List : public
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            mqtt5::field::ReasonCode<TOpt>,
            typename TOpt::message::UnsubackFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        PropertiesList,
        List
    >;
};

/// @brief Definition of <b>"UNSUBACK"</b> message class.
/// @details
///     See @ref UnsubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Unsuback.h"
template <typename TMsgBase, typename TOpt = mqtt5::DefaultOptions>
class Unsuback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsuback,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Unsuback>,
        comms::option::FieldsImpl<typename UnsubackFields<TOpt>::All>,
        comms::option::MsgType<Unsuback<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsuback,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Unsuback>,
            comms::option::FieldsImpl<typename UnsubackFields<TOpt>::All>,
            comms::option::MsgType<Unsuback<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_packetId() for @ref UnsubackFields::PacketId field.
    ///     @li @b field_propertiesList() for @ref UnsubackFields::PropertiesList field.
    ///     @li @b field_list() for @ref UnsubackFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "UNSUBACK";
    }
    
    
};

} // namespace message

} // namespace mqtt5


