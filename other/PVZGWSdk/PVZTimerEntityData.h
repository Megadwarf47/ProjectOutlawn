///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZTimerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZTimerEntityData"); }
		virtual ~PVZTimerEntityData() override {}
		PVZTimerEntityData() {
			m_totalTime = 0.f;
			m_debugIndex = 0;
			m_bumpTime = 0.f;
			m_isCountdownTimer = true;
		};

		float m_totalTime; // 0x18 (24)
		s32 m_debugIndex; // 0x1C (28)
		float m_bumpTime; // 0x20 (32)
		bool m_isCountdownTimer; // 0x24 (36)
	}; // 0x28 (40)
}

