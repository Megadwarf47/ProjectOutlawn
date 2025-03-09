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
	class CameraComponentSoundData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraComponentSoundData"); }
		virtual ~CameraComponentSoundData() override {}
		CameraComponentSoundData() {
		};

		CtrRef<SoundAsset> m_switchToAlternateViewSound; // 0x10 (16)
		CtrRef<SoundAsset> m_switchToNormalViewSound; // 0x18 (24)
	}; // 0x20 (32)
}

