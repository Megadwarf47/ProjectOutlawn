///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LevelDescriptionComponent.h>

namespace fb {
	class PVZUILevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUILevelDescriptionComponent"); }
		virtual ~PVZUILevelDescriptionComponent() override {}
		PVZUILevelDescriptionComponent() {
			m_timeOfDayEnabled = false;
		};

		Array<String> m_variants; // 0x10 (16)
		bool m_timeOfDayEnabled; // 0x18 (24)
	}; // 0x20 (32)
}

