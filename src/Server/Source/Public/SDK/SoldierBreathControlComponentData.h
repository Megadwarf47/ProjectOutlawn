///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class SoldierBreathControlComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierBreathControlComponentData"); }
		virtual ~SoldierBreathControlComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoldierBreathControlComponentData() {
			m_time = 5.f;
			m_transitionTime = 1.f;
			m_transitionCurveShape = 0.8f;
			m_releaseTime = 1.f;
			m_penaltyMultiplier = 4.f;
			m_penaltyTimeout = 4.f;
		};

		float m_time; // 0x70 (112)
		float m_transitionTime; // 0x74 (116)
		float m_transitionCurveShape; // 0x78 (120)
		float m_releaseTime; // 0x7C (124)
		float m_penaltyMultiplier; // 0x80 (128)
		float m_penaltyTimeout; // 0x84 (132)
	}; // 0x90 (144)
}

