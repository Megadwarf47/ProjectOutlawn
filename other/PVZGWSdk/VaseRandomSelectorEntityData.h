///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class VaseRandomSelectorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VaseRandomSelectorEntityData"); }
		virtual ~VaseRandomSelectorEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		VaseRandomSelectorEntityData() {
			m_defaultDifficulty = 0;
			m_difficulty = 0;
		};

		s32 m_defaultDifficulty; // 0x18 (24)
		s32 m_difficulty; // 0x1C (28)
	}; // 0x20 (32)
}

