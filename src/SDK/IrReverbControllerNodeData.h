///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class IrReverbControllerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IrReverbControllerNodeData"); }
		virtual ~IrReverbControllerNodeData() override {}
		IrReverbControllerNodeData() {
			m_normalizeGain = false;
		};

		AudioGraphNodePort m_reverb0; // 0x10 (16)
		AudioGraphNodePort m_amplitude0; // 0x18 (24)
		AudioGraphNodePort m_reverb1; // 0x20 (32)
		AudioGraphNodePort m_amplitude1; // 0x28 (40)
		bool m_normalizeGain; // 0x30 (48)
	}; // 0x38 (56)
}

