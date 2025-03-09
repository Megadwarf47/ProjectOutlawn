///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class GameRoleInformation : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameRoleInformation"); }
		virtual ~GameRoleInformation() override {}
		GameRoleInformation() {
			m_capacity = 0;
		};

		String m_roleName; // 0x10 (16)
		u32 m_capacity; // 0x18 (24)
	}; // 0x20 (32)
}

