///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/WheelComponentData.h>

namespace fb {
	class TrackWheelComponentData : public WheelComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrackWheelComponentData"); }
		virtual ~TrackWheelComponentData() override {}
		TrackWheelComponentData() {
		};

		String m_boneName; // 0x80 (128)
	}; // 0x90 (144)
}

