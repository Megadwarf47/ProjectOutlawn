///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class SubViewData;
}

namespace fb {
	class PlayerViewData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerViewData"); }
		virtual ~PlayerViewData() override {}
		PlayerViewData() {
		};

		RefArray<SubViewData> m_subViews; // 0x10 (16)
	}; // 0x18 (24)
}

