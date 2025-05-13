///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class CautionTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CautionTune"); }
		virtual ~CautionTune() override {}
		CautionTune() {
			m_speedX = 1.f;
			m_tightTurnDegrees = 90.f;
		};

		float m_speedX; // 0x18 (24)
		float m_tightTurnDegrees; // 0x1C (28)
	}; // 0x20 (32)
}

