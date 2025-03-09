///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIDamageIndicatorCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDamageIndicatorCompData"); }
		virtual ~UIDamageIndicatorCompData() override {}
		UIDamageIndicatorCompData() {
			m_maxUpdateTime = 5.f;
		};

		float m_maxUpdateTime; // 0x30 (48)
	}; // 0x38 (56)
}

