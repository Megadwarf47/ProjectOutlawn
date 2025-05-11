///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BoolKeyframe.h>
#include <fb/PropertyTrackBaseData.h>

namespace fb {
	class BoolTrackData : public PropertyTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolTrackData"); }
		virtual ~BoolTrackData() override {}
		BoolTrackData() {
		};

		Array<BoolKeyframe> m_keyframes; // 0x30 (48)
	}; // 0x38 (56)
}

