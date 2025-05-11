///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/NormalizeSettings.h>

namespace fb {
	class AnimatedDriverEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedDriverEntityData"); }
		virtual ~AnimatedDriverEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AnimatedDriverEntityData() {
			m_movementStateStandThreshold = 1.f;
			m_delayAnimationWheelTransform = false;
		};

		AntRef m_vehicleSpeed; // 0x18 (24)
		LinearTransform m_inputTransform; // 0x30 (48)
		AntRef m_vehicleMovementState; // 0x70 (112)
		AntRef m_vehicleBoost; // 0x84 (132)
		AntRef m_vehicleBrake; // 0x98 (152)
		float m_movementStateStandThreshold; // 0xAC (172)
		NormalizeSettings m_yaw; // 0xB0 (176)
		NormalizeSettings m_pitch; // 0xC8 (200)
		NormalizeSettings m_roll; // 0xE0 (224)
		bool m_delayAnimationWheelTransform; // 0xF8 (248)
	}; // 0x100 (256)
}

