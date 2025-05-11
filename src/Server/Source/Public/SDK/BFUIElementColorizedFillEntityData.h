///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIColorizationData.h>
#include <fb/UIElementFillEntityData.h>

namespace fb {
	class BFUIElementColorizedFillEntityData : public UIElementFillEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElementColorizedFillEntityData"); }
		virtual ~BFUIElementColorizedFillEntityData() override {}
		BFUIElementColorizedFillEntityData() {
		};

		BFUIColorizationData m_colorizationData; // 0xE0 (224)
	}; // 0xF0 (240)
}

