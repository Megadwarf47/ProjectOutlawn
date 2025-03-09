///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class MovieTextureAsset;
}

namespace fb {
	class PlayVideoEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayVideoEntityData"); }
		virtual ~PlayVideoEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlayVideoEntityData() {
			m_keepBlackScreen = false;
			m_allowSkip = true;
			m_drawInWidget = false;
			m_playAboveUI = false;
		};

		CtrRef<MovieTextureAsset> m_movie; // 0x18 (24)
		String m_networkStreamingUrl; // 0x20 (32)
		String m_videoIdentifier; // 0x28 (40)
		bool m_keepBlackScreen; // 0x30 (48)
		bool m_allowSkip; // 0x31 (49)
		bool m_drawInWidget; // 0x32 (50)
		bool m_playAboveUI; // 0x33 (51)
	}; // 0x38 (56)
}

