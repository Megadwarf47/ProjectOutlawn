///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UICppScreenData.h>

namespace fb {
	class BFUICppScreenData : public UICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUICppScreenData"); }
		virtual ~BFUICppScreenData() override {}
		BFUICppScreenData() {
			m_useHudScaling = false;
			m_drawBlackBorders = false;
		};

		bool m_useHudScaling; // 0x28 (40)
		bool m_drawBlackBorders; // 0x29 (41)
	}; // 0x30 (48)
}

