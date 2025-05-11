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
	class MaterialSoldierSoundSettings;
	class SoundAsset;
}

namespace fb {
	class MaterialPropertySoundData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertySoundData"); }
		virtual ~MaterialPropertySoundData() override {}
		MaterialPropertySoundData() {
			m_scrapeLength = 1.f;
			m_softness = 0.f;
			m_materialSoundId = -1.f;
		};

		CtrRef<SoundAsset> m_impactSound; // 0x10 (16)
		CtrRef<SoundAsset> m_scrapeSound; // 0x18 (24)
		float m_scrapeLength; // 0x20 (32)
		CtrRef<MaterialSoldierSoundSettings> m_soldierSettings; // 0x28 (40)
		float m_softness; // 0x30 (48)
		float m_materialSoundId; // 0x34 (52)
	}; // 0x38 (56)
}

