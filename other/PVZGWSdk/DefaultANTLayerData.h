///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ANTLayerData.h>
#include <fb/AntRef.h>
#include <fb/CtrRef.h>

namespace fb {
	class ANTBlendKeyframeTrackData;
	class ANTClipKeyframeTrackData;
}

namespace fb {
	class DefaultANTLayerData : public ANTLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DefaultANTLayerData"); }
		virtual ~DefaultANTLayerData() override {}
		DefaultANTLayerData() {
		};

		AntRef m_blendMaskList; // 0x30 (48)
		CtrRef<ANTClipKeyframeTrackData> m_clipTrack; // 0x48 (72)
		CtrRef<ANTBlendKeyframeTrackData> m_blendTrack; // 0x50 (80)
	}; // 0x58 (88)
}

