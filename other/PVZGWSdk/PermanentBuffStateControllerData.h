///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZBuffStateControllerData.h>

namespace fb {
	class PermanentBuffStateControllerData : public PVZBuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PermanentBuffStateControllerData"); }
		virtual ~PermanentBuffStateControllerData() override {}
		PermanentBuffStateControllerData() {
			m_introTime = 0.f;
			m_introStartPower = 0.f;
			m_introEndPower = 1.f;
			m_normalPower = 1.f;
			m_outroTime = 0.f;
			m_outroStartPower = 1.f;
			m_outroEndPower = 0.f;
		};

		float m_introTime; // 0x20 (32)
		float m_introStartPower; // 0x24 (36)
		float m_introEndPower; // 0x28 (40)
		float m_normalPower; // 0x2C (44)
		float m_outroTime; // 0x30 (48)
		float m_outroStartPower; // 0x34 (52)
		float m_outroEndPower; // 0x38 (56)
	}; // 0x40 (64)
}

