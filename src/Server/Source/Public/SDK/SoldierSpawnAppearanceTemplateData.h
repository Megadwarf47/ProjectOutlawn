///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class SoldierSpawnAppearanceTemplateData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierSpawnAppearanceTemplateData"); }
		virtual ~SoldierSpawnAppearanceTemplateData() override {}
		SoldierSpawnAppearanceTemplateData() {
			m_body = 0;
		};

		u32 m_body; // 0x18 (24)
	}; // 0x20 (32)
}

