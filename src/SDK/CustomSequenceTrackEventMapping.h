///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CustomSequenceTrackEventMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomSequenceTrackEventMapping"); }
		virtual ~CustomSequenceTrackEventMapping() override {}
		CustomSequenceTrackEventMapping() {
			m_trackEventID = 0;
			m_sequenceEventID = 0;
		};

		s32 m_trackEventID; // 0x10 (16)
		s32 m_sequenceEventID; // 0x14 (20)
	}; // 0x18 (24)
}

