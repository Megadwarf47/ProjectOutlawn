///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AudioGuideKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGuideKeyframe"); }
		virtual ~AudioGuideKeyframe() override {}
		AudioGuideKeyframe() {
			m_time = 0.f;
		};

		float m_time; // 0x10 (16)
	}; // 0x18 (24)
}

