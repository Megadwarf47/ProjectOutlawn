///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UIOptionsScreenAdjustScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsScreenAdjustScreenData"); }
		virtual ~UIOptionsScreenAdjustScreenData() override {}
		UIOptionsScreenAdjustScreenData() {
			m_leftArrowOffset = 0;
			m_rightArrowOffset = 0;
			m_upArrowOffset = 0;
			m_downArrowOffset = 0;
		};

		String m_arrowTexture; // 0x30 (48)
		CtrRef<UIElementFillData> m_safeAreaStyle; // 0x38 (56)
		String m_resetDefaultTitle; // 0x40 (64)
		s32 m_leftArrowOffset; // 0x48 (72)
		s32 m_rightArrowOffset; // 0x4C (76)
		s32 m_upArrowOffset; // 0x50 (80)
		s32 m_downArrowOffset; // 0x54 (84)
	}; // 0x58 (88)
}

