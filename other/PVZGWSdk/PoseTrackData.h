///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ANTLayerData.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class PoseTrackKeyframe;
	class PosesGlobalAsset;
}

namespace fb {
	class PoseTrackData : public ANTLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PoseTrackData"); }
		virtual ~PoseTrackData() override {}
		PoseTrackData() {
		};

		CtrRef<PosesGlobalAsset> m_poses; // 0x30 (48)
		RefArray<PoseTrackKeyframe> m_keyframes; // 0x38 (56)
	}; // 0x40 (64)
}

