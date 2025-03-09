///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SimplePropertyTrackData.h>

namespace fb {
	class FloatPropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatPropertyTrackData"); }
		virtual ~FloatPropertyTrackData() override {}
		FloatPropertyTrackData() {
		};

		Array<float> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

