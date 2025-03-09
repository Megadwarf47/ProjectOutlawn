///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class WaterInteractWaveEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterInteractWaveEntityData"); }
		virtual ~WaterInteractWaveEntityData() override {}
		WaterInteractWaveEntityData() {
			m_radius = 1.f;
			m_amplitude = 1.f;
		};

		float m_radius; // 0x60 (96)
		float m_amplitude; // 0x64 (100)
	}; // 0x70 (112)
}

