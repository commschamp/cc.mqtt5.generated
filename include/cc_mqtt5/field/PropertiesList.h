// Generated by commsdsl2comms v6.2.0

/// @file
/// @brief Contains definition of <b>"Properties"</b> field.

#pragma once

#include <cstdint>
#include "cc_mqtt5/field/FieldBase.h"
#include "cc_mqtt5/field/PropertiesListCommon.h"
#include "cc_mqtt5/field/Property.h"
#include "cc_mqtt5/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref PropertiesList field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions>
struct PropertiesListMembers
{
    /// @brief Definition of <b>"Length"</b> field.
    class Length : public
        comms::field::IntValue<
            cc_mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::VarLength<1U, 4U>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_mqtt5::field::PropertiesListMembersCommon::LengthCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_mqtt5::field::PropertiesListMembersCommon::LengthCommon::name();
        }
    };
};

/// @brief Definition of <b>"Properties"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PropertiesList : public
    comms::field::ArrayList<
        cc_mqtt5::field::FieldBase<>,
        cc_mqtt5::field::Property<TOpt>,
        TExtraOpts...,
        typename TOpt::field::PropertiesList,
        comms::option::def::SequenceSerLengthFieldPrefix<typename PropertiesListMembers<TOpt>::Length>
    >
{
    using Base =
        comms::field::ArrayList<
            cc_mqtt5::field::FieldBase<>,
            cc_mqtt5::field::Property<TOpt>,
            TExtraOpts...,
            typename TOpt::field::PropertiesList,
            comms::option::def::SequenceSerLengthFieldPrefix<typename PropertiesListMembers<TOpt>::Length>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_mqtt5::field::PropertiesListCommon::name();
    }
};

} // namespace field

} // namespace cc_mqtt5
