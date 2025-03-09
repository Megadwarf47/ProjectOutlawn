///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class TerrainSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainSettings"); }
		virtual ~TerrainSettings() override {}
		TerrainSettings() {
			m_heightQueryCacheSize = 16;
			m_modifiersCapacity = 5000;
			m_intersectingModifiersMax = 16;
			m_modifierSlopeMax = 0.46f;
			m_modifierDepthFactor = 1.f;
			m_modifiersAppliedPerFrameMax = 8;
			m_modifiersEnable = true;
		};

		u32 m_heightQueryCacheSize; // 0x10 (16)
		u32 m_modifiersCapacity; // 0x14 (20)
		u32 m_intersectingModifiersMax; // 0x18 (24)
		float m_modifierSlopeMax; // 0x1C (28)
		float m_modifierDepthFactor; // 0x20 (32)
		u32 m_modifiersAppliedPerFrameMax; // 0x24 (36)
		bool m_modifiersEnable; // 0x28 (40)
	}; // 0x30 (48)
}

