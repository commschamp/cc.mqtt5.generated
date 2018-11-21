#include "Mqtt5Protocol.h"

#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/Frame.h"
#include "cc_plugin/frame/FrameTransportMessage.h"

namespace cc = comms_champion;

namespace mqtt5
{

namespace cc_plugin
{

namespace plugin
{

class Mqtt5ProtocolImpl : public
    cc::ProtocolBase<
        mqtt5::cc_plugin::frame::Frame,
        mqtt5::cc_plugin::frame::FrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            mqtt5::cc_plugin::frame::Frame,
            mqtt5::cc_plugin::frame::FrameTransportMessage
        >;
public:
    friend class mqtt5::cc_plugin::plugin::Mqtt5Protocol;

    Mqtt5ProtocolImpl() = default;
    virtual ~Mqtt5ProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("mqtt5");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;
};

Mqtt5Protocol::Mqtt5Protocol()
  : m_pImpl(new Mqtt5ProtocolImpl())
{
}

Mqtt5Protocol::~Mqtt5Protocol() = default;

const QString& Mqtt5Protocol::nameImpl() const
{
    return m_pImpl->name();
}

Mqtt5Protocol::MessagesList Mqtt5Protocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr Mqtt5Protocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

Mqtt5Protocol::MessagesList Mqtt5Protocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr Mqtt5Protocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Mqtt5Protocol::UpdateStatus Mqtt5Protocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr Mqtt5Protocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr Mqtt5Protocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr Mqtt5Protocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr Mqtt5Protocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace mqtt5


