///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/UIAudioEventMapping.h>

namespace fb {
	class UIAudioEventAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAudioEventAsset"); }
		virtual ~UIAudioEventAsset() override {}
		UIAudioEventAsset() {
		};

		Array<UIAudioEventMapping> m_audioEventMappings; // 0x18 (24)
	}; // 0x20 (32)
}

