///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PlayerRole.h>
#include <fb/StatsCategoryBaseData.h>

namespace fb {
	class StatsCategoryPlayerRoleData : public StatsCategoryBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StatsCategoryPlayerRoleData"); }
		virtual ~StatsCategoryPlayerRoleData() override {}
		StatsCategoryPlayerRoleData() {
		};

		Array<PlayerRole> m_roles; // 0x20 (32)
	}; // 0x28 (40)
}

