///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentData.h>
#include <fb/GameplayBones.h>
#include <fb/PVZShieldState.h>
#include <fb/ShieldComponentBinding.h>

namespace fb {
	class PVZShieldComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZShieldComponentData"); }
		virtual ~PVZShieldComponentData() override {}
		PVZShieldComponentData() {
			m_referenceJoint = GameplayBones::GameplayBones_RootMeshBone;
			m_isAIFullBodyShield = false;
			m_shouldAIFaceAttack = false;
			m_useHealthThresholds = false;
		};

		GameplayBones m_referenceJoint; // 0x70 (112)
		Array<PVZShieldState> m_shieldStates; // 0x78 (120)
		ShieldComponentBinding m_shieldBinding; // 0x80 (128)
		bool m_isAIFullBodyShield; // 0x94 (148)
		bool m_shouldAIFaceAttack; // 0x95 (149)
		bool m_useHealthThresholds; // 0x96 (150)
	}; // 0xA0 (160)
}

