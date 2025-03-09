///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/UIComponentData.h>

namespace fb {
	class StatsCategoryBaseData;
}

namespace fb {
	class UIAwardsScreenCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIAwardsScreenCompData"); }
		virtual ~UIAwardsScreenCompData() override {}
		UIAwardsScreenCompData() {
		};

		RefArray<StatsCategoryBaseData> m_trackableAwardRow; // 0x30 (48)
		RefArray<StatsCategoryBaseData> m_trackableAwardCol; // 0x38 (56)
	}; // 0x40 (64)
}

