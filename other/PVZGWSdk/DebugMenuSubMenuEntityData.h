///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class DebugMenuSubMenuEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugMenuSubMenuEntityData"); }
		virtual ~DebugMenuSubMenuEntityData() override {}
		DebugMenuSubMenuEntityData() {
		};

		String m_text; // 0x18 (24)
	}; // 0x20 (32)
}

