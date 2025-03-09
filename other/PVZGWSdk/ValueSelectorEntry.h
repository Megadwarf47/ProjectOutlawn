///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>

namespace fb {
	class ValueSelectorEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ValueSelectorEntry"); }
		virtual ~ValueSelectorEntry() override {}
		ValueSelectorEntry() {
			m_caseValue = 0.f;
		};

		AudioGraphNodePort m_input; // 0x10 (16)
		float m_caseValue; // 0x18 (24)
	}; // 0x20 (32)
}

