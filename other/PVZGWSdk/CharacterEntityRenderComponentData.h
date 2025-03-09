///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterEntityRenderAnimationBinding.h>
#include <fb/GameComponentData.h>

namespace fb {
	class CharacterEntityRenderComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterEntityRenderComponentData"); }
		virtual ~CharacterEntityRenderComponentData() override {}
		CharacterEntityRenderComponentData() {
			m_isRenderingOnSpawn = true;
		};

		CharacterEntityRenderAnimationBinding m_characterEntityRenderBinding; // 0x70 (112)
		bool m_isRenderingOnSpawn; // 0x84 (132)
	}; // 0x90 (144)
}

