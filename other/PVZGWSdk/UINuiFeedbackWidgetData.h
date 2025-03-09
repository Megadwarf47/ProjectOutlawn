///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UINuiFeedbackWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINuiFeedbackWidgetData"); }
		virtual ~UINuiFeedbackWidgetData() override {}
		UINuiFeedbackWidgetData() {
			m_ySpacing = 4.f;
		};

		float m_ySpacing; // 0x68 (104)
	}; // 0x70 (112)
}

