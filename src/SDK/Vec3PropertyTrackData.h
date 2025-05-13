///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SimplePropertyTrackData.h>
#include <fb/Vec3.h>

namespace fb {
	class Vec3PropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vec3PropertyTrackData"); }
		virtual ~Vec3PropertyTrackData() override {}
		Vec3PropertyTrackData() {
		};

		Array<Vec3> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

