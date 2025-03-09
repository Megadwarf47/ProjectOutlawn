///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateType.h>
#include <fb/PVZBuffStateControllerData.h>

namespace fb {
	class CharacterStateBuffStateControllerData : public PVZBuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterStateBuffStateControllerData"); }
		virtual ~CharacterStateBuffStateControllerData() override {}
		CharacterStateBuffStateControllerData() {
			m_initialDuration = 0.f;
			m_characterState = CharacterStateType::CharacterStateType_OnGround;
			m_cooldown = 0.f;
			m_launchedOnly = false;
		};

		float m_initialDuration; // 0x20 (32)
		CharacterStateType m_characterState; // 0x24 (36)
		float m_cooldown; // 0x28 (40)
		bool m_launchedOnly; // 0x2C (44)
	}; // 0x30 (48)
}

