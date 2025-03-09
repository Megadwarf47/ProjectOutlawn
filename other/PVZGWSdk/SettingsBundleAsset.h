///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class SystemSettings;
}

namespace fb {
	class SettingsBundleAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SettingsBundleAsset"); }
		virtual ~SettingsBundleAsset() override {}
		SettingsBundleAsset() {
		};

		RefArray<SystemSettings> m_settings; // 0x18 (24)
	}; // 0x20 (32)
}

