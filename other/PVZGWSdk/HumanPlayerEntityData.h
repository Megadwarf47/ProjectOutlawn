///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/HumanPlayerProxyEntityData.h>

namespace fb {
	class HumanPlayerEntityData : public HumanPlayerProxyEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HumanPlayerEntityData"); }
		virtual ~HumanPlayerEntityData() override {}
		HumanPlayerEntityData() {
			m_playerKilledDelay = 5.f;
			m_postReviveShortRespawnTime = 5.f;
			m_maxReviveCount = -1;
		};

		float m_playerKilledDelay; // 0x20 (32)
		float m_postReviveShortRespawnTime; // 0x24 (36)
		s32 m_maxReviveCount; // 0x28 (40)
	}; // 0x30 (48)
}

