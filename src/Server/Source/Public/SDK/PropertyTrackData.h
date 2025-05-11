///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>

namespace fb {
	class PropertyTrackData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertyTrackData"); }
		virtual ~PropertyTrackData() override {}
		PropertyTrackData() {
			m_id = 0;
		};

		s32 m_id; // 0x10 (16)
		Array<s32> m_times; // 0x18 (24)
	}; // 0x20 (32)
}

