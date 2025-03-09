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
	class VoiceOverDialogGroup : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDialogGroup"); }
		virtual ~VoiceOverDialogGroup() override {}
		VoiceOverDialogGroup() {
			m_trackCount = 0;
		};

		CtrRef<SoundAsset> m_sound; // 0x10 (16)
		u8 m_trackCount; // 0x18 (24)
	}; // 0x20 (32)
}

