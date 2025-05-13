///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class VersionData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VersionData"); }
		virtual ~VersionData() override {}
		VersionData() {
			m_version = 0;
		};

		String m_disclaimer; // 0x18 (24)
		s32 m_version; // 0x20 (32)
		String m_dateTime; // 0x28 (40)
		String m_branchId; // 0x30 (48)
		String m_gameName; // 0x38 (56)
	}; // 0x40 (64)
}

