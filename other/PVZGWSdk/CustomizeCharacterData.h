///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CustomizeVisual.h>
#include <fb/RefArray.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	class CustomizeCharacterData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizeCharacterData"); }
		virtual ~CustomizeCharacterData() override {}
		CustomizeCharacterData() {
			m_overrideMaxHealth = -1.f;
			m_overrideCriticalHealthThreshold = -1.f;
			m_restoreToOriginalVisualState = false;
			m_clearVisualState = false;
		};

		Array<CustomizeVisual> m_visualGroups; // 0x18 (24)
		RefArray<UnlockAssetBase> m_unlocks; // 0x20 (32)
		float m_overrideMaxHealth; // 0x28 (40)
		float m_overrideCriticalHealthThreshold; // 0x2C (44)
		bool m_restoreToOriginalVisualState; // 0x30 (48)
		bool m_clearVisualState; // 0x31 (49)
	}; // 0x38 (56)
}

