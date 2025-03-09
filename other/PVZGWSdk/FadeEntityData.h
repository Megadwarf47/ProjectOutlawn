///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class FadeEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FadeEntityData"); }
		virtual ~FadeEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		FadeEntityData() {
			m_fadeTime = 1.f;
			m_maxWaitFadedWhileStreamingTime = 0.f;
			m_fadeScreen = true;
			m_fadeUI = false;
			m_fadeAudio = false;
			m_fadeMovie = false;
			m_fadeRumble = false;
			m_startFaded = false;
		};

		float m_fadeTime; // 0x18 (24)
		float m_maxWaitFadedWhileStreamingTime; // 0x1C (28)
		bool m_fadeScreen; // 0x20 (32)
		bool m_fadeUI; // 0x21 (33)
		bool m_fadeAudio; // 0x22 (34)
		bool m_fadeMovie; // 0x23 (35)
		bool m_fadeRumble; // 0x24 (36)
		bool m_startFaded; // 0x25 (37)
	}; // 0x28 (40)
}

