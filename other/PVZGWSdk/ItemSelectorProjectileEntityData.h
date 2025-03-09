///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ExplosionPackEntityData.h>
#include <fb/ItemProjectileData.h>

namespace fb {
	class ItemSelectorProjectileEntityData : public ExplosionPackEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ItemSelectorProjectileEntityData"); }
		virtual ~ItemSelectorProjectileEntityData() override {}
		ItemSelectorProjectileEntityData() {
			m_timeToLiveUnselected = 30.f;
			m_verticalIconPixelOffset = 20;
		};

		float m_timeToLiveUnselected; // 0x190 (400)
		Array<ItemProjectileData> m_items; // 0x198 (408)
		s32 m_verticalIconPixelOffset; // 0x1A0 (416)
	}; // 0x1B0 (432)
}

