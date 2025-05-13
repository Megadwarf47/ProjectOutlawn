///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIInterruptID.h>

namespace fb {
	class UIGraphAsset;
}

namespace fb {
	struct InterruptFlow {
		InterruptFlow() {
			m_interruptEnum = UIInterruptID::UIInterruptID_None;
		};

		UIInterruptID m_interruptEnum; // 0x0 (0)
		CtrRef<UIGraphAsset> m_interruptFlow; // 0x8 (8)
	}; // 0x10 (16)
}

