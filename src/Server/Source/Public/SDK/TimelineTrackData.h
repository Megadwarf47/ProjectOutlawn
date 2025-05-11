///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameObjectData.h>
#include <fb/RefArray.h>

namespace fb {
	class TimelineTrackDataConditionsBase;
}

namespace fb {
	class TimelineTrackData : public GameObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimelineTrackData"); }
		virtual ~TimelineTrackData() override {}
		TimelineTrackData() {
			m_exposePins = false;
			m_isDisabled = false;
			m_dependsOnAnimation = false;
		};

		RefArray<TimelineTrackDataConditionsBase> m_conditions; // 0x18 (24)
		bool m_exposePins; // 0x20 (32)
		bool m_isDisabled; // 0x21 (33)
		bool m_dependsOnAnimation; // 0x22 (34)
	}; // 0x28 (40)
}

