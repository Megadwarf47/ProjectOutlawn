///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class BFUIElement3SliceStatbarStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElement3SliceStatbarStyle"); }
		virtual ~BFUIElement3SliceStatbarStyle() override {}
		BFUIElement3SliceStatbarStyle() {
			m_keepSize = false;
		};

		String m_leftTexture; // 0x18 (24)
		String m_fillerTexture; // 0x20 (32)
		String m_rightTexture; // 0x28 (40)
		String m_backLeftTexture; // 0x30 (48)
		String m_backFillerTexture; // 0x38 (56)
		String m_backRightTexture; // 0x40 (64)
		bool m_keepSize; // 0x48 (72)
	}; // 0x50 (80)
}

