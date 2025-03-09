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
	class BoolPropertyTrackData : public SimplePropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolPropertyTrackData"); }
		virtual ~BoolPropertyTrackData() override {}
		BoolPropertyTrackData() {
		};

		Array<bool> m_values; // 0x28 (40)
	}; // 0x30 (48)
}

