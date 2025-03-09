///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/IntTrackData.h>

namespace fb {
	class ANTIntTrackData : public IntTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTIntTrackData"); }
		virtual ~ANTIntTrackData() override {}
		ANTIntTrackData() {
			m_resetValue = 0;
			m_resetOnLeave = true;
		};

		AntRef m_signal; // 0x38 (56)
		s32 m_resetValue; // 0x4C (76)
		bool m_resetOnLeave; // 0x50 (80)
	}; // 0x58 (88)
}

