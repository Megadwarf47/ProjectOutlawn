///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UINuiSkeletonFeedbackWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINuiSkeletonFeedbackWidgetData"); }
		virtual ~UINuiSkeletonFeedbackWidgetData() override {}
		UINuiSkeletonFeedbackWidgetData() {
			m_stayDuration = 5.f;
			m_fadeOutDuration = 2.f;
			m_stateChangeTime = 1.f;
		};

		float m_stayDuration; // 0x68 (104)
		float m_fadeOutDuration; // 0x6C (108)
		float m_stateChangeTime; // 0x70 (112)
	}; // 0x78 (120)
}

