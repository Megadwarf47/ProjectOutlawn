///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AngleUnit.h>
#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/SimpleTransformOperation.h>

namespace fb {
	class SimpleTransformNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleTransformNodeData"); }
		virtual ~SimpleTransformNodeData() override {}
		SimpleTransformNodeData() {
			m_operation = SimpleTransformOperation::SimpleTransformOperation_Multiply;
			m_angleUnit = AngleUnit::AngleUnit_Radians;
		};

		AudioGraphNodePort m_x; // 0x10 (16)
		AudioGraphNodePort m_y; // 0x18 (24)
		AudioGraphNodePort m_z; // 0x20 (32)
		SimpleTransformOperation m_operation; // 0x28 (40)
		AngleUnit m_angleUnit; // 0x2C (44)
	}; // 0x30 (48)
}

