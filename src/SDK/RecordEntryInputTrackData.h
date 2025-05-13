///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RecordTrackChildrenData.h>

namespace fb {
	class FloatTrackData;
}

namespace fb {
	class RecordEntryInputTrackData : public RecordTrackChildrenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordEntryInputTrackData"); }
		virtual ~RecordEntryInputTrackData() override {}
		RecordEntryInputTrackData() {
			m_entryId = 0;
		};

		u32 m_entryId; // 0x38 (56)
		CtrRef<FloatTrackData> m_fireInput; // 0x40 (64)
		CtrRef<FloatTrackData> m_pitchInput; // 0x48 (72)
		CtrRef<FloatTrackData> m_yawInput; // 0x50 (80)
		CtrRef<FloatTrackData> m_rollInput; // 0x58 (88)
		CtrRef<FloatTrackData> m_throttleInput; // 0x60 (96)
		CtrRef<FloatTrackData> m_digitalBitFlagsInput; // 0x68 (104)
		CtrRef<FloatTrackData> m_aimingYaw; // 0x70 (112)
		CtrRef<FloatTrackData> m_aimingPitch; // 0x78 (120)
	}; // 0x80 (128)
}

