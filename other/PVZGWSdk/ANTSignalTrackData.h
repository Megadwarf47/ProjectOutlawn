///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinkTrackData.h>
#include <fb/RefArray.h>

namespace fb {
	class PropertyTrackBaseData;
}

namespace fb {
	class ANTSignalTrackData : public LinkTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ANTSignalTrackData"); }
		virtual ~ANTSignalTrackData() override {}
		ANTSignalTrackData() {
		};

		RefArray<PropertyTrackBaseData> m_signalTracks; // 0x30 (48)
	}; // 0x38 (56)
}

