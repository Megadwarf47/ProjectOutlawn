///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/RefArray.h>
#include <fb/UICompareDataSource.h>
#include <fb/UIElementSize.h>

namespace fb {
	class GameObjectData;
	class UIElementLayerEntityData;
	class UITextureMappingAsset;
}

namespace fb {
	class UIWidgetEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWidgetEntityData"); }
		virtual ~UIWidgetEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIWidgetEntityData() {
			m_visible = true;
		};

		UIElementSize m_size; // 0x18 (24)
		RefArray<UIElementLayerEntityData> m_layers; // 0x20 (32)
		RefArray<UITextureMappingAsset> m_textureMappings; // 0x28 (40)
		RefArray<GameObjectData> m_components; // 0x30 (48)
		UICompareDataSource m_visibilityDataSource; // 0x38 (56)
		Array<String> m_inputEvents; // 0x58 (88)
		bool m_visible; // 0x60 (96)
	}; // 0x68 (104)
}

