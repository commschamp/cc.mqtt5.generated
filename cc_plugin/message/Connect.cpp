// Generated by commsdsl2comms v3.6.2

#include "Connect.h"

#include "comms_champion/property/field.h"
#include "cc_plugin/field/BinData.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/ProtocolName.h"
#include "cc_plugin/field/Qos.h"
#include "cc_plugin/field/String.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_protocolName()
{
    using Field = mqtt5::message::ConnectFields<>::ProtocolName;
    auto props = cc_plugin::field::createProps_protocolName(Field::name());
    return props;
    
}

static QVariantMap createProps_protocolVersion()
{
    using Field = mqtt5::message::ConnectFields<>::ProtocolVersion;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_low()
    {
        using Field = mqtt5::message::ConnectFields<>::FlagsMembers::Low;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(1U, "Clean Start")
                .add(2U, "Will Flag")
                .asMap();
        
    }
    
    static QVariantMap createProps_willQos()
    {
        using Field = mqtt5::message::ConnectFields<>::FlagsMembers::WillQos;
        auto props = cc_plugin::field::createProps_qos(Field::name(), true);
        return props;
        
    }
    
    static QVariantMap createProps_high()
    {
        using Field = mqtt5::message::ConnectFields<>::FlagsMembers::High;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "Will Retain")
                .add(1U, "Password Flag")
                .add(2U, "User Name Flag")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = mqtt5::message::ConnectFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_low())
            .add(FlagsMembers::createProps_willQos())
            .add(FlagsMembers::createProps_high())
            .asMap();
    
}

static QVariantMap createProps_keepAlive()
{
    using Field = mqtt5::message::ConnectFields<>::KeepAlive;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_properties()
{
    using Field = mqtt5::message::ConnectFields<>::Properties;
    auto props = cc_plugin::field::createProps_propertiesList(Field::name());
    return props;
    
}

static QVariantMap createProps_clientId()
{
    using Field = mqtt5::message::ConnectFields<>::ClientId;
    auto props = cc_plugin::field::createProps_string(Field::name());
    return props;
    
}

struct WillPropertiesMembers
{
    static QVariantMap createProps_properties()
    {
        using Field = mqtt5::message::ConnectFields<>::WillPropertiesMembers::Properties;
        auto props = cc_plugin::field::createProps_propertiesList(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_willProperties()
{
    using Field = mqtt5::message::ConnectFields<>::WillProperties;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(WillPropertiesMembers::createProps_properties())
            .asMap();
    
}

struct WillTopicMembers
{
    static QVariantMap createProps_topic()
    {
        using Field = mqtt5::message::ConnectFields<>::WillTopicMembers::Topic;
        auto props = cc_plugin::field::createProps_string(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_willTopic()
{
    using Field = mqtt5::message::ConnectFields<>::WillTopic;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(WillTopicMembers::createProps_topic())
            .asMap();
    
}

struct WillMessageMembers
{
    static QVariantMap createProps_willMessage()
    {
        using Field = mqtt5::message::ConnectFields<>::WillMessageMembers::WillMessage;
        auto props = cc_plugin::field::createProps_binData(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_willMessage()
{
    using Field = mqtt5::message::ConnectFields<>::WillMessage;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(WillMessageMembers::createProps_willMessage())
            .asMap();
    
}

struct UserNameMembers
{
    static QVariantMap createProps_userName()
    {
        using Field = mqtt5::message::ConnectFields<>::UserNameMembers::UserName;
        auto props = cc_plugin::field::createProps_string(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_userName()
{
    using Field = mqtt5::message::ConnectFields<>::UserName;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(UserNameMembers::createProps_userName())
            .asMap();
    
}

struct PasswordMembers
{
    static QVariantMap createProps_password()
    {
        using Field = mqtt5::message::ConnectFields<>::PasswordMembers::Password;
        auto props = cc_plugin::field::createProps_binData(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_password()
{
    using Field = mqtt5::message::ConnectFields<>::Password;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(PasswordMembers::createProps_password())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_protocolName());
    props.append(createProps_protocolVersion());
    props.append(createProps_flags());
    props.append(createProps_keepAlive());
    props.append(createProps_properties());
    props.append(createProps_clientId());
    props.append(createProps_willProperties());
    props.append(createProps_willTopic());
    props.append(createProps_willMessage());
    props.append(createProps_userName());
    props.append(createProps_password());
    return props;
}

} // namespace

Connect::Connect() = default;
Connect::~Connect() = default;
Connect& Connect::operator=(const Connect&) = default;
Connect& Connect::operator=(Connect&&) = default;

const QVariantList& Connect::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


