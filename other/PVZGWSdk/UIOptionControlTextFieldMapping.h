///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class UIOptionControlTextFieldMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionControlTextFieldMapping"); }
		virtual ~UIOptionControlTextFieldMapping() override {}
		UIOptionControlTextFieldMapping() {
		};

		String m_instanceName; // 0x10 (16)
	}; // 0x18 (24)
}

