///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class InputActionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputActionData"); }
		virtual ~InputActionData() override {}
		InputActionData() {
			m_isAnalog = false;
			m_negateValue = false;
		};

		bool m_isAnalog; // 0x10 (16)
		bool m_negateValue; // 0x11 (17)
	}; // 0x18 (24)
}

