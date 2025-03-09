///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Vec3.h>
#include <fb/WeaponData.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class ObjectDeployWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectDeployWeaponData"); }
		virtual ~ObjectDeployWeaponData() override {}
		ObjectDeployWeaponData() {
			m_deployOffset = Vec3(0.f, 1.f, 1.f);
			m_deployAreaRadius = 0.5f;
			m_deployAreaGroundRayLength = 3.f;
			m_deployAreaGroundFlatness = 0.9f;
			m_deploymentCollisionTestSize = 0.5f;
			m_deploymentCollisionTestWidth = 0.5f;
			m_deploymentCollisionTestYOffset = 0.5f;
			m_deploymentCollisionTestZOffset = 0.5f;
			m_deploymentCollisionTestIgnoreRadius = 5.f;
			m_usePreview = true;
			m_useBasicDeploymentCollisionTest = false;
			m_deploymentCollisionTestIgnoreSoldiers = false;
		};

		Vec3 m_deployOffset; // 0x20 (32)
		float m_deployAreaRadius; // 0x30 (48)
		float m_deployAreaGroundRayLength; // 0x34 (52)
		float m_deployAreaGroundFlatness; // 0x38 (56)
		CtrRef<ObjectBlueprint> m_previewObject; // 0x40 (64)
		float m_deploymentCollisionTestSize; // 0x48 (72)
		float m_deploymentCollisionTestWidth; // 0x4C (76)
		float m_deploymentCollisionTestYOffset; // 0x50 (80)
		float m_deploymentCollisionTestZOffset; // 0x54 (84)
		float m_deploymentCollisionTestIgnoreRadius; // 0x58 (88)
		bool m_usePreview; // 0x5C (92)
		bool m_useBasicDeploymentCollisionTest; // 0x5D (93)
		bool m_deploymentCollisionTestIgnoreSoldiers; // 0x5E (94)
	}; // 0x60 (96)
}

