///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/ModsInputActivatorCooldownMode.h>

namespace fb {
	class ModsInputActivatorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsInputActivatorComponentData"); }
		virtual ~ModsInputActivatorComponentData() override {}
		ModsInputActivatorComponentData() {
			m_inputActivator = -1341426433;
			m_maxNumberOfActivation = 4;
			m_cooldownDuration = 30.f;
			m_cooldownMode = ModsInputActivatorCooldownMode::ModsInputActivatorCooldownMode_StartOnActivation;
		};

		s32 m_inputActivator; // 0x70 (112)
		s32 m_maxNumberOfActivation; // 0x74 (116)
		float m_cooldownDuration; // 0x78 (120)
		ModsInputActivatorCooldownMode m_cooldownMode; // 0x7C (124)
	}; // 0x80 (128)
}

