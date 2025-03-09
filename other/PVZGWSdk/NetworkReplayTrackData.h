///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RecordTrackBaseData.h>
#include <fb/RefArray.h>

namespace fb {
	class NetworkReplayKeyframe;
}

namespace fb {
	class NetworkReplayTrackData : public RecordTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkReplayTrackData"); }
		virtual ~NetworkReplayTrackData() override {}
		NetworkReplayTrackData() {
		};

		RefArray<NetworkReplayKeyframe> m_keyframes; // 0x38 (56)
	}; // 0x40 (64)
}

