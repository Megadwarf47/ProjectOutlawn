///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AdvertisementZoneMember.h>
#include <fb/Array.h>
#include <fb/LevelDescriptionComponent.h>
#include <fb/String.h>

namespace fb {
	class AdvertisementLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AdvertisementLevelDescriptionComponent"); }
		virtual ~AdvertisementLevelDescriptionComponent() override {}
		AdvertisementLevelDescriptionComponent() {
		};

		String m_identifier; // 0x10 (16)
		Array<AdvertisementZoneMember> m_members; // 0x18 (24)
	}; // 0x20 (32)
}

