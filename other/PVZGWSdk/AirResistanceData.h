///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class AirResistanceData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AirResistanceData"); }
		virtual ~AirResistanceData() override {}
		AirResistanceData() {
			m_dragFactor = 10.f;
		};

		float m_dragFactor; // 0x28 (40)
	}; // 0x30 (48)
}

