///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class PVZSoldierSoundComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierSoundComponentData"); }
		virtual ~PVZSoldierSoundComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZSoldierSoundComponentData() {
			m_walkVelocityThreshold = 1.f;
			m_runVelocityThreshold = 5.5f;
			m_walkPeriod = 0.3f;
			m_runPeriod = 0.2f;
			m_antBoneOffset = 0.f;
		};

		LinearTransform m_antTrajectory; // 0x70 (112)
		LinearTransform m_antBoneTransform; // 0xB0 (176)
		float m_walkVelocityThreshold; // 0xF0 (240)
		float m_runVelocityThreshold; // 0xF4 (244)
		float m_walkPeriod; // 0xF8 (248)
		float m_runPeriod; // 0xFC (252)
		float m_antBoneOffset; // 0x100 (256)
	}; // 0x110 (272)
}

