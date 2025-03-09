///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class MissionObjectiveHudData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MissionObjectiveHudData"); }
		virtual ~MissionObjectiveHudData() override {}
		MissionObjectiveHudData() {
			m_cameraRotation = 0.f;
			m_cameraFov = 45.f;
			m_cameraDistance = 1000.f;
			m_cameraLookDistance = 150.f;
			m_verticalBoundaries = Vec2(-300.f, 300.f);
			m_horizontalBoundaries = Vec2(-300.f, 300.f);
		};

		float m_cameraRotation; // 0x10 (16)
		float m_cameraFov; // 0x14 (20)
		Vec3 m_cameraPosition; // 0x20 (32)
		float m_cameraDistance; // 0x30 (48)
		float m_cameraLookDistance; // 0x34 (52)
		Vec2 m_verticalBoundaries; // 0x38 (56)
		Vec2 m_horizontalBoundaries; // 0x40 (64)
	}; // 0x50 (80)
}

