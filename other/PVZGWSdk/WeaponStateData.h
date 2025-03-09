///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AnimatedAimingEnum.h>
#include <fb/AnimatedFireEnum.h>
#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class BoneFakePhysicsData;
	class ObjectBlueprint;
	class SkinnedMeshAsset;
}

namespace fb {
	struct WeaponStateData {
		WeaponStateData() {
			m_zoomMeshTransitionFactor = 1.f;
			m_zoomScaleFactor = 1.f;
			m_keepAimingTime = 3.f;
			m_animatedFireType = AnimatedFireEnum::AnimatedFireAutomatic;
			m_animatedAimingType = AnimatedAimingEnum::AnimatedAimingTwoHanded;
			m_hideProjectileAfterFireTime = 0.f;
			m_unDeploySpeed = 1.f;
			m_deploySpeed = 1.f;
			m_alwaysAimHead = true;
			m_isOneHanded = false;
			m_playDeployAfterFire = false;
			m_skipDeployAnimation = false;
			m_skipReloadAnimation = false;
			m_skipFireAnimation = false;
		};

		Array<u32> m_referencedAssetHashes; // 0x0 (0)
		RefArray<BoneFakePhysicsData> m_boneFakePhysics; // 0x8 (8)
		CtrRef<ObjectBlueprint> m_weaponMesh3p; // 0x10 (16)
		CtrRef<SkinnedMeshAsset> m_mesh3p; // 0x18 (24)
		AntRef m_weapon; // 0x20 (32)
		AntRef m_weapon3p; // 0x34 (52)
		float m_zoomMeshTransitionFactor; // 0x48 (72)
		float m_zoomScaleFactor; // 0x4C (76)
		Array<float> m_zoomInOutMeshTransitionFactors; // 0x50 (80)
		float m_keepAimingTime; // 0x58 (88)
		AnimatedFireEnum m_animatedFireType; // 0x5C (92)
		AnimatedAimingEnum m_animatedAimingType; // 0x60 (96)
		float m_hideProjectileAfterFireTime; // 0x64 (100)
		String m_projectileBoneName; // 0x68 (104)
		float m_unDeploySpeed; // 0x70 (112)
		float m_deploySpeed; // 0x74 (116)
		Array<LinearTransform> m_mesh3pTransforms; // 0x78 (120)
		bool m_alwaysAimHead; // 0x80 (128)
		bool m_isOneHanded; // 0x81 (129)
		bool m_playDeployAfterFire; // 0x82 (130)
		bool m_skipDeployAnimation; // 0x83 (131)
		bool m_skipReloadAnimation; // 0x84 (132)
		bool m_skipFireAnimation; // 0x85 (133)
	}; // 0x88 (136)
}

