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
	class SoundAsset;
}

namespace fb {
	class RadioComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadioComponentData"); }
		virtual ~RadioComponentData() override {}
		RadioComponentData() {
		};

		CtrRef<SoundAsset> m_soundEffect; // 0x70 (112)
	}; // 0x80 (128)
}

