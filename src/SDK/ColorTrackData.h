///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ColorKeyframe.h>
#include <fb/PropertyTrackBaseData.h>

namespace fb {
	class ColorTrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ColorTrackData"); }
		virtual ~ColorTrackData() override {}
		ColorTrackData() {
		};

		Array<ColorKeyframe> m_keyframes; // 0x30 (48)
	}; // 0x38 (56)
}

