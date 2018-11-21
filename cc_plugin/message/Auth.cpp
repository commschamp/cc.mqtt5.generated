#include "Auth.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Auth.h"
#include "cc_plugin/field/PropertiesList.h"
#include "cc_plugin/field/ReasonCode.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_reasonCode()
{
    using Field = mqtt5::message::AuthFields<>::ReasonCode;
    return cc_plugin::field::createProps_reasonCode(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::AuthFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_reasonCode());
    props.append(createProps_propertiesList());
    return props;
}

} // namespace

class AuthImpl : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Auth<mqtt5::cc_plugin::Message>,
        AuthImpl
    >
{
public:
    AuthImpl() = default;
    AuthImpl(const AuthImpl&) = delete;
    AuthImpl(AuthImpl&&) = delete;
    virtual ~AuthImpl() = default;
    AuthImpl& operator=(const AuthImpl&) = default;
    AuthImpl& operator=(AuthImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Auth::Auth() : m_pImpl(new AuthImpl) {}
Auth::~Auth() = default;

Auth& Auth::operator=(const Auth& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Auth& Auth::operator=(Auth&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Auth::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Auth::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Auth::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Auth::resetImpl()
{
    m_pImpl->reset();
}

bool Auth::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Auth*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Auth::MsgIdParamType Auth::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Auth::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Auth::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Auth::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Auth::lengthImpl() const
{
    return m_pImpl->length();
}

bool Auth::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


