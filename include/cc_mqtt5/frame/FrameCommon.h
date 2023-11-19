// Generated by commsdsl2comms v6.2.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref cc_mqtt5::frame::Frame frame.

#pragma once

#include <cstdint>
#include "cc_mqtt5/field/MsgIdCommon.h"

namespace cc_mqtt5
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref cc_mqtt5::frame::Frame frame.
/// @see cc_mqtt5::frame::FrameLayers
struct FrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers struct.
    struct IdAndFlagsMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
        struct IdAndFlagsFieldMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Flags field.
                static const char* name()
                {
                    return "Flags";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Id field.
            struct IdCommon : public cc_mqtt5::field::MsgIdCommon
            {
                /// @brief Name of the @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsFieldMembers::Id field.
                static const char* name()
                {
                    return "Id";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
        struct IdAndFlagsFieldCommon
        {
            /// @brief Name of the @ref cc_mqtt5::frame::FrameLayers::IdAndFlagsMembers::IdAndFlagsField field.
            static const char* name()
            {
                return "ID + Flags";
            }
        };
    };

    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref cc_mqtt5::frame::FrameLayers::SizeMembers struct.
    struct SizeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_mqtt5::frame::FrameLayers::SizeMembers::Size field.
        struct SizeCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_mqtt5::frame::FrameLayers::SizeMembers::Size field.
            using ValueType = std::uint32_t;

            /// @brief Name of the @ref cc_mqtt5::frame::FrameLayers::SizeMembers::Size field.
            static const char* name()
            {
                return "Size";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };
};

} // namespace frame

} // namespace cc_mqtt5
