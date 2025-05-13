///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UINPXLine.h>

namespace fb {
	class UINPXPaddingLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXPaddingLine"); }
		virtual ~UINPXPaddingLine() override {}
		UINPXPaddingLine() {
			m_height = 0.f;
		};

		float m_height; // 0x10 (16)
	}; // 0x18 (24)
}

