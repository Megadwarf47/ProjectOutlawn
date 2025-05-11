///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UICrosshairWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICrosshairWidgetData"); }
		virtual ~UICrosshairWidgetData() override {}
		UICrosshairWidgetData() {
		};

		String m_dashId; // 0x68 (104)
		String m_dotId; // 0x70 (112)
		String m_shotgunId; // 0x78 (120)
		String m_duckbillId; // 0x80 (128)
		String m_grenadeId; // 0x88 (136)
	}; // 0x90 (144)
}

