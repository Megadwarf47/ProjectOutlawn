///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MixerValueAccumulateMode.h>
#include <fb/Types.h>

namespace fb {
	struct MixerInputInfo {
		MixerInputInfo() {
			m_mode = MixerValueAccumulateMode::MixerValueAccumulateMode_None;
			m_keepValue = false;
		};

		MixerValueAccumulateMode m_mode; // 0x0 (0)
		bool m_keepValue; // 0x4 (4)
	}; // 0x8 (8)
}

