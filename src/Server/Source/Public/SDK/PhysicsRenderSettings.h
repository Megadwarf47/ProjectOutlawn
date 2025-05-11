///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PhysicsRenderSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsRenderSettings"); }
		virtual ~PhysicsRenderSettings() override {}
		PhysicsRenderSettings() {
			m_viewDistance = 20.f;
			m_renderSpecificPart = -1;
			m_renderServer = false;
			m_renderClient = false;
			m_renderEffectWorld = false;
			m_renderStatic = false;
			m_renderDetail = false;
			m_renderGroup = false;
			m_renderUngrouped = true;
			m_renderRagdoll = false;
			m_renderWater = false;
			m_renderPhantoms = false;
			m_renderCharacterCollision = false;
			m_renderSolidGeometry = false;
			m_useShapeCache = true;
			m_renderConstraints = false;
			m_renderOnlyContactConstraints = false;
			m_renderConstraintCount = false;
			m_renderActiveConstraintCount = false;
			m_renderSimulationIslands = false;
			m_renderBroadphaseHandles = false;
			m_renderInteractingShapeCount = false;
			m_renderMidphaseCheckCount = false;
			m_renderDestructionConnections = false;
			m_renderActions = false;
			m_renderSleepStatus = false;
			m_renderQualityType = false;
			m_renderPartBoundingBoxes = false;
			m_renderOnlyBoundingBoxes = false;
			m_renderRigidBodyTransform = false;
			m_renderInertia = false;
			m_renderCenterOfMass = false;
			m_renderLinearVelocity = false;
			m_renderCollidesWithTerrain = false;
			m_renderCollisionSpheres = false;
			m_renderEntityStats = true;
			m_renderWorldStats = false;
			m_showContactsInWorldStats = false;
			m_showInactiveContactsInWorldStats = false;
			m_showPhantomsInWorldStats = false;
			m_showFixedObjectsInWorldStats = false;
			m_renderMemoryUsed = false;
			m_collisionSpawnDebug = false;
			m_renderHeatMap = false;
			m_renderHeatMapFromToi = true;
		};

		float m_viewDistance; // 0x10 (16)
		s32 m_renderSpecificPart; // 0x14 (20)
		bool m_renderServer; // 0x18 (24)
		bool m_renderClient; // 0x19 (25)
		bool m_renderEffectWorld; // 0x1A (26)
		bool m_renderStatic; // 0x1B (27)
		bool m_renderDetail; // 0x1C (28)
		bool m_renderGroup; // 0x1D (29)
		bool m_renderUngrouped; // 0x1E (30)
		bool m_renderRagdoll; // 0x1F (31)
		bool m_renderWater; // 0x20 (32)
		bool m_renderPhantoms; // 0x21 (33)
		bool m_renderCharacterCollision; // 0x22 (34)
		bool m_renderSolidGeometry; // 0x23 (35)
		bool m_useShapeCache; // 0x24 (36)
		bool m_renderConstraints; // 0x25 (37)
		bool m_renderOnlyContactConstraints; // 0x26 (38)
		bool m_renderConstraintCount; // 0x27 (39)
		bool m_renderActiveConstraintCount; // 0x28 (40)
		bool m_renderSimulationIslands; // 0x29 (41)
		bool m_renderBroadphaseHandles; // 0x2A (42)
		bool m_renderInteractingShapeCount; // 0x2B (43)
		bool m_renderMidphaseCheckCount; // 0x2C (44)
		bool m_renderDestructionConnections; // 0x2D (45)
		bool m_renderActions; // 0x2E (46)
		bool m_renderSleepStatus; // 0x2F (47)
		bool m_renderQualityType; // 0x30 (48)
		bool m_renderPartBoundingBoxes; // 0x31 (49)
		bool m_renderOnlyBoundingBoxes; // 0x32 (50)
		bool m_renderRigidBodyTransform; // 0x33 (51)
		bool m_renderInertia; // 0x34 (52)
		bool m_renderCenterOfMass; // 0x35 (53)
		bool m_renderLinearVelocity; // 0x36 (54)
		bool m_renderCollidesWithTerrain; // 0x37 (55)
		bool m_renderCollisionSpheres; // 0x38 (56)
		bool m_renderEntityStats; // 0x39 (57)
		bool m_renderWorldStats; // 0x3A (58)
		bool m_showContactsInWorldStats; // 0x3B (59)
		bool m_showInactiveContactsInWorldStats; // 0x3C (60)
		bool m_showPhantomsInWorldStats; // 0x3D (61)
		bool m_showFixedObjectsInWorldStats; // 0x3E (62)
		bool m_renderMemoryUsed; // 0x3F (63)
		bool m_collisionSpawnDebug; // 0x40 (64)
		bool m_renderHeatMap; // 0x41 (65)
		bool m_renderHeatMapFromToi; // 0x42 (66)
	}; // 0x48 (72)
}

