///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>

namespace fb {
	class ObjectVariation;
}

namespace fb {
	class ObjectVariationMultiSwitchEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectVariationMultiSwitchEntityData"); }
		virtual ~ObjectVariationMultiSwitchEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ObjectVariationMultiSwitchEntityData() {
			m_currentIndex = 0;
			m_setOnInit = false;
		};

		RefArray<ObjectVariation> m_variations; // 0x18 (24)
		s32 m_currentIndex; // 0x20 (32)
		bool m_setOnInit; // 0x24 (36)
	}; // 0x28 (40)
}

