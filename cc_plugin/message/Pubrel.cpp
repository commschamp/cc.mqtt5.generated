#include "Pubrel.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Pubrel.h"
#include "cc_plugin/field/PacketId.h"
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

static QVariantMap createProps_packetId()
{
    using Field = mqtt5::message::PubrelFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

static QVariantMap createProps_reasonCode()
{
    using Field = mqtt5::message::PubrelFields<>::ReasonCode;
    return cc_plugin::field::createProps_reasonCode(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::PubrelFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_reasonCode());
    props.append(createProps_propertiesList());
    return props;
}

} // namespace

class PubrelImpl : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Pubrel<mqtt5::cc_plugin::Message>,
        PubrelImpl
    >
{
public:
    PubrelImpl() = default;
    PubrelImpl(const PubrelImpl&) = delete;
    PubrelImpl(PubrelImpl&&) = delete;
    virtual ~PubrelImpl() = default;
    PubrelImpl& operator=(const PubrelImpl&) = default;
    PubrelImpl& operator=(PubrelImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Pubrel::Pubrel() : m_pImpl(new PubrelImpl) {}
Pubrel::~Pubrel() = default;

Pubrel& Pubrel::operator=(const Pubrel& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrel& Pubrel::operator=(Pubrel&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pubrel::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Pubrel::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Pubrel::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Pubrel::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrel::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Pubrel*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Pubrel::MsgIdParamType Pubrel::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Pubrel::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Pubrel::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Pubrel::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Pubrel::lengthImpl() const
{
    return m_pImpl->length();
}

bool Pubrel::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


