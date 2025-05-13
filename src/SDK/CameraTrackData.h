///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraTrackBaseData.h>
#include <fb/CtrRef.h>

namespace fb {
	class FloatTrackData;
	class LayeredTransformTrackData;
}

namespace fb {
	class CameraTrackData : public CameraTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraTrackData"); }
		virtual ~CameraTrackData() override {}
		CameraTrackData() {
		};

		CtrRef<LayeredTransformTrackData> m_layeredTransformTrack; // 0x28 (40)
		CtrRef<FloatTrackData> m_fovTrack; // 0x30 (48)
	}; // 0x38 (56)
}

