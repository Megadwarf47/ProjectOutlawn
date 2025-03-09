///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponZoomLevelData;
	class ZoomLevelData;
}

namespace fb {
	class WeaponZoomLevelModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponZoomLevelModifier"); }
		virtual ~WeaponZoomLevelModifier() override {}
		WeaponZoomLevelModifier() {
			m_zoomLevelIndex = -1;
		};

		s32 m_zoomLevelIndex; // 0x18 (24)
		CtrRef<ZoomLevelData> m_zoomLevel; // 0x20 (32)
		CtrRef<WeaponZoomLevelData> m_weaponZoomLevel; // 0x28 (40)
	}; // 0x30 (48)
}

