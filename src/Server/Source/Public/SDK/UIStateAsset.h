///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class UIComponentData;
}

namespace fb {
	class UIStateAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIStateAsset"); }
		virtual ~UIStateAsset() override {}
		UIStateAsset() {
		};

		RefArray<UIComponentData> m_uiComponents; // 0x18 (24)
		Array<String> m_actionscriptNames; // 0x20 (32)
		String m_stateName; // 0x28 (40)
		String m_statePath; // 0x30 (48)
	}; // 0x38 (56)
}

