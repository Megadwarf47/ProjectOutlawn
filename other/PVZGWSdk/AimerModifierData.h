///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class AimerModifierData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AimerModifierData"); }
		virtual ~AimerModifierData() override {}
		AimerModifierData() {
			m_lookSpeedMultiplier = 1.f;
			m_onlyInSupportedShooting = true;
		};

		float m_lookSpeedMultiplier; // 0x18 (24)
		bool m_onlyInSupportedShooting; // 0x1C (28)
	}; // 0x20 (32)
}

