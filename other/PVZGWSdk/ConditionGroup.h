///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/ConditionType.h>

namespace fb {
	class ConditionGroup : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConditionGroup"); }
		virtual ~ConditionGroup() override {}
		ConditionGroup() {
			m_condition = ConditionType::ConditionType_GreaterOrEqual;
		};

		AudioGraphNodePort m_x; // 0x10 (16)
		AudioGraphNodePort m_y; // 0x18 (24)
		AudioGraphNodePort m_true; // 0x20 (32)
		ConditionType m_condition; // 0x28 (40)
	}; // 0x30 (48)
}

