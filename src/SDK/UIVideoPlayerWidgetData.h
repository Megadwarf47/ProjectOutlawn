///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIVideoPlayerWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVideoPlayerWidgetData"); }
		virtual ~UIVideoPlayerWidgetData() override {}
		UIVideoPlayerWidgetData() {
			m_fullScreenPlayback = true;
		};

		bool m_fullScreenPlayback; // 0x68 (104)
	}; // 0x70 (112)
}

