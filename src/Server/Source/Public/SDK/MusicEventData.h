///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MusicInputData.h>

namespace fb {
	class MusicEventData : public MusicInputData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicEventData"); }
		virtual ~MusicEventData() override {}
		MusicEventData() {
		};

	}; // 0x20 (32)
}

