///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/UIAutoScrollTextSettings.h>

namespace fb {
	class UIIMSettingsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIIMSettingsAsset"); }
		virtual ~UIIMSettingsAsset() override {}
		UIIMSettingsAsset() {
		};

		UIAutoScrollTextSettings m_autoScrollSettings; // 0x18 (24)
	}; // 0x30 (48)
}

