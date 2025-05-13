///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalWindForceEntityBaseData.h>

namespace fb {
	class LocalWindForceConeEntityData : public LocalWindForceEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceConeEntityData"); }
		virtual ~LocalWindForceConeEntityData() override {}
		LocalWindForceConeEntityData() {
			m_innerRadius = 0.f;
			m_outerRadius = 6.f;
			m_coneInnerAngle = 40.f;
			m_coneOuterAngle = 60.f;
		};

		float m_innerRadius; // 0x80 (128)
		float m_outerRadius; // 0x84 (132)
		float m_coneInnerAngle; // 0x88 (136)
		float m_coneOuterAngle; // 0x8C (140)
	}; // 0x90 (144)
}

