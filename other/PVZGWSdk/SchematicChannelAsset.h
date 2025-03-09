///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/EventChannel.h>
#include <fb/LinkChannel.h>
#include <fb/PropertyChannel.h>

namespace fb {
	class SchematicChannelAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SchematicChannelAsset"); }
		virtual ~SchematicChannelAsset() override {}
		SchematicChannelAsset() {
		};

		Array<EventChannel> m_events; // 0x18 (24)
		Array<LinkChannel> m_links; // 0x20 (32)
		Array<PropertyChannel> m_properties; // 0x28 (40)
	}; // 0x30 (48)
}

