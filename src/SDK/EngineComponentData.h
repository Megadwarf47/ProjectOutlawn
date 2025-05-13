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
	class EngineConfigData;
	class SoundAsset;
}

namespace fb {
	class EngineComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EngineComponentData"); }
		virtual ~EngineComponentData() override {}
		EngineComponentData() {
			m_useFirstPersonSounds = false;
		};

		CtrRef<EngineConfigData> m_config; // 0x70 (112)
		CtrRef<SoundAsset> m_soundEffect; // 0x78 (120)
		CtrRef<SoundAsset> m_surfaceSoundEffect; // 0x80 (128)
		bool m_useFirstPersonSounds; // 0x88 (136)
	}; // 0x90 (144)
}

