///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SimplePropertyTrackData.h>
#include <fb/Vec4.h>

namespace fb {
	class Vec4PropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vec4PropertyTrackData"); }
		virtual ~Vec4PropertyTrackData() override {}
		Vec4PropertyTrackData() {
		};

		Array<Vec4> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

