///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class AntiRollBar;
}

namespace fb {
	struct AntiRollBars {
		AntiRollBars() {
		};

		CtrRef<AntiRollBar> m_front; // 0x0 (0)
		CtrRef<AntiRollBar> m_rear; // 0x8 (8)
	}; // 0x10 (16)
}

