/// @file
/// @brief Contains definition of <b>"SUBSCRIBE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/Topic.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Subscribe.
/// @tparam TOpt Extra options
/// @see @ref Subscribe
/// @headerfile "mqtt5/message/Subscribe.h"
template <typename TOpt = mqtt5::options::DefaultOptions>
struct SubscribeFields
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
    
    /// @brief Scope for all the member fields of @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bitfield.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Topic"</b> field.
            using Topic =
                mqtt5::field::Topic<
                    TOpt
                >;
            
            /// @brief Scope for all the member fields of @ref Options bitfield.
            struct OptionsMembers
            {
                /// @brief Values enumerator for @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Qos field.
                enum class QosVal : std::uint8_t
                {
                    AtMostOnceDelivery = 0, ///< value @b AtMostOnceDelivery
                    AtLeastOnceDelivery = 1, ///< value @b AtLeastOnceDelivery
                    ExactlyOnceDelivery = 2, ///< value @b ExactlyOnceDelivery
                    
                };
                
                /// @brief Definition of <b>"Qos"</b> field.
                /// @see @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::QosVal
                struct Qos : public
                    comms::field::EnumValue<
                        mqtt5::field::FieldBase<>,
                        QosVal,
                        comms::option::FixedBitLength<2U>,
                        comms::option::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Qos";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(QosVal val)
                    {
                        static const char* Map[] = {
                            "AtMostOnceDelivery",
                            "AtLeastOnceDelivery",
                            "ExactlyOnceDelivery"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        mqtt5::field::FieldBase<>,
                        comms::option::FixedBitLength<2U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            mqtt5::field::FieldBase<>,
                            comms::option::FixedBitLength<2U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_NL, @b getBitValue_NL() and @b setBitValue_NL().
                    ///      @li @b BitIdx_RAP, @b getBitValue_RAP() and @b setBitValue_RAP().
                    COMMS_BITMASK_BITS_SEQ(
                        NL,
                        RAP
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit
                    static const char* bitName(BitIdx idx)
                    {
                        static const char* Map[] = {
                            "NL",
                            "RAP"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        static_assert(MapSize == BitIdx_numOfValues, "Invalid map");
                    
                        if (MapSize <= static_cast<std::size_t>(idx)) {
                            return nullptr;
                        }
                    
                        return Map[static_cast<std::size_t>(idx)];
                    }
                    
                };
                
                /// @brief Values enumerator for @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                enum class RetainHandlingVal : std::uint8_t
                {
                    Send = 0, ///< value @b Send
                    SendIfNotExists = 1, ///< value @b SendIfNotExists
                    DontSend = 2, ///< value @b DontSend
                    
                };
                
                /// @brief Definition of <b>"Retain Handling"</b> field.
                /// @see @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandlingVal
                struct RetainHandling : public
                    comms::field::EnumValue<
                        mqtt5::field::FieldBase<>,
                        RetainHandlingVal,
                        comms::option::FixedBitLength<2U>,
                        comms::option::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Retain Handling";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(RetainHandlingVal val)
                    {
                        static const char* Map[] = {
                            "Send",
                            "SendIfNotExists",
                            "DontSend"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Definition of <b>"Reserved"</b> field.
                struct Reserved : public
                    comms::field::IntValue<
                        mqtt5::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::FixedBitLength<2U>,
                        comms::option::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "Reserved";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Qos,
                       Bits,
                       RetainHandling,
                       Reserved
                    >;
            };
            
            /// @brief Definition of <b>"Options"</b> field.
            class Options : public
                comms::field::Bitfield<
                    mqtt5::field::FieldBase<>,
                    typename OptionsMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        mqtt5::field::FieldBase<>,
                        typename OptionsMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_qos() - for OptionsMembers::Qos member field.
                ///     @li @b field_bits() - for OptionsMembers::Bits member field.
                ///     @li @b field_retainHandling() - for OptionsMembers::RetainHandling member field.
                ///     @li @b field_reserved() - for OptionsMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    qos,
                    bits,
                    retainHandling,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Options";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Topic,
                   Options
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    mqtt5::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_topic() - for ElementMembers::Topic member field.
            ///     @li @b field_options() - for ElementMembers::Options member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                topic,
                options
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"List"</b> field.
    struct List : public
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::SubscribeFields::List
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

/// @brief Definition of <b>"SUBSCRIBE"</b> message class.
/// @details
///     See @ref SubscribeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Subscribe.h"
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Subscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Subscribe,
        comms::option::StaticNumIdImpl<mqtt5::MsgId_Subscribe>,
        comms::option::FieldsImpl<typename SubscribeFields<TOpt>::All>,
        comms::option::MsgType<Subscribe<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Subscribe,
            comms::option::StaticNumIdImpl<mqtt5::MsgId_Subscribe>,
            comms::option::FieldsImpl<typename SubscribeFields<TOpt>::All>,
            comms::option::MsgType<Subscribe<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_packetId() for @ref SubscribeFields::PacketId field.
    ///     @li @b field_propertiesList() for @ref SubscribeFields::PropertiesList field.
    ///     @li @b field_list() for @ref SubscribeFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        packetId,
        propertiesList,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    
    
    /// @brief Default constructor
    Subscribe()
    {
        auto& qosField = Base::transportField_flags().field_qos();
        using QosFieldType = typename std::decay<decltype(qosField)>::type;
        using QosValueType = typename QosFieldType::ValueType;
        
        qosField.value() = QosValueType::AtLeastOnceDelivery;
    }
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SUBSCRIBE";
    }
    
    /// @brief Custom validity check
    bool doValid() const
    {
        if (!Base::doValid()) {
            return false;
        }
        
        auto& qosField = Base::transportField_flags().field_qos();
        using QosFieldType = typename std::decay<decltype(qosField)>::type;
        using QosValueType = typename QosFieldType::ValueType;
        
        if ((Base::transportField_flags().field_retain().value() != 0U) ||
            (qosField.value() != QosValueType::AtLeastOnceDelivery) ||
            (Base::transportField_flags().field_dup().value() != 0U)) {
            return false;
        }
        
        return !field_list().value().empty();
    }
    
    
};

} // namespace message

} // namespace mqtt5


