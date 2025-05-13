///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/UICompareDataSource.h>
#include <fb/UIElementInclusionSettings.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class UIElementLayerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementLayerEntityData"); }
		virtual ~UIElementLayerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIElementLayerEntityData() {
			m_visible = true;
		};

		String m_layerName; // 0x18 (24)
		RefArray<GameObjectData> m_elements; // 0x20 (32)
		UIElementInclusionSettings m_inclusionSettings; // 0x28 (40)
		UICompareDataSource m_visibilityDataSource; // 0x40 (64)
		bool m_visible; // 0x60 (96)
	}; // 0x68 (104)
}

