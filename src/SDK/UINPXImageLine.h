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
	class UINPXImageLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXImageLine"); }
		virtual ~UINPXImageLine() override {}
		UINPXImageLine() {
		};

		String m_textureName; // 0x10 (16)
	}; // 0x18 (24)
}

