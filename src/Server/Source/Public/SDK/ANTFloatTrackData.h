///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/FloatTrackData.h>

namespace fb {
	class ANTFloatTrackData : public FloatTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTFloatTrackData"); }
		virtual ~ANTFloatTrackData() override {}
		ANTFloatTrackData() {
			m_resetValue = 0.f;
			m_resetOnLeave = true;
		};

		AntRef m_signal; // 0x38 (56)
		float m_resetValue; // 0x4C (76)
		bool m_resetOnLeave; // 0x50 (80)
	}; // 0x58 (88)
}

