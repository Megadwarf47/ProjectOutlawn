///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class UIItemDescription;
	class UIItemDescriptionAsset;
}

namespace fb {
	class UIItemDescriptionAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIItemDescriptionAsset"); }
		virtual ~UIItemDescriptionAsset() override {}
		UIItemDescriptionAsset() {
		};

		RefArray<UIItemDescriptionAsset> m_children; // 0x18 (24)
		RefArray<UIItemDescription> m_items; // 0x20 (32)
	}; // 0x28 (40)
}

