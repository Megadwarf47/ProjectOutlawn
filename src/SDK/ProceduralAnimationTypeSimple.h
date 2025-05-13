///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class ProceduralAnimationTypeSimple : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAnimationTypeSimple"); }
		virtual ~ProceduralAnimationTypeSimple() override {}
		ProceduralAnimationTypeSimple() {
			m_bendMultiplier = 0.f;
			m_wiggleSpeedMultiplier = 1.f;
			m_windInfluenceMultiplier = 1.f;
		};

		float m_bendMultiplier; // 0x10 (16)
		float m_wiggleSpeedMultiplier; // 0x14 (20)
		float m_windInfluenceMultiplier; // 0x18 (24)
	}; // 0x20 (32)
}

