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
	class FollowEnvelopeNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FollowEnvelopeNodeData"); }
		virtual ~FollowEnvelopeNodeData() override {}
		FollowEnvelopeNodeData() {
			m_base = 1.f;
			m_scale = 1.f;
			m_pivot = 1.f;
		};

		AudioGraphNodePort m_x; // 0x10 (16)
		AudioGraphNodePort m_y; // 0x18 (24)
		float m_base; // 0x20 (32)
		float m_scale; // 0x24 (36)
		float m_pivot; // 0x28 (40)
	}; // 0x30 (48)
}

