// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"SUBSCRIBE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
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
#include "mqtt5/field/Qos.h"
#include "mqtt5/field/Topic.h"
#include "mqtt5/message/SubscribeCommon.h"
#include "mqtt5/options/DefaultOptions.h"


namespace mqtt5
{

namespace message
{


/// @brief Fields of @ref Subscribe.
/// @tparam TOpt Extra options
/// @see @ref Subscribe
/// @headerfile mqtt5/message/Subscribe.h
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
    
    
    /// @brief Scope for all the member fields of
    ///     @ref List field.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element field.
        struct ElementMembers
        {
            /// @brief Definition of <b>"Topic"</b> field.
            using Topic =
                mqtt5::field::Topic<
                    TOpt
                >;
            
            
            /// @brief Scope for all the member fields of
            ///     @ref Options field.
            struct OptionsMembers
            {
                /// @brief Definition of <b>"Qos"</b> field.
                using Qos =
                    mqtt5::field::Qos<
                        TOpt,
                        comms::option::def::FixedBitLength<2U>
                    >;
                
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        mqtt5::field::FieldBase<>,
                        comms::option::def::FixedBitLength<2U>
                    >
                {
                    using Base =
                        comms::field::BitmaskValue<
                            mqtt5::field::FieldBase<>,
                            comms::option::def::FixedBitLength<2U>
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
                    
                    /// @brief Retrieve name of the bit.
                    /// @see @ref mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::BitsCommon::bitName().
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::BitsCommon::name();
                    }
                    
                
                };
                
                
                /// @brief Definition of <b>"Retain Handling"</b> field.
                /// @see @ref mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueType
                class RetainHandling : public
                    comms::field::EnumValue<
                        mqtt5::field::FieldBase<>,
                        mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueType,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base =
                        comms::field::EnumValue<
                            mqtt5::field::FieldBase<>,
                            mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueType,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                    
                    /// @brief Single value name info entry.
                    using ValueNameInfo = mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueNameInfo;
                    
                    /// @brief Type returned from @ref valueNamesMap() member function.
                    /// @see @ref mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueNamesMapInfo.
                    using ValueNamesMapInfo = mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::ValueNamesMapInfo;
                    
                    /// @brief Retrieve name of the enum value.
                    /// @see @ref mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::valueName().
                    static const char* valueName(ValueType val)
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                    /// @brief Retrieve map of enum value names.
                    /// @see @ref mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::valueNamesMap().
                    static ValueNamesMapInfo valueNamesMap()
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::valueNamesMap();
                    }
                    
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::RetainHandlingCommon::name();
                    }
                    
                
                };
                
                
                /// @brief Definition of <b>"Reserved"</b> field.
                class Reserved : public
                    comms::field::IntValue<
                        mqtt5::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    using Base =
                        comms::field::IntValue<
                            mqtt5::field::FieldBase<>,
                            std::uint8_t,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValue<0>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                    
                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::ReservedCommon::hasSpecials();
                    }
                    
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsMembersCommon::ReservedCommon::name();
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
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated values, types and access functions are:
                ///     @li @b FieldIdx_qos index, @b Field_qos type and @b field_qos() access function -
                ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Qos member field.
                ///     @li @b FieldIdx_bits index, @b Field_bits type and @b field_bits() access function -
                ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits member field.
                ///     @li @b FieldIdx_retainHandling index, @b Field_retainHandling type and @b field_retainHandling() access function -
                ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling member field.
                ///     @li @b FieldIdx_reserved index, @b Field_reserved type and @b field_reserved() access function -
                ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    qos,
                    bits,
                    retainHandling,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementMembersCommon::OptionsCommon::name();
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
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated values, types and access functions are:
            ///     @li @b FieldIdx_topic index, @b Field_topic type and @b field_topic() access function -
            ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Topic member field.
            ///     @li @b FieldIdx_options index, @b Field_options type and @b field_options() access function -
            ///         for mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options member field.
            COMMS_FIELD_MEMBERS_NAMES(
                topic,
                options
            );
            
            
            /// @brief Name of the field.
            static const char* name()
            {
                return mqtt5::message::SubscribeFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        
        };
        
        
    };
    
    /// @brief Definition of <b>"List"</b> field.
    class List : public
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::SubscribeFields::List
        >
    {
        using Base =
            comms::field::ArrayList<
                mqtt5::field::FieldBase<>,
                typename ListMembers::Element,
                typename TOpt::message::SubscribeFields::List
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::SubscribeFieldsCommon::ListCommon::name();
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
/// @headerfile mqtt5/message/Subscribe.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Subscribe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Subscribe,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Subscribe>,
        comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
        comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Subscribe,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Subscribe>,
            comms::option::def::FieldsImpl<typename SubscribeFields<TOpt>::All>,
            comms::option::def::MsgType<Subscribe<TMsgBase, TOpt> >,
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
    ///         for @ref SubscribeFields::PacketId field.
    ///     @li @b FieldIdx_propertiesList index, @b Field_propertiesList type and @b field_propertiesList() access fuction
    ///         for @ref SubscribeFields::PropertiesList field.
    ///     @li @b FieldIdx_list index, @b Field_list type and @b field_list() access fuction
    ///         for @ref SubscribeFields::List field.
    COMMS_MSG_FIELDS_NAMES(
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
        return mqtt5::message::SubscribeCommon::name();
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


