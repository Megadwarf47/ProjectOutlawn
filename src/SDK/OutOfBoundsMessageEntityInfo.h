///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MessageEntityInfo.h>

namespace fb {
	class OutOfBoundsMessageEntityInfo : public MessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OutOfBoundsMessageEntityInfo"); }
		virtual ~OutOfBoundsMessageEntityInfo() override {}
		OutOfBoundsMessageEntityInfo() {
			m_displayTime = 5.f;
		};

		float m_displayTime; // 0x10 (16)
	}; // 0x18 (24)
}

