/// @file
/// @brief Contains definition of <b>"Qos"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Values enumerator for
///     @ref mqtt5::field::Qos field.
enum class QosVal : std::uint8_t
{
    AtMostOnceDelivery = 0, ///< value @b AtMostOnceDelivery
    AtLeastOnceDelivery = 1, ///< value @b AtLeastOnceDelivery
    ExactlyOnceDelivery = 2, ///< value @b ExactlyOnceDelivery
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 2, ///< Last defined value.
    ValuesLimit = 3, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref mqtt5::field::Qos field.
struct QosCommon
{
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

/// @brief Definition of <b>"Qos"</b> field.
/// @see @ref mqtt5::field::QosVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
struct Qos : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        QosVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>
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
        return mqtt5::field::QosCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace mqtt5


