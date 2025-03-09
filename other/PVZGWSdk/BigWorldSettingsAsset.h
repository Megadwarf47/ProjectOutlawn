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
	class BigWorldSetting;
}

namespace fb {
	class BigWorldSettingsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BigWorldSettingsAsset"); }
		virtual ~BigWorldSettingsAsset() override {}
		BigWorldSettingsAsset() {
		};

		RefArray<BigWorldSetting> m_settings; // 0x18 (24)
	}; // 0x20 (32)
}

