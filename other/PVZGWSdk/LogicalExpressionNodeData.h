///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/LogicalExpressionOperator.h>
#include <fb/RefArray.h>

namespace fb {
	class LogicalExpressionEntry;
}

namespace fb {
	class LogicalExpressionNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LogicalExpressionNodeData"); }
		virtual ~LogicalExpressionNodeData() override {}
		LogicalExpressionNodeData() {
			m_operator = LogicalExpressionOperator::LogicalExpressionOperator_And;
		};

		RefArray<LogicalExpressionEntry> m_inputs; // 0x10 (16)
		AudioGraphNodePort m_trigger; // 0x18 (24)
		LogicalExpressionOperator m_operator; // 0x20 (32)
	}; // 0x28 (40)
}

