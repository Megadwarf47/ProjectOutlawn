///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/UIPartProperties.h>

namespace fb {
	class UIPartPropertyList : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPartPropertyList"); }
		virtual ~UIPartPropertyList() override {}
		UIPartPropertyList() {
		};

		Array<UIPartProperties> m_hudPropertyList; // 0x10 (16)
	}; // 0x18 (24)
}

