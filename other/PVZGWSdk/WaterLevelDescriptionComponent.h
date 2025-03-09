///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevelDescriptionComponent.h>
#include <fb/PlatformScalableInt.h>

namespace fb {
	class WaterLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterLevelDescriptionComponent"); }
		virtual ~WaterLevelDescriptionComponent() override {}
		WaterLevelDescriptionComponent() {
			m_maxSimulationCount = PlatformScalableInt(2, 2, 2, 2, 2);
			m_maxVisibleWaterSurfaceCount = PlatformScalableInt(2, 1, 1, 2, 2);
			m_renderGridWidth = PlatformScalableInt(256, 256, 256, 256, 256);
			m_renderGridHeight = PlatformScalableInt(128, 128, 128, 128, 128);
			m_minAmbientSimulationResolution = PlatformScalableInt(32, 32, 32, 32, 32);
			m_maxAmbientSimulationResolution = PlatformScalableInt(128, 64, 64, 128, 128);
			m_enabled = true;
		};

		PlatformScalableInt m_maxSimulationCount; // 0x10 (16)
		PlatformScalableInt m_maxVisibleWaterSurfaceCount; // 0x24 (36)
		PlatformScalableInt m_renderGridWidth; // 0x38 (56)
		PlatformScalableInt m_renderGridHeight; // 0x4C (76)
		PlatformScalableInt m_minAmbientSimulationResolution; // 0x60 (96)
		PlatformScalableInt m_maxAmbientSimulationResolution; // 0x74 (116)
		bool m_enabled; // 0x88 (136)
	}; // 0x90 (144)
}

