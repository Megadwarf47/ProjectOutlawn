///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/ParameterFilterLinearNodeVersion.h>

namespace fb {
	class ParameterFilterLinearNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ParameterFilterLinearNodeData"); }
		virtual ~ParameterFilterLinearNodeData() override {}
		ParameterFilterLinearNodeData() {
			m_version = ParameterFilterLinearNodeVersion::ParameterFilterLinearNodeVersion_2010_2;
			m_defaultOutputValue = 0.f;
			m_keepActive = false;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_out; // 0x18 (24)
		AudioGraphNodePort m_attackSpeed; // 0x20 (32)
		AudioGraphNodePort m_releaseSpeed; // 0x28 (40)
		ParameterFilterLinearNodeVersion m_version; // 0x30 (48)
		float m_defaultOutputValue; // 0x34 (52)
		bool m_keepActive; // 0x38 (56)
	}; // 0x40 (64)
}

