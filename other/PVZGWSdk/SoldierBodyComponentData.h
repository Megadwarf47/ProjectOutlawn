///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class SoldierBodyComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierBodyComponentData"); }
		virtual ~SoldierBodyComponentData() override {}
		SoldierBodyComponentData() {
			m_overrideGravityValue = 0.f;
			m_overrideVelocityY = 0.f;
			m_sprintMultiplier = 1.f;
			m_overrideGravity = false;
			m_overrideVelocity = false;
			m_disableParachute = false;
			m_pronePoseEnabled = true;
		};

		float m_overrideGravityValue; // 0x70 (112)
		float m_overrideVelocityY; // 0x74 (116)
		float m_sprintMultiplier; // 0x78 (120)
		bool m_overrideGravity; // 0x7C (124)
		bool m_overrideVelocity; // 0x7D (125)
		bool m_disableParachute; // 0x7E (126)
		bool m_pronePoseEnabled; // 0x7F (127)
	}; // 0x80 (128)
}

