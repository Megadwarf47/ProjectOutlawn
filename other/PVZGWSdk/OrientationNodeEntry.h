///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/CtrRef.h>

namespace fb {
	class OutputNodeData;
}

namespace fb {
	class OrientationNodeEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OrientationNodeEntry"); }
		virtual ~OrientationNodeEntry() override {}
		OrientationNodeEntry() {
		};

		AudioGraphNodePort m_listenerRelativeYaw; // 0x10 (16)
		AudioGraphNodePort m_listenerRelativePitch; // 0x18 (24)
		AudioGraphNodePort m_listenerRelativeRoll; // 0x20 (32)
		AudioGraphNodePort m_listenerRelativeAngle; // 0x28 (40)
		AudioGraphNodePort m_listenerFovRelativeAngle; // 0x30 (48)
		AudioGraphNodePort m_towardsListenerAngle; // 0x38 (56)
		CtrRef<OutputNodeData> m_output; // 0x40 (64)
	}; // 0x48 (72)
}

