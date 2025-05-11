///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/BoolTrackData.h>

namespace fb {
	class ANTBoolTrackData : public BoolTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTBoolTrackData"); }
		virtual ~ANTBoolTrackData() override {}
		ANTBoolTrackData() {
			m_resetOnLeave = true;
			m_resetValue = false;
		};

		AntRef m_signal; // 0x38 (56)
		bool m_resetOnLeave; // 0x4C (76)
		bool m_resetValue; // 0x4D (77)
	}; // 0x50 (80)
}

