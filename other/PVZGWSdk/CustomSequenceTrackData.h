///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class CustomSequenceTrackEventMapping;
	class CustomSequenceTrackLinkMapping;
	class CustomSequenceTrackPropertyMapping;
}

namespace fb {
	class CustomSequenceTrackData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomSequenceTrackData"); }
		virtual ~CustomSequenceTrackData() override {}
		CustomSequenceTrackData() {
		};

		String m_trackName; // 0x18 (24)
		RefArray<CustomSequenceTrackLinkMapping> m_inputLinkMap; // 0x20 (32)
		RefArray<CustomSequenceTrackLinkMapping> m_outputLinkMap; // 0x28 (40)
		RefArray<CustomSequenceTrackEventMapping> m_eventMap; // 0x30 (48)
		RefArray<CustomSequenceTrackPropertyMapping> m_sourcePropertyMap; // 0x38 (56)
		RefArray<CustomSequenceTrackPropertyMapping> m_targetPropertyMap; // 0x40 (64)
		RefArray<CustomSequenceTrackPropertyMapping> m_sourceAndTargetPropertyMap; // 0x48 (72)
	}; // 0x50 (80)
}

