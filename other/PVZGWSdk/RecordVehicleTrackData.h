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
	class RecordTrackChildrenData;
}

namespace fb {
	class RecordVehicleTrackData : public RecordTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RecordVehicleTrackData"); }
		virtual ~RecordVehicleTrackData() override {}
		RecordVehicleTrackData() {
		};

		RefArray<RecordTrackChildrenData> m_childrenTracks; // 0x38 (56)
	}; // 0x40 (64)
}

