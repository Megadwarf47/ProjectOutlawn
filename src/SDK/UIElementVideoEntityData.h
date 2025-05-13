///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIElementEntityData.h>

namespace fb {
	class UIElementVideoEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementVideoEntityData"); }
		virtual ~UIElementVideoEntityData() override {}
		UIElementVideoEntityData() {
			m_fullscreen = true;
		};

		String m_videoPlayerIdentifier; // 0xD0 (208)
		bool m_fullscreen; // 0xD8 (216)
	}; // 0xE0 (224)
}

