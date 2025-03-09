///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PreRoundEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PreRoundEntityData"); }
		virtual ~PreRoundEntityData() override {}
		PreRoundEntityData() {
			m_roundMaxPlayerCount = 8;
			m_roundMinPlayerCount = 4;
			m_roundRestartCountdown = 10;
			m_enabled = true;
		};

		s32 m_roundMaxPlayerCount; // 0x18 (24)
		s32 m_roundMinPlayerCount; // 0x1C (28)
		s32 m_roundRestartCountdown; // 0x20 (32)
		bool m_enabled; // 0x24 (36)
	}; // 0x28 (40)
}

