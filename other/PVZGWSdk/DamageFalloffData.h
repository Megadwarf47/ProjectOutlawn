///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameDataContainer.h>

namespace fb {
	class DamageFalloffData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageFalloffData"); }
		virtual ~DamageFalloffData() override {}
		DamageFalloffData() {
			m_startDamageMultiplier = 1.f;
			m_endDamageMultiplier = 1.f;
			m_damageFalloffStartDistance = 10.f;
			m_damageFalloffEndDistance = 50.f;
			m_damageFalloffEnabled = false;
		};

		float m_startDamageMultiplier; // 0x10 (16)
		float m_endDamageMultiplier; // 0x14 (20)
		float m_damageFalloffStartDistance; // 0x18 (24)
		float m_damageFalloffEndDistance; // 0x1C (28)
		bool m_damageFalloffEnabled; // 0x20 (32)
	}; // 0x28 (40)
}

