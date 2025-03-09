///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MusicStreamableData.h>

namespace fb {
	class SoundWaveAsset;
}

namespace fb {
	class MusicSegmentData : public MusicStreamableData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicSegmentData"); }
		virtual ~MusicSegmentData() override {}
		MusicSegmentData() {
		};

		CtrRef<SoundWaveAsset> m_wave; // 0x50 (80)
	}; // 0x58 (88)
}

