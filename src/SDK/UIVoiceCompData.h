///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIVoiceCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVoiceCompData"); }
		virtual ~UIVoiceCompData() override {}
		UIVoiceCompData() {
			m_hudMaxSpeakers = 3;
		};

		u32 m_hudMaxSpeakers; // 0x30 (48)
	}; // 0x38 (56)
}

