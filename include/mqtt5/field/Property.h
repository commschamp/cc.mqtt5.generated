/// @file
/// @brief Contains definition of <b>""</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "mqtt5/field/BinData.h"
#include "mqtt5/field/EnableEnum.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/String.h"
#include "mqtt5/field/VarLenInt.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of @ref Property bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PropertyMembers
{
    /// @brief Scope for all the member fields of @ref PayloadFormatIndicator bitfield.
    struct PayloadFormatIndicatorMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<1>,
                comms::option::ValidNumValue<1>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Values enumerator for @ref mqtt5::field::PropertyMembers::PayloadFormatIndicatorMembers::Value field.
        enum class ValueVal : std::uint8_t
        {
            Unspecified = 0, ///< value @b Unspecified
            Utf8 = 1, ///< value <b>UTF-8</b>.
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        /// @see @ref mqtt5::field::PropertyMembers::PayloadFormatIndicatorMembers::ValueVal
        struct Value : public
            comms::field::EnumValue<
                mqtt5::field::FieldBase<>,
                ValueVal,
                comms::option::ValidNumValueRange<0, 1>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueVal val)
            {
                static const char* Map[] = {
                    "Unspecified",
                    "UTF-8"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Property Format Indicator"</b> field.
    class PayloadFormatIndicator : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename PayloadFormatIndicatorMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename PayloadFormatIndicatorMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for PayloadFormatIndicatorMembers::Id member field.
        ///     @li @b field_value() - for PayloadFormatIndicatorMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Property Format Indicator";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref MessageExpiryInterval bitfield.
    struct MessageExpiryIntervalMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<2>,
                comms::option::ValidNumValue<2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint32_t,
                comms::option::UnitsSeconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Message Expiry Interval"</b> field.
    class MessageExpiryInterval : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename MessageExpiryIntervalMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename MessageExpiryIntervalMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for MessageExpiryIntervalMembers::Id member field.
        ///     @li @b field_value() - for MessageExpiryIntervalMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Message Expiry Interval";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ContentType bitfield.
    struct ContentTypeMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<3>,
                comms::option::ValidNumValue<3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Content Type"</b> field.
    class ContentType : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ContentTypeMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ContentTypeMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ContentTypeMembers::Id member field.
        ///     @li @b field_value() - for ContentTypeMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Content Type";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ResponseTopic bitfield.
    struct ResponseTopicMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<8>,
                comms::option::ValidNumValue<8>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Response Topic"</b> field.
    class ResponseTopic : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ResponseTopicMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ResponseTopicMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ResponseTopicMembers::Id member field.
        ///     @li @b field_value() - for ResponseTopicMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Response Topic";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref CorrelationData bitfield.
    struct CorrelationDataMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<9>,
                comms::option::ValidNumValue<9>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::BinData<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Correlation Data"</b> field.
    class CorrelationData : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename CorrelationDataMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename CorrelationDataMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for CorrelationDataMembers::Id member field.
        ///     @li @b field_value() - for CorrelationDataMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Correlation Data";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref SubscriptionId bitfield.
    struct SubscriptionIdMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<11>,
                comms::option::ValidNumValue<11>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::VarLenInt<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Subscription ID"</b> field.
    class SubscriptionId : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename SubscriptionIdMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename SubscriptionIdMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for SubscriptionIdMembers::Id member field.
        ///     @li @b field_value() - for SubscriptionIdMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Subscription ID";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref SessionExpiryInterval bitfield.
    struct SessionExpiryIntervalMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<17>,
                comms::option::ValidNumValue<17>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint32_t,
                comms::option::UnitsSeconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Session Expiry Interval"</b> field.
    class SessionExpiryInterval : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename SessionExpiryIntervalMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename SessionExpiryIntervalMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for SessionExpiryIntervalMembers::Id member field.
        ///     @li @b field_value() - for SessionExpiryIntervalMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Session Expiry Interval";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref AssignedClientId bitfield.
    struct AssignedClientIdMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<18>,
                comms::option::ValidNumValue<18>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Assigned Client ID"</b> field.
    class AssignedClientId : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename AssignedClientIdMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename AssignedClientIdMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for AssignedClientIdMembers::Id member field.
        ///     @li @b field_value() - for AssignedClientIdMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Assigned Client ID";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ServerKeepAlive bitfield.
    struct ServerKeepAliveMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<19>,
                comms::option::ValidNumValue<19>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint16_t,
                comms::option::UnitsSeconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Server Keep Alive"</b> field.
    class ServerKeepAlive : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ServerKeepAliveMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ServerKeepAliveMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ServerKeepAliveMembers::Id member field.
        ///     @li @b field_value() - for ServerKeepAliveMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Server Keep Alive";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref AuthMethod bitfield.
    struct AuthMethodMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<21>,
                comms::option::ValidNumValue<21>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Authentication Method"</b> field.
    class AuthMethod : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename AuthMethodMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename AuthMethodMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for AuthMethodMembers::Id member field.
        ///     @li @b field_value() - for AuthMethodMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Authentication Method";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref AuthData bitfield.
    struct AuthDataMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<22>,
                comms::option::ValidNumValue<22>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::BinData<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Authentication Data"</b> field.
    class AuthData : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename AuthDataMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename AuthDataMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for AuthDataMembers::Id member field.
        ///     @li @b field_value() - for AuthDataMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Authentication Data";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RequestProblemInfo bitfield.
    struct RequestProblemInfoMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<23>,
                comms::option::ValidNumValue<23>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Request Problem Information"</b> field.
    class RequestProblemInfo : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename RequestProblemInfoMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename RequestProblemInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for RequestProblemInfoMembers::Id member field.
        ///     @li @b field_value() - for RequestProblemInfoMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Request Problem Information";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref WillDelayInterval bitfield.
    struct WillDelayIntervalMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<24>,
                comms::option::ValidNumValue<24>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint32_t,
                comms::option::UnitsSeconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Will Delay Interval"</b> field.
    class WillDelayInterval : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename WillDelayIntervalMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename WillDelayIntervalMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for WillDelayIntervalMembers::Id member field.
        ///     @li @b field_value() - for WillDelayIntervalMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Will Delay Interval";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RequestResponseInfo bitfield.
    struct RequestResponseInfoMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<25>,
                comms::option::ValidNumValue<25>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Request Response Information"</b> field.
    class RequestResponseInfo : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename RequestResponseInfoMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename RequestResponseInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for RequestResponseInfoMembers::Id member field.
        ///     @li @b field_value() - for RequestResponseInfoMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Request Response Information";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ResponseInfo bitfield.
    struct ResponseInfoMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<26>,
                comms::option::ValidNumValue<26>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Response Information"</b> field.
    class ResponseInfo : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ResponseInfoMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ResponseInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ResponseInfoMembers::Id member field.
        ///     @li @b field_value() - for ResponseInfoMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Response Information";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ServerRef bitfield.
    struct ServerRefMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<28>,
                comms::option::ValidNumValue<28>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Server Reference"</b> field.
    class ServerRef : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ServerRefMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ServerRefMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ServerRefMembers::Id member field.
        ///     @li @b field_value() - for ServerRefMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Server Reference";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ReasonStr bitfield.
    struct ReasonStrMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<31>,
                comms::option::ValidNumValue<31>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::String<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Reason String"</b> field.
    class ReasonStr : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ReasonStrMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ReasonStrMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ReasonStrMembers::Id member field.
        ///     @li @b field_value() - for ReasonStrMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Reason String";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ReceiveMax bitfield.
    struct ReceiveMaxMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<33>,
                comms::option::ValidNumValue<33>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint16_t,
                comms::option::DefaultNumValue<65535L>,
                comms::option::ValidNumValueRange<1, 65535L>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Receive Maximum"</b> field.
    class ReceiveMax : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ReceiveMaxMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ReceiveMaxMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for ReceiveMaxMembers::Id member field.
        ///     @li @b field_value() - for ReceiveMaxMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Receive Maximum";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref TopicAliasMax bitfield.
    struct TopicAliasMaxMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<34>,
                comms::option::ValidNumValue<34>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Topic Alias Maximum"</b> field.
    class TopicAliasMax : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename TopicAliasMaxMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename TopicAliasMaxMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for TopicAliasMaxMembers::Id member field.
        ///     @li @b field_value() - for TopicAliasMaxMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Topic Alias Maximum";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref MaxQos bitfield.
    struct MaxQosMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<36>,
                comms::option::ValidNumValue<36>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Values enumerator for @ref mqtt5::field::PropertyMembers::MaxQosMembers::Value field.
        enum class ValueVal : std::uint8_t
        {
            AtMostOnceDelivery = 0, ///< value @b AtMostOnceDelivery
            AtLeastOnceDelivery = 1, ///< value @b AtLeastOnceDelivery
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        /// @see @ref mqtt5::field::PropertyMembers::MaxQosMembers::ValueVal
        struct Value : public
            comms::field::EnumValue<
                mqtt5::field::FieldBase<>,
                ValueVal,
                comms::option::ValidNumValueRange<0, 1>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueVal val)
            {
                static const char* Map[] = {
                    "AtMostOnceDelivery",
                    "AtLeastOnceDelivery"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Maximum QoS"</b> field.
    class MaxQos : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename MaxQosMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename MaxQosMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for MaxQosMembers::Id member field.
        ///     @li @b field_value() - for MaxQosMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Maximum QoS";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RetainAvailable bitfield.
    struct RetainAvailableMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<37>,
                comms::option::ValidNumValue<37>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Retain Available"</b> field.
    class RetainAvailable : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename RetainAvailableMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename RetainAvailableMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for RetainAvailableMembers::Id member field.
        ///     @li @b field_value() - for RetainAvailableMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Retain Available";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref UserProperty bitfield.
    struct UserPropertyMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<38>,
                comms::option::ValidNumValue<38>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Scope for all the member fields of @ref Value bitfield.
        struct ValueMembers
        {
            /// @brief Definition of <b>"First"</b> field.
            struct First : public
                mqtt5::field::String<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "First";
                }
                
            };
            
            /// @brief Definition of <b>"Second"</b> field.
            struct Second : public
                mqtt5::field::String<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "Second";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   First,
                   Second
                >;
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        class Value : public
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename ValueMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    mqtt5::field::FieldBase<>,
                    typename ValueMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_first() - for ValueMembers::First member field.
            ///     @li @b field_second() - for ValueMembers::Second member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                first,
                second
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"User Property"</b> field.
    class UserProperty : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename UserPropertyMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename UserPropertyMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for UserPropertyMembers::Id member field.
        ///     @li @b field_value() - for UserPropertyMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "User Property";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref MaxPacketSize bitfield.
    struct MaxPacketSizeMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<39>,
                comms::option::ValidNumValue<39>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Maximum Packet Size"</b> field.
    class MaxPacketSize : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename MaxPacketSizeMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename MaxPacketSizeMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for MaxPacketSizeMembers::Id member field.
        ///     @li @b field_value() - for MaxPacketSizeMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Maximum Packet Size";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref WildcardSubAvail bitfield.
    struct WildcardSubAvailMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<40>,
                comms::option::ValidNumValue<40>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Wildcard Subscription Available"</b> field.
    class WildcardSubAvail : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename WildcardSubAvailMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename WildcardSubAvailMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for WildcardSubAvailMembers::Id member field.
        ///     @li @b field_value() - for WildcardSubAvailMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Wildcard Subscription Available";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref SubIdAvail bitfield.
    struct SubIdAvailMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<41>,
                comms::option::ValidNumValue<41>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Subscription ID Available"</b> field.
    class SubIdAvail : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename SubIdAvailMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename SubIdAvailMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for SubIdAvailMembers::Id member field.
        ///     @li @b field_value() - for SubIdAvailMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Subscription ID Available";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref SharedSubAvail bitfield.
    struct SharedSubAvailMembers
    {
        /// @brief Definition of <b>"Id"</b> field.
        struct Id : public
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::FailOnInvalid<>,
                comms::option::VarLength<1U, 4U>,
                comms::option::DefaultNumValue<42>,
                comms::option::ValidNumValue<42>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Id";
            }
            
        };
        
        /// @brief Definition of <b>"Value"</b> field.
        struct Value : public
            mqtt5::field::EnableEnum<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "Value";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Id,
               Value
            >;
    };
    
    /// @brief Definition of <b>"Shared Subscription Available"</b> field.
    class SharedSubAvail : public
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename SharedSubAvailMembers::All
        >
    {
        using Base = 
            comms::field::Bundle<
                mqtt5::field::FieldBase<>,
                typename SharedSubAvailMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b field_id() - for SharedSubAvailMembers::Id member field.
        ///     @li @b field_value() - for SharedSubAvailMembers::Value member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            id,
            value
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "Shared Subscription Available";
        }
        
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           PayloadFormatIndicator,
           MessageExpiryInterval,
           ContentType,
           ResponseTopic,
           CorrelationData,
           SubscriptionId,
           SessionExpiryInterval,
           AssignedClientId,
           ServerKeepAlive,
           AuthMethod,
           AuthData,
           RequestProblemInfo,
           WillDelayInterval,
           RequestResponseInfo,
           ResponseInfo,
           ServerRef,
           ReasonStr,
           ReceiveMax,
           TopicAliasMax,
           MaxQos,
           RetainAvailable,
           UserProperty,
           MaxPacketSize,
           WildcardSubAvail,
           SubIdAvail,
           SharedSubAvail
        >;
};

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class Property : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename PropertyMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::HasCustomRead
    >
{
    using Base = 
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename PropertyMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::HasCustomRead
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_ACCESS macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///     @li @b initField_payloadFormatIndicator() and @b accessField_payloadFormatIndicator() - for PropertyMembers::PayloadFormatIndicator member field.
    ///     @li @b initField_messageExpiryInterval() and @b accessField_messageExpiryInterval() - for PropertyMembers::MessageExpiryInterval member field.
    ///     @li @b initField_contentType() and @b accessField_contentType() - for PropertyMembers::ContentType member field.
    ///     @li @b initField_responseTopic() and @b accessField_responseTopic() - for PropertyMembers::ResponseTopic member field.
    ///     @li @b initField_correlationData() and @b accessField_correlationData() - for PropertyMembers::CorrelationData member field.
    ///     @li @b initField_subscriptionId() and @b accessField_subscriptionId() - for PropertyMembers::SubscriptionId member field.
    ///     @li @b initField_sessionExpiryInterval() and @b accessField_sessionExpiryInterval() - for PropertyMembers::SessionExpiryInterval member field.
    ///     @li @b initField_assignedClientId() and @b accessField_assignedClientId() - for PropertyMembers::AssignedClientId member field.
    ///     @li @b initField_serverKeepAlive() and @b accessField_serverKeepAlive() - for PropertyMembers::ServerKeepAlive member field.
    ///     @li @b initField_authMethod() and @b accessField_authMethod() - for PropertyMembers::AuthMethod member field.
    ///     @li @b initField_authData() and @b accessField_authData() - for PropertyMembers::AuthData member field.
    ///     @li @b initField_requestProblemInfo() and @b accessField_requestProblemInfo() - for PropertyMembers::RequestProblemInfo member field.
    ///     @li @b initField_willDelayInterval() and @b accessField_willDelayInterval() - for PropertyMembers::WillDelayInterval member field.
    ///     @li @b initField_requestResponseInfo() and @b accessField_requestResponseInfo() - for PropertyMembers::RequestResponseInfo member field.
    ///     @li @b initField_responseInfo() and @b accessField_responseInfo() - for PropertyMembers::ResponseInfo member field.
    ///     @li @b initField_serverRef() and @b accessField_serverRef() - for PropertyMembers::ServerRef member field.
    ///     @li @b initField_reasonStr() and @b accessField_reasonStr() - for PropertyMembers::ReasonStr member field.
    ///     @li @b initField_receiveMax() and @b accessField_receiveMax() - for PropertyMembers::ReceiveMax member field.
    ///     @li @b initField_topicAliasMax() and @b accessField_topicAliasMax() - for PropertyMembers::TopicAliasMax member field.
    ///     @li @b initField_maxQos() and @b accessField_maxQos() - for PropertyMembers::MaxQos member field.
    ///     @li @b initField_retainAvailable() and @b accessField_retainAvailable() - for PropertyMembers::RetainAvailable member field.
    ///     @li @b initField_userProperty() and @b accessField_userProperty() - for PropertyMembers::UserProperty member field.
    ///     @li @b initField_maxPacketSize() and @b accessField_maxPacketSize() - for PropertyMembers::MaxPacketSize member field.
    ///     @li @b initField_wildcardSubAvail() and @b accessField_wildcardSubAvail() - for PropertyMembers::WildcardSubAvail member field.
    ///     @li @b initField_subIdAvail() and @b accessField_subIdAvail() - for PropertyMembers::SubIdAvail member field.
    ///     @li @b initField_sharedSubAvail() and @b accessField_sharedSubAvail() - for PropertyMembers::SharedSubAvail member field.
    COMMS_VARIANT_MEMBERS_ACCESS(
        payloadFormatIndicator,
        messageExpiryInterval,
        contentType,
        responseTopic,
        correlationData,
        subscriptionId,
        sessionExpiryInterval,
        assignedClientId,
        serverKeepAlive,
        authMethod,
        authData,
        requestProblemInfo,
        willDelayInterval,
        requestResponseInfo,
        responseInfo,
        serverRef,
        reasonStr,
        receiveMax,
        topicAliasMax,
        maxQos,
        retainAvailable,
        userProperty,
        maxPacketSize,
        wildcardSubAvail,
        subIdAvail,
        sharedSubAvail
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "";
    }
    
    /// @brief Optimized read functionality.
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        using CommonKeyField=
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::LittleEndian>,
                std::uint32_t,
                comms::option::VarLength<1U, 4U>
            >;
        CommonKeyField commonKeyField;
        auto origIter = iter;
        auto es = commonKeyField.read(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        auto consumedLen = static_cast<std::size_t>(std::distance(origIter, iter));
        COMMS_ASSERT(consumedLen <= len);
        len -= consumedLen;
    
        switch (commonKeyField.value()) {
        case 1U:
            {
                auto& field_payloadFormatIndicator = initField_payloadFormatIndicator();
                COMMS_ASSERT(field_payloadFormatIndicator.field_id().value() == commonKeyField.value());
                return field_payloadFormatIndicator.template readFrom<1>(iter, len);
            }
        case 2U:
            {
                auto& field_messageExpiryInterval = initField_messageExpiryInterval();
                COMMS_ASSERT(field_messageExpiryInterval.field_id().value() == commonKeyField.value());
                return field_messageExpiryInterval.template readFrom<1>(iter, len);
            }
        case 3U:
            {
                auto& field_contentType = initField_contentType();
                COMMS_ASSERT(field_contentType.field_id().value() == commonKeyField.value());
                return field_contentType.template readFrom<1>(iter, len);
            }
        case 8U:
            {
                auto& field_responseTopic = initField_responseTopic();
                COMMS_ASSERT(field_responseTopic.field_id().value() == commonKeyField.value());
                return field_responseTopic.template readFrom<1>(iter, len);
            }
        case 9U:
            {
                auto& field_correlationData = initField_correlationData();
                COMMS_ASSERT(field_correlationData.field_id().value() == commonKeyField.value());
                return field_correlationData.template readFrom<1>(iter, len);
            }
        case 11U:
            {
                auto& field_subscriptionId = initField_subscriptionId();
                COMMS_ASSERT(field_subscriptionId.field_id().value() == commonKeyField.value());
                return field_subscriptionId.template readFrom<1>(iter, len);
            }
        case 17U:
            {
                auto& field_sessionExpiryInterval = initField_sessionExpiryInterval();
                COMMS_ASSERT(field_sessionExpiryInterval.field_id().value() == commonKeyField.value());
                return field_sessionExpiryInterval.template readFrom<1>(iter, len);
            }
        case 18U:
            {
                auto& field_assignedClientId = initField_assignedClientId();
                COMMS_ASSERT(field_assignedClientId.field_id().value() == commonKeyField.value());
                return field_assignedClientId.template readFrom<1>(iter, len);
            }
        case 19U:
            {
                auto& field_serverKeepAlive = initField_serverKeepAlive();
                COMMS_ASSERT(field_serverKeepAlive.field_id().value() == commonKeyField.value());
                return field_serverKeepAlive.template readFrom<1>(iter, len);
            }
        case 21U:
            {
                auto& field_authMethod = initField_authMethod();
                COMMS_ASSERT(field_authMethod.field_id().value() == commonKeyField.value());
                return field_authMethod.template readFrom<1>(iter, len);
            }
        case 22U:
            {
                auto& field_authData = initField_authData();
                COMMS_ASSERT(field_authData.field_id().value() == commonKeyField.value());
                return field_authData.template readFrom<1>(iter, len);
            }
        case 23U:
            {
                auto& field_requestProblemInfo = initField_requestProblemInfo();
                COMMS_ASSERT(field_requestProblemInfo.field_id().value() == commonKeyField.value());
                return field_requestProblemInfo.template readFrom<1>(iter, len);
            }
        case 24U:
            {
                auto& field_willDelayInterval = initField_willDelayInterval();
                COMMS_ASSERT(field_willDelayInterval.field_id().value() == commonKeyField.value());
                return field_willDelayInterval.template readFrom<1>(iter, len);
            }
        case 25U:
            {
                auto& field_requestResponseInfo = initField_requestResponseInfo();
                COMMS_ASSERT(field_requestResponseInfo.field_id().value() == commonKeyField.value());
                return field_requestResponseInfo.template readFrom<1>(iter, len);
            }
        case 26U:
            {
                auto& field_responseInfo = initField_responseInfo();
                COMMS_ASSERT(field_responseInfo.field_id().value() == commonKeyField.value());
                return field_responseInfo.template readFrom<1>(iter, len);
            }
        case 28U:
            {
                auto& field_serverRef = initField_serverRef();
                COMMS_ASSERT(field_serverRef.field_id().value() == commonKeyField.value());
                return field_serverRef.template readFrom<1>(iter, len);
            }
        case 31U:
            {
                auto& field_reasonStr = initField_reasonStr();
                COMMS_ASSERT(field_reasonStr.field_id().value() == commonKeyField.value());
                return field_reasonStr.template readFrom<1>(iter, len);
            }
        case 33U:
            {
                auto& field_receiveMax = initField_receiveMax();
                COMMS_ASSERT(field_receiveMax.field_id().value() == commonKeyField.value());
                return field_receiveMax.template readFrom<1>(iter, len);
            }
        case 34U:
            {
                auto& field_topicAliasMax = initField_topicAliasMax();
                COMMS_ASSERT(field_topicAliasMax.field_id().value() == commonKeyField.value());
                return field_topicAliasMax.template readFrom<1>(iter, len);
            }
        case 36U:
            {
                auto& field_maxQos = initField_maxQos();
                COMMS_ASSERT(field_maxQos.field_id().value() == commonKeyField.value());
                return field_maxQos.template readFrom<1>(iter, len);
            }
        case 37U:
            {
                auto& field_retainAvailable = initField_retainAvailable();
                COMMS_ASSERT(field_retainAvailable.field_id().value() == commonKeyField.value());
                return field_retainAvailable.template readFrom<1>(iter, len);
            }
        case 38U:
            {
                auto& field_userProperty = initField_userProperty();
                COMMS_ASSERT(field_userProperty.field_id().value() == commonKeyField.value());
                return field_userProperty.template readFrom<1>(iter, len);
            }
        case 39U:
            {
                auto& field_maxPacketSize = initField_maxPacketSize();
                COMMS_ASSERT(field_maxPacketSize.field_id().value() == commonKeyField.value());
                return field_maxPacketSize.template readFrom<1>(iter, len);
            }
        case 40U:
            {
                auto& field_wildcardSubAvail = initField_wildcardSubAvail();
                COMMS_ASSERT(field_wildcardSubAvail.field_id().value() == commonKeyField.value());
                return field_wildcardSubAvail.template readFrom<1>(iter, len);
            }
        case 41U:
            {
                auto& field_subIdAvail = initField_subIdAvail();
                COMMS_ASSERT(field_subIdAvail.field_id().value() == commonKeyField.value());
                return field_subIdAvail.template readFrom<1>(iter, len);
            }
        case 42U:
            {
                auto& field_sharedSubAvail = initField_sharedSubAvail();
                COMMS_ASSERT(field_sharedSubAvail.field_id().value() == commonKeyField.value());
                return field_sharedSubAvail.template readFrom<1>(iter, len);
            }
        default:
            break;
        };
        return comms::ErrorStatus::InvalidMsgData;
    }
    
};

} // namespace field

} // namespace mqtt5


