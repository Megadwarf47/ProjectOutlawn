///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/WarningPlayerType.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class WarningSystemComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WarningSystemComponentData"); }
		virtual ~WarningSystemComponentData() override {}
		WarningSystemComponentData() {
			m_playerType = WarningPlayerType::WPTInflictor;
		};

		CtrRef<SoundAsset> m_aimWarnSoundEffect; // 0x70 (112)
		CtrRef<SoundAsset> m_missileWarnSoundEffect; // 0x78 (120)
		CtrRef<SoundAsset> m_lowHealthWarnSoundEffect; // 0x80 (128)
		CtrRef<SoundAsset> m_lockingWarnSoundEffect; // 0x88 (136)
		CtrRef<SoundAsset> m_lockedWarnSoundEffect; // 0x90 (144)
		WarningPlayerType m_playerType; // 0x98 (152)
	}; // 0xA0 (160)
}

