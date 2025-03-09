///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsPropertyRelationPropertyData.h>

namespace fb {
	class MaterialRelationTerrainDestructionData : public PhysicsPropertyRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationTerrainDestructionData"); }
		virtual ~MaterialRelationTerrainDestructionData() override {}
		MaterialRelationTerrainDestructionData() {
			m_width = 2.f;
			m_relativeWidthDeviation = 0.2f;
			m_depth = 0.5f;
			m_relativeDepthDeviation = 0.2f;
		};

		float m_width; // 0x10 (16)
		float m_relativeWidthDeviation; // 0x14 (20)
		float m_depth; // 0x18 (24)
		float m_relativeDepthDeviation; // 0x1C (28)
	}; // 0x20 (32)
}

