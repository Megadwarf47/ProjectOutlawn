///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CustomSequenceTrackData.h>
#include <fb/RefArray.h>

namespace fb {
	class AntTrackItemData;
}

namespace fb {
	class AntTrackData : public CustomSequenceTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntTrackData"); }
		virtual ~AntTrackData() override {}
		AntTrackData() {
		};

		RefArray<AntTrackItemData> m_antTrackItemDatas; // 0x50 (80)
	}; // 0x58 (88)
}

