///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class NuiSpeechListElement : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechListElement"); }
		virtual ~NuiSpeechListElement() override {}
		NuiSpeechListElement() {
		};

		String m_tag; // 0x10 (16)
		String m_sid; // 0x18 (24)
		Array<String> m_variations; // 0x20 (32)
	}; // 0x28 (40)
}

