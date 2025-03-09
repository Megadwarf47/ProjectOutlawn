///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class SoldierSpawnKitTemplateData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierSpawnKitTemplateData"); }
		virtual ~SoldierSpawnKitTemplateData() override {}
		SoldierSpawnKitTemplateData() {
			m_kit = 0;
			m_mainGun = 0;
		};

		u32 m_kit; // 0x18 (24)
		u32 m_mainGun; // 0x1C (28)
	}; // 0x20 (32)
}

