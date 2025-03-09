///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/NumberGeneratorMode.h>
#include <fb/NumberGeneratorNodeVersion.h>

namespace fb {
	class NumberGeneratorNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NumberGeneratorNodeData"); }
		virtual ~NumberGeneratorNodeData() override {}
		NumberGeneratorNodeData() {
			m_min = 0.f;
			m_max = 1.f;
			m_mode = NumberGeneratorMode::NumberGeneratorMode_RandomUniform;
			m_version = NumberGeneratorNodeVersion::NumberGeneratorNodeVersion_2013_1;
		};

		AudioGraphNodePort m_trigger; // 0x10 (16)
		float m_min; // 0x18 (24)
		float m_max; // 0x1C (28)
		NumberGeneratorMode m_mode; // 0x20 (32)
		AudioGraphNodePort m_y; // 0x24 (36)
		NumberGeneratorNodeVersion m_version; // 0x2C (44)
	}; // 0x30 (48)
}

