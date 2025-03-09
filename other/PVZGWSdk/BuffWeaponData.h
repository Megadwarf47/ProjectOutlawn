///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/WeaponData.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffWeaponData"); }
		virtual ~BuffWeaponData() override {}
		BuffWeaponData() {
			m_minDistance = 0.f;
			m_maxDistance = 0.f;
			m_targetAngle = 90.f;
			m_preferDamagedTargets = false;
			m_targetNeutral = true;
			m_targetFriendly = true;
			m_targetHostile = true;
			m_targetAliveOnly = true;
		};

		CtrRef<BuffData> m_ownerBuff; // 0x20 (32)
		CtrRef<BuffData> m_targetBuff; // 0x28 (40)
		float m_minDistance; // 0x30 (48)
		float m_maxDistance; // 0x34 (52)
		float m_targetAngle; // 0x38 (56)
		bool m_preferDamagedTargets; // 0x3C (60)
		bool m_targetNeutral; // 0x3D (61)
		bool m_targetFriendly; // 0x3E (62)
		bool m_targetHostile; // 0x3F (63)
		bool m_targetAliveOnly; // 0x40 (64)
	}; // 0x48 (72)
}

