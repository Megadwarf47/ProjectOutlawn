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
	class VideoRecorderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VideoRecorderEntityData"); }
		virtual ~VideoRecorderEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		VideoRecorderEntityData() {
			m_secondsStartTime = 0.f;
			m_secondsDurationTime = 0.f;
		};

		String m_fileName; // 0x18 (24)
		float m_secondsStartTime; // 0x20 (32)
		float m_secondsDurationTime; // 0x24 (36)
	}; // 0x28 (40)
}

