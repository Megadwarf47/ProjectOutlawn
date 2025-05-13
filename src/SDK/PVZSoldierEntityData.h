///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SoldierEntityData.h>
#include <fb/String.h>
#include <fb/Vec4.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class PVZSoldierEntityData : public SoldierEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierEntityData"); }
		virtual ~PVZSoldierEntityData() override {}
		PVZSoldierEntityData() {
			m_targetHighlightColor = Vec4(1.f, 1.f, 1.f, 1.f);
			m_dynamicSpeedMultiplier = 1.f;
			m_weaponShootBoneVerticalOffset = 0.f;
			m_hudIconOffset = 0.f;
			m_teleportImmortal = false;
		};

		Vec4 m_targetHighlightColor; // 0x180 (384)
		float m_dynamicSpeedMultiplier; // 0x190 (400)
		float m_weaponShootBoneVerticalOffset; // 0x194 (404)
		String m_identifier; // 0x198 (408)
		CtrRef<BuffData> m_deserterBuff; // 0x1A0 (416)
		float m_hudIconOffset; // 0x1A8 (424)
		bool m_teleportImmortal; // 0x1AC (428)
	}; // 0x1B0 (432)
}

