///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class FloatPropertyTrackData;
}

namespace fb {
	struct InputRecorderTrackData {
		InputRecorderTrackData() {
			m_inputAction = -1341426433;
		};

		String m_name; // 0x0 (0)
		s32 m_inputAction; // 0x8 (8)
		CtrRef<FloatPropertyTrackData> m_propertyTrack; // 0x10 (16)
	}; // 0x18 (24)
}

