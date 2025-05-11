///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIColorizationData.h>
#include <fb/UIElementBitmapEntityData.h>

namespace fb {
	class BFUIElementColorizedBitmapEntityData : public UIElementBitmapEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElementColorizedBitmapEntityData"); }
		virtual ~BFUIElementColorizedBitmapEntityData() override {}
		BFUIElementColorizedBitmapEntityData() {
		};

		BFUIColorizationData m_colorizationData; // 0x130 (304)
	}; // 0x140 (320)
}

