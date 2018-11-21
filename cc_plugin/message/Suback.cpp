#include "Suback.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Suback.h"
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
    using Field = mqtt5::message::SubackFields<>::PacketId;
    return cc_plugin::field::createProps_packetId(Field::name());
    
}

static QVariantMap createProps_propertiesList()
{
    using Field = mqtt5::message::SubackFields<>::PropertiesList;
    return cc_plugin::field::createProps_propertiesList(Field::name());
    
}

static QVariantMap createProps_list()
{
    using Field = mqtt5::message::SubackFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_reasonCode(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId());
    props.append(createProps_propertiesList());
    props.append(createProps_list());
    return props;
}

} // namespace

class SubackImpl : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Suback<mqtt5::cc_plugin::Message>,
        SubackImpl
    >
{
public:
    SubackImpl() = default;
    SubackImpl(const SubackImpl&) = delete;
    SubackImpl(SubackImpl&&) = delete;
    virtual ~SubackImpl() = default;
    SubackImpl& operator=(const SubackImpl&) = default;
    SubackImpl& operator=(SubackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Suback::Suback() : m_pImpl(new SubackImpl) {}
Suback::~Suback() = default;

Suback& Suback::operator=(const Suback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Suback& Suback::operator=(Suback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Suback::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Suback::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Suback::resetImpl()
{
    m_pImpl->reset();
}

bool Suback::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Suback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Suback::MsgIdParamType Suback::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Suback::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Suback::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Suback::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Suback::lengthImpl() const
{
    return m_pImpl->length();
}

bool Suback::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5


