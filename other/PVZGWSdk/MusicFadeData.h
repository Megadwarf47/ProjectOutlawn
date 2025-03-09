///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/MusicFadeType.h>
#include <fb/MusicSyncType.h>

namespace fb {
	class MusicFadeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicFadeData"); }
		virtual ~MusicFadeData() override {}
		MusicFadeData() {
			m_syncType = MusicSyncType::MusicSyncType_Immediate;
			m_fadeOutLength = 0.f;
			m_fadeOutType = MusicFadeType::MusicFadeType_Seconds;
			m_fadeInLength = 0.f;
			m_fadeInType = MusicFadeType::MusicFadeType_Seconds;
			m_equalPower = true;
		};

		MusicSyncType m_syncType; // 0x10 (16)
		float m_fadeOutLength; // 0x14 (20)
		MusicFadeType m_fadeOutType; // 0x18 (24)
		float m_fadeInLength; // 0x1C (28)
		MusicFadeType m_fadeInType; // 0x20 (32)
		bool m_equalPower; // 0x24 (36)
	}; // 0x28 (40)
}

