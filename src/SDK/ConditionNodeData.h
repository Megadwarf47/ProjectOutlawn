///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/RefArray.h>

namespace fb {
	class ConditionGroup;
}

namespace fb {
	class ConditionNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConditionNodeData"); }
		virtual ~ConditionNodeData() override {}
		ConditionNodeData() {
		};

		RefArray<ConditionGroup> m_conditions; // 0x10 (16)
	}; // 0x18 (24)
}

