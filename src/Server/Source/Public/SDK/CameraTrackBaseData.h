///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TimelineTrackData.h>

namespace fb {
	class CameraTrackBaseData : public TimelineTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraTrackBaseData"); }
		virtual ~CameraTrackBaseData() override {}
		CameraTrackBaseData() {
		};

	}; // 0x28 (40)
}

