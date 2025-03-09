///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UINPXLine.h>

namespace fb {
	class UINPXTextLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXTextLine"); }
		virtual ~UINPXTextLine() override {}
		UINPXTextLine() {
		};

		String m_text; // 0x10 (16)
	}; // 0x18 (24)
}

