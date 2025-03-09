///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ControllableHealthComponentData.h>

namespace fb {
	class CharacterHealthComponentData : public ControllableHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterHealthComponentData"); }
		virtual ~CharacterHealthComponentData() override {}
		CharacterHealthComponentData() {
			m_maxHealth = 0.f;
			m_timeForCorpse = 5.f;
			m_isImmortal = false;
		};

		float m_maxHealth; // 0x70 (112)
		float m_timeForCorpse; // 0x74 (116)
		bool m_isImmortal; // 0x78 (120)
	}; // 0x80 (128)
}

