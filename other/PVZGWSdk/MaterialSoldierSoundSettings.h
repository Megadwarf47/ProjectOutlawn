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
	class MaterialSoldierSoundSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialSoldierSoundSettings"); }
		virtual ~MaterialSoldierSoundSettings() override {}
		MaterialSoldierSoundSettings() {
		};

		CtrRef<SoundAsset> m_footStepSound; // 0x10 (16)
		CtrRef<SoundAsset> m_proneSound; // 0x18 (24)
		CtrRef<SoundAsset> m_landSound; // 0x20 (32)
	}; // 0x28 (40)
}

