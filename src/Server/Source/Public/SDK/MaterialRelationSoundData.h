///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class AudioGraphEvent;
	class SoundAsset;
}

namespace fb {
	class MaterialRelationSoundData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationSoundData"); }
		virtual ~MaterialRelationSoundData() override {}
		MaterialRelationSoundData() {
			m_scrapeLength = 1.f;
		};

		CtrRef<SoundAsset> m_impactSound; // 0x10 (16)
		CtrRef<AudioGraphEvent> m_impactSoundEvent; // 0x18 (24)
		CtrRef<SoundAsset> m_scrapeSound; // 0x20 (32)
		float m_scrapeLength; // 0x28 (40)
	}; // 0x30 (48)
}

