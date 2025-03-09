///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class AntTrackItemData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntTrackItemData"); }
		virtual ~AntTrackItemData() override {}
		AntTrackItemData() {
			m_sequenceTrackIndex = -1;
			m_startTime = 0;
			m_numTicks = 0;
			m_resumeAtEnd = true;
		};

		AntRef m_controller; // 0x10 (16)
		s32 m_sequenceTrackIndex; // 0x24 (36)
		s32 m_startTime; // 0x28 (40)
		u32 m_numTicks; // 0x2C (44)
		bool m_resumeAtEnd; // 0x30 (48)
	}; // 0x38 (56)
}

