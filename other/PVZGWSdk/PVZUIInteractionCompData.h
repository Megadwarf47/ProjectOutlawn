///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UI3dIconCompData.h>

namespace fb {
	class PVZUIInteractionCompData : public UI3dIconCompData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIInteractionCompData"); }
		virtual ~PVZUIInteractionCompData() override {}
		PVZUIInteractionCompData() {
			m_reviveIconMinDistance = 9.f;
			m_reviveIconMaxDistance = 30.f;
			m_pickupShrinkSnap = true;
		};

		float m_reviveIconMinDistance; // 0xB8 (184)
		float m_reviveIconMaxDistance; // 0xBC (188)
		bool m_pickupShrinkSnap; // 0xC0 (192)
	}; // 0xC8 (200)
}

