///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RotationBodyData.h>

namespace fb {
	class ChildRotationBodyData : public RotationBodyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChildRotationBodyData"); }
		virtual ~ChildRotationBodyData() override {}
		ChildRotationBodyData() {
			m_forceModifier = 100000.f;
			m_resetForceModifier = 0.f;
			m_resetForceInputThreshold = 0.f;
			m_rotationInput = -754024050;
			m_worldSpaceLockEfficiency = 0.f;
			m_useLinearInput = false;
		};

		float m_forceModifier; // 0x48 (72)
		float m_resetForceModifier; // 0x4C (76)
		float m_resetForceInputThreshold; // 0x50 (80)
		s32 m_rotationInput; // 0x54 (84)
		float m_worldSpaceLockEfficiency; // 0x58 (88)
		bool m_useLinearInput; // 0x5C (92)
	}; // 0x60 (96)
}

