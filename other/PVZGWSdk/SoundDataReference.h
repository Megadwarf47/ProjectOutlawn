///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class DataContainer;
	class SoundDataAsset;
}

namespace fb {
	struct SoundDataReference {
		SoundDataReference() {
		};

		CtrRef<DataContainer> m_dataOwner; // 0x0 (0)
		CtrRef<SoundDataAsset> m_soundData; // 0x8 (8)
	}; // 0x10 (16)
}

