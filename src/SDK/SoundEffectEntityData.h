///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EffectEntityData.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class SoundEffectEntityData : public EffectEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundEffectEntityData"); }
		virtual ~SoundEffectEntityData() override {}
		SoundEffectEntityData() {
		};

		CtrRef<SoundAsset> m_sound; // 0xA0 (160)
	}; // 0xB0 (176)
}

