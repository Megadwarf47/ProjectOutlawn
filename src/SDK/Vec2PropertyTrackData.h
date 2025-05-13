///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SimplePropertyTrackData.h>
#include <fb/Vec2.h>

namespace fb {
	class Vec2PropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vec2PropertyTrackData"); }
		virtual ~Vec2PropertyTrackData() override {}
		Vec2PropertyTrackData() {
		};

		Array<Vec2> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

