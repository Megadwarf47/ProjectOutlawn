///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class BigWorldSetting : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BigWorldSetting"); }
		virtual ~BigWorldSetting() override {}
		BigWorldSetting() {
			m_minDistance = 50;
			m_maxDistance = 150;
			m_minDelayTimeInMinutes = 1.f;
			m_maxDelayTimeInMinutes = 5.f;
		};

		CtrRef<SoundAsset> m_sound; // 0x10 (16)
		s32 m_minDistance; // 0x18 (24)
		s32 m_maxDistance; // 0x1C (28)
		float m_minDelayTimeInMinutes; // 0x20 (32)
		float m_maxDelayTimeInMinutes; // 0x24 (36)
	}; // 0x28 (40)
}

