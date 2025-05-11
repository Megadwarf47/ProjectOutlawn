///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class ObjectVariation : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectVariation"); }
		virtual ~ObjectVariation() override {}
		ObjectVariation() {
			m_nameHash = 0;
		};

		u32 m_nameHash; // 0x18 (24)
	}; // 0x20 (32)
}

