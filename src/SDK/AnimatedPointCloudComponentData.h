///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class AnimatedPointCloudAsset;
}

namespace fb {
	class AnimatedPointCloudComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimatedPointCloudComponentData"); }
		virtual ~AnimatedPointCloudComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AnimatedPointCloudComponentData() {
			m_externalTime = -1.f;
			m_startPaused = true;
		};

		CtrRef<AnimatedPointCloudAsset> m_pointCloud; // 0x70 (112)
		float m_externalTime; // 0x78 (120)
		bool m_startPaused; // 0x7C (124)
	}; // 0x80 (128)
}

