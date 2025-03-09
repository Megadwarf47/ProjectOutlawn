///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class WeaponSuppressionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponSuppressionData"); }
		virtual ~WeaponSuppressionData() override {}
		WeaponSuppressionData() {
			m_maxMultiplier = 10.f;
			m_minMultiplier = 10.f;
			m_minDistance = 12.f;
			m_maxDistance = 50.f;
		};

		float m_maxMultiplier; // 0x10 (16)
		float m_minMultiplier; // 0x14 (20)
		float m_minDistance; // 0x18 (24)
		float m_maxDistance; // 0x1C (28)
	}; // 0x20 (32)
}

