///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIColorizationData.h>
#include <fb/UIElementTextFieldEntityData.h>

namespace fb {
	class BFUIElementColorizedTextFieldEntityData : public UIElementTextFieldEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElementColorizedTextFieldEntityData"); }
		virtual ~BFUIElementColorizedTextFieldEntityData() override {}
		BFUIElementColorizedTextFieldEntityData() {
		};

		BFUIColorizationData m_colorizationData; // 0x110 (272)
	}; // 0x120 (288)
}

