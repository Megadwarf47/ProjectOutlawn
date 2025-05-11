///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class EnlightenRuntimeConfig : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenRuntimeConfig"); }
		virtual ~EnlightenRuntimeConfig() override {}
		EnlightenRuntimeConfig() {
			m_jobCount = 12;
		};

		u32 m_jobCount; // 0x18 (24)
	}; // 0x20 (32)
}

