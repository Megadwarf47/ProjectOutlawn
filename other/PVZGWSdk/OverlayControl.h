///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/MusicSyncType.h>

namespace fb {
	class MusicOverlayData;
}

namespace fb {
	class OverlayControl : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OverlayControl"); }
		virtual ~OverlayControl() override {}
		OverlayControl() {
			m_syncType = MusicSyncType::MusicSyncType_Immediate;
		};

		CtrRef<MusicOverlayData> m_overlay; // 0x10 (16)
		MusicSyncType m_syncType; // 0x18 (24)
	}; // 0x20 (32)
}

