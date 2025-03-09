///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityTrackData.h>
#include <fb/String.h>

namespace fb {
	class ANTCameraTrackData : public EntityTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTCameraTrackData"); }
		virtual ~ANTCameraTrackData() override {}
		ANTCameraTrackData() {
		};

		String m_transformBoneName; // 0x40 (64)
		String m_fovBoneName; // 0x48 (72)
		String m_dofBoneName; // 0x50 (80)
	}; // 0x58 (88)
}

