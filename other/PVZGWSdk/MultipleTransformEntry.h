///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AngleUnit.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/SimpleTransformOperation.h>

namespace fb {
	class MultipleTransformEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultipleTransformEntry"); }
		virtual ~MultipleTransformEntry() override {}
		MultipleTransformEntry() {
			m_operation = SimpleTransformOperation::SimpleTransformOperation_Multiply;
			m_angleUnit = AngleUnit::AngleUnit_Radians;
		};

		AudioGraphNodePort m_y; // 0x10 (16)
		AudioGraphNodePort m_z; // 0x18 (24)
		SimpleTransformOperation m_operation; // 0x20 (32)
		AngleUnit m_angleUnit; // 0x24 (36)
	}; // 0x28 (40)
}

