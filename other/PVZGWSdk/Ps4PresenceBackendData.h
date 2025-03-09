///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PresenceBackendData.h>
#include <fb/Ps4TitleData.h>

namespace fb {
	class Ps4PresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Ps4PresenceBackendData"); }
		virtual ~Ps4PresenceBackendData() override {}
		Ps4PresenceBackendData() {
		};

		Ps4TitleData m_defaultTitleData; // 0x18 (24)
		Array<Ps4TitleData> m_titleData; // 0x40 (64)
	}; // 0x48 (72)
}

