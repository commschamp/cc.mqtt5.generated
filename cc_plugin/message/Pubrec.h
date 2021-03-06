// Generated by commsdsl2comms v3.6.2

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "mqtt5/message/Pubrec.h"
#include "cc_plugin/Message.h"

namespace mqtt5
{

namespace cc_plugin
{

namespace message
{

class Pubrec : public
    comms_champion::ProtocolMessageBase<
        mqtt5::message::Pubrec<mqtt5::cc_plugin::Message>,
        Pubrec
    >
{
public:
    Pubrec();
    Pubrec(const Pubrec&) = delete;
    Pubrec(Pubrec&&) = delete;
    virtual ~Pubrec();
    Pubrec& operator=(const Pubrec&);
    Pubrec& operator=(Pubrec&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqtt5



