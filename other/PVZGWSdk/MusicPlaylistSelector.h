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
	class MusicAsset;
	class MusicEventData;
}

namespace fb {
	class MusicPlaylistSelector : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPlaylistSelector"); }
		virtual ~MusicPlaylistSelector() override {}
		MusicPlaylistSelector() {
		};

		CtrRef<MusicEventData> m_event; // 0x10 (16)
		CtrRef<MusicAsset> m_asset; // 0x18 (24)
	}; // 0x20 (32)
}

