///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/FOVTransitionType.h>

namespace fb {
	class FOVTransitionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FOVTransitionData"); }
		virtual ~FOVTransitionData() override {}
		FOVTransitionData() {
			m_transitionType = FOVTransitionType::FOVTransitionType_Smooth;
			m_shape = 2.f;
			m_startDelay = 0.f;
			m_startJump = 0.f;
			m_endEarly = 0.f;
			m_invert = false;
		};

		FOVTransitionType m_transitionType; // 0x10 (16)
		float m_shape; // 0x14 (20)
		float m_startDelay; // 0x18 (24)
		float m_startJump; // 0x1C (28)
		float m_endEarly; // 0x20 (32)
		bool m_invert; // 0x24 (36)
	}; // 0x28 (40)
}

