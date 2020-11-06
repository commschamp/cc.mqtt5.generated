// Generated by commsdsl2comms v3.5.3

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Subscribe.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Subscribe : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Subscribe<mqtt5::cc_plugin::Message>,
        Subscribe
    >
{
public:
    Subscribe();
    Subscribe(const Subscribe&) = delete;
    Subscribe(Subscribe&&) = delete;
    virtual ~Subscribe();
    Subscribe& operator=(const Subscribe&);
    Subscribe& operator=(Subscribe&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



