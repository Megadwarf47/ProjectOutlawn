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
	class CharacterSoundData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterSoundData"); }
		virtual ~CharacterSoundData() override {}
		CharacterSoundData() {
		};

		CtrRef<SoundAsset> m_movement; // 0x10 (16)
	}; // 0x18 (24)
}

