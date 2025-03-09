///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CustomSequenceTrackPropertyMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomSequenceTrackPropertyMapping"); }
		virtual ~CustomSequenceTrackPropertyMapping() override {}
		CustomSequenceTrackPropertyMapping() {
			m_trackPropertyID = 0;
			m_sequencePropertyID = 0;
		};

		s32 m_trackPropertyID; // 0x10 (16)
		s32 m_sequencePropertyID; // 0x14 (20)
	}; // 0x18 (24)
}

