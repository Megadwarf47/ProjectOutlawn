///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class AnimatedPointCloudAsset;
}

namespace fb {
	class AnimatedPointCloudEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedPointCloudEntityData"); }
		virtual ~AnimatedPointCloudEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AnimatedPointCloudEntityData() {
			m_realm = Realm::Realm_Client;
			m_externalTime = -1.f;
			m_startPaused = true;
		};

		Realm m_realm; // 0x18 (24)
		CtrRef<AnimatedPointCloudAsset> m_pointCloud; // 0x20 (32)
		float m_externalTime; // 0x28 (40)
		bool m_startPaused; // 0x2C (44)
	}; // 0x30 (48)
}

