///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LevelDescriptionComponent.h>
#include <fb/String.h>

namespace fb {
	class UICoopLevelDescription : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICoopLevelDescription"); }
		virtual ~UICoopLevelDescription() override {}
		UICoopLevelDescription() {
			m_devTime = 0;
		};

		String m_debriefing; // 0x10 (16)
		s32 m_devTime; // 0x18 (24)
		Array<String> m_unlockedByLevels; // 0x20 (32)
	}; // 0x28 (40)
}

