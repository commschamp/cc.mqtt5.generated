/// @file
/// @brief Contains definition of <b>"CONNACK"</b> message and its fields.

#pragma once

#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertiesList.h"
#include "mqtt5/field/ReasonCode.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Common definitions for fields from @ref ConnackFields.
/// @see @ref ConnackFields
/// @headerfile "mqtt5/message/Connack.h"
struct ConnackFieldsCommon
{
    /// @brief Common functions for
    ///     @ref mqtt5::message::ConnackFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Session Present"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref Connack.
/// @tparam TOpt Extra options
/// @see @ref Connack
/// @headerfile "mqtt5/message/Connack.h"
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ConnackFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            mqtt5::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                mqtt5::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_sp, @b getBitValue_sp() and @b setBitValue_sp().
        COMMS_BITMASK_BITS_SEQ(
            sp
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                mqtt5::message::ConnackFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
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
        Flags,
        ReasonCode,
        PropertiesList
    >;
};

/// @brief Definition of <b>"CONNACK"</b> message class.
/// @details
///     See @ref ConnackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqtt5/message/Connack.h"
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Connack : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connack,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Connack>,
        comms::option::def::FieldsImpl<typename ConnackFields<TOpt>::All>,
        comms::option::def::MsgType<Connack<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connack,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Connack>,
            comms::option::def::FieldsImpl<typename ConnackFields<TOpt>::All>,
            comms::option::def::MsgType<Connack<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref ConnackFields::Flags field.
    ///     @li @b field_reasonCode() for @ref ConnackFields::ReasonCode field.
    ///     @li @b field_propertiesList() for @ref ConnackFields::PropertiesList field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        reasonCode,
        propertiesList
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CONNACK";
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    
    
};

} // namespace message

} // namespace mqtt5


