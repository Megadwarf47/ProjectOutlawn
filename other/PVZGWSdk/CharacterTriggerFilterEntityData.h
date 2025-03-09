///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerFilterEntityData.h>

namespace fb {
	class CharacterTriggerFilterEntityData : public TriggerFilterEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterTriggerFilterEntityData"); }
		virtual ~CharacterTriggerFilterEntityData() override {}
		CharacterTriggerFilterEntityData() {
			m_checkIsAlive = true;
		};

		bool m_checkIsAlive; // 0x18 (24)
	}; // 0x20 (32)
}

