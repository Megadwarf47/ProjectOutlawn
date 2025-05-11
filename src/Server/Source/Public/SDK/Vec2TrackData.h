///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PropertyTrackBaseData.h>

namespace fb {
	class FloatTrackData;
}

namespace fb {
	class Vec2TrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vec2TrackData"); }
		virtual ~Vec2TrackData() override {}
		Vec2TrackData() {
		};

		CtrRef<FloatTrackData> m_x; // 0x30 (48)
		CtrRef<FloatTrackData> m_y; // 0x38 (56)
	}; // 0x40 (64)
}

