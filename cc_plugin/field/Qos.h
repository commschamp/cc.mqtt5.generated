#pragma once

#include <QtCore/QVariantMap>

namespace mqtt5
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_qos(const char* name, bool serHidden = false);

} // namespace field

} // namespace cc_plugin

} // namespace mqtt5

