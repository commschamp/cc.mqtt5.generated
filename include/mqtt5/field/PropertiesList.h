/// @file
/// @brief Contains definition of <b>"Properties"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/Property.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of ///     @ref PropertiesList list.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PropertiesListMembers
{
    /// @brief Definition of <b>"Length"</b> field.
    struct Length : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Length";
        }
        
    };
    
};

/// @brief Definition of <b>"Properties"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct PropertiesList : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        mqtt5::field::Property<TOpt>,
        TExtraOpts...,
        typename TOpt::field::PropertiesList,
        comms::option::def::SequenceSerLengthFieldPrefix<typename PropertiesListMembers<TOpt>::Length>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "Properties";
    }
    
};

} // namespace field

} // namespace mqtt5


