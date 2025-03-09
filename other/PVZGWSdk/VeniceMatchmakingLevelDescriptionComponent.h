///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LevelDescriptionComponent.h>
#include <fb/String.h>

namespace fb {
	class VeniceMatchmakingLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceMatchmakingLevelDescriptionComponent"); }
		virtual ~VeniceMatchmakingLevelDescriptionComponent() override {}
		VeniceMatchmakingLevelDescriptionComponent() {
		};

		String m_mod; // 0x10 (16)
		Array<String> m_licenses; // 0x18 (24)
	}; // 0x20 (32)
}

