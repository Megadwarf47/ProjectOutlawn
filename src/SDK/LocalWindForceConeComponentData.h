///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalWindForceComponentBaseData.h>

namespace fb {
	class LocalWindForceConeComponentData : public LocalWindForceComponentBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceConeComponentData"); }
		virtual ~LocalWindForceConeComponentData() override {}
		LocalWindForceConeComponentData() {
			m_innerRadius = 0.f;
			m_outerRadius = 6.f;
			m_coneInnerAngle = 40.f;
			m_coneOuterAngle = 60.f;
		};

		float m_innerRadius; // 0x90 (144)
		float m_outerRadius; // 0x94 (148)
		float m_coneInnerAngle; // 0x98 (152)
		float m_coneOuterAngle; // 0x9C (156)
	}; // 0xA0 (160)
}

