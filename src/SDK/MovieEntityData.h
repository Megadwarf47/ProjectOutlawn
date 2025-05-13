///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class MovieTextureAsset;
}

namespace fb {
	class MovieEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovieEntityData"); }
		virtual ~MovieEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		MovieEntityData() {
			m_externalTime = -1.f;
			m_renderableCount = 2;
			m_threadCount = 1;
			m_isNormalMap = false;
			m_isLooping = false;
			m_preBuffer = false;
		};

		CtrRef<MovieTextureAsset> m_movie; // 0x18 (24)
		float m_externalTime; // 0x20 (32)
		u32 m_renderableCount; // 0x24 (36)
		u32 m_threadCount; // 0x28 (40)
		bool m_isNormalMap; // 0x2C (44)
		bool m_isLooping; // 0x2D (45)
		bool m_preBuffer; // 0x2E (46)
	}; // 0x30 (48)
}

