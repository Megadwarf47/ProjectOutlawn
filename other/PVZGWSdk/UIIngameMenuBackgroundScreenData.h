///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/Vec4.h>

namespace fb {
	class UIIngameMenuBackgroundScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIIngameMenuBackgroundScreenData"); }
		virtual ~UIIngameMenuBackgroundScreenData() override {}
		UIIngameMenuBackgroundScreenData() {
		};

		Vec4 m_mapFocusMargins; // 0x30 (48)
	}; // 0x40 (64)
}

