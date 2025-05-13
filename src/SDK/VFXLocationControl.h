///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinearTransform.h>
#include <fb/Types.h>

namespace fb {
	struct VFXLocationControl {
		VFXLocationControl() {
			m_attachment = 0;
			m_stayAttached = true;
			m_preserveOrientation = false;
			m_offsetFromCharacterForward = false;
		};

		LinearTransform m_offset; // 0x0 (0)
		s32 m_attachment; // 0x40 (64)
		bool m_stayAttached; // 0x44 (68)
		bool m_preserveOrientation; // 0x45 (69)
		bool m_offsetFromCharacterForward; // 0x46 (70)
	}; // 0x50 (80)
}

