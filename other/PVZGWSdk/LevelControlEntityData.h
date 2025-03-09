///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class LevelControlEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LevelControlEntityData"); }
		virtual ~LevelControlEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		LevelControlEntityData() {
			m_rollCredits = false;
		};

		String m_levelToLoad; // 0x18 (24)
		String m_inclusionOptions; // 0x20 (32)
		String m_startPoint; // 0x28 (40)
		bool m_rollCredits; // 0x30 (48)
	}; // 0x38 (56)
}

