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
	class Vec3TrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vec3TrackData"); }
		virtual ~Vec3TrackData() override {}
		Vec3TrackData() {
		};

		CtrRef<FloatTrackData> m_x; // 0x30 (48)
		CtrRef<FloatTrackData> m_y; // 0x38 (56)
		CtrRef<FloatTrackData> m_z; // 0x40 (64)
	}; // 0x48 (72)
}

