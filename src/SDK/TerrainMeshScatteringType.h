///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityScalableFloat.h>
#include <fb/Vec2.h>

namespace fb {
	class TerrainMeshScatteringType : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainMeshScatteringType"); }
		virtual ~TerrainMeshScatteringType() override {}
		TerrainMeshScatteringType() {
			m_identifier = 9999999;
			m_minScale = Vec2(1.f, 1.f);
			m_maxScale = Vec2(1.f, 1.f);
			m_scaleRandomness = 1.f;
			m_density = QualityScalableFloat(1.f, 1.f, 1.f, 1.f);
			m_firstSpawnLevel = 0;
			m_windScale = 0.f;
			m_stiffness = 8.f;
			m_damping = 1.6f;
			m_mass = 4.f;
			m_windWiggle = 1.f;
		};

		u32 m_identifier; // 0x10 (16)
		Vec2 m_minScale; // 0x14 (20)
		Vec2 m_maxScale; // 0x1C (28)
		float m_scaleRandomness; // 0x24 (36)
		QualityScalableFloat m_density; // 0x28 (40)
		u32 m_firstSpawnLevel; // 0x38 (56)
		float m_windScale; // 0x3C (60)
		float m_stiffness; // 0x40 (64)
		float m_damping; // 0x44 (68)
		float m_mass; // 0x48 (72)
		float m_windWiggle; // 0x4C (76)
	}; // 0x50 (80)
}

