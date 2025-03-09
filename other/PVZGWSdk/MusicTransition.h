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
	class MusicFadeData;
	class MusicStreamableData;
	class OverlayControl;
}

namespace fb {
	class MusicTransition : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicTransition"); }
		virtual ~MusicTransition() override {}
		MusicTransition() {
		};

		CtrRef<MusicStreamableData> m_source; // 0x10 (16)
		CtrRef<MusicStreamableData> m_destination; // 0x18 (24)
		CtrRef<MusicFadeData> m_fade; // 0x20 (32)
		CtrRef<OverlayControl> m_overlayControl; // 0x28 (40)
	}; // 0x30 (48)
}

