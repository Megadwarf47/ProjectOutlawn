///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UILogicOperator.h>
#include <fb/UINodeData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class OperandLogicNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OperandLogicNode"); }
		virtual ~OperandLogicNode() override {}
		OperandLogicNode() {
			m_operator = UILogicOperator::UILogicOperator_None;
			m_rightLiteralOperand = 0.0;
		};

		UISimpleDataSource m_leftDataSourceInfo; // 0x28 (40)
		UILogicOperator m_operator; // 0x38 (56)
		UISimpleDataSource m_rightDataSourceInfo; // 0x40 (64)
		double m_rightLiteralOperand; // 0x50 (80)
		CtrRef<UINodePort> m_in; // 0x58 (88)
		CtrRef<UINodePort> m_true; // 0x60 (96)
		CtrRef<UINodePort> m_false; // 0x68 (104)
	}; // 0x70 (112)
}

