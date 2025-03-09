///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ImpartOnProjectileComponentData.h>
#include <fb/ModsSignalTriggerAnimationBinding.h>
#include <fb/String.h>

namespace fb {
	class ModsSignalTriggerComponentData : public ImpartOnProjectileComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsSignalTriggerComponentData"); }
		virtual ~ModsSignalTriggerComponentData() override {}
		ModsSignalTriggerComponentData() {
			m_animationExitTime = 2.f;
			m_useAnimationExitTime = false;
		};

		String m_externalActivateNameToActivate; // 0x70 (112)
		ModsSignalTriggerAnimationBinding m_modTriggerAnimationBinding; // 0x78 (120)
		float m_animationExitTime; // 0xA0 (160)
		bool m_useAnimationExitTime; // 0xA4 (164)
	}; // 0xB0 (176)
}

