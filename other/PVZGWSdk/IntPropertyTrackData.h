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
	class IntPropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntPropertyTrackData"); }
		virtual ~IntPropertyTrackData() override {}
		IntPropertyTrackData() {
		};

		Array<s32> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

