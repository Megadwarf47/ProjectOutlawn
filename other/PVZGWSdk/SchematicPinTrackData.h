///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TimelineTrackData.h>

namespace fb {
	class SchematicPinTrackData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SchematicPinTrackData"); }
		virtual ~SchematicPinTrackData() override {}
		SchematicPinTrackData() {
			m_sourcePinId = 0;
			m_targetPinId = 0;
		};

		s32 m_sourcePinId; // 0x28 (40)
		s32 m_targetPinId; // 0x2C (44)
	}; // 0x30 (48)
}

