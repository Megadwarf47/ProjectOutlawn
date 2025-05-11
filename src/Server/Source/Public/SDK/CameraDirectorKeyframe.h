///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class CameraDirectorTrackData;
	class CameraTrackBaseData;
}

namespace fb {
	class CameraDirectorKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraDirectorKeyframe"); }
		virtual ~CameraDirectorKeyframe() override {}
		CameraDirectorKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		CtrRef<CameraTrackBaseData> m_cameraTrack; // 0x18 (24)
		CtrRef<CameraDirectorTrackData> m_parentDirectorTrack; // 0x20 (32)
	}; // 0x28 (40)
}

