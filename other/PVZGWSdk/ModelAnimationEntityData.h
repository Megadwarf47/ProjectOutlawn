///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/GameplayBones.h>
#include <fb/LinearTransform.h>
#include <fb/ModelAnimationTransformType.h>
#include <fb/ModelAnimationUpdateOrder.h>
#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	class AntAnimationSetAsset;
}

namespace fb {
	class ModelAnimationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModelAnimationEntityData"); }
		virtual ~ModelAnimationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ModelAnimationEntityData() {
			m_realm = Realm::Realm_Client;
			m_animationIndex = 0;
			m_externalTime = -1.f;
			m_playbackSpeed = -1.f;
			m_instanceSeed = 0;
			m_boneToPlace = GameplayBones::GameplayBones_RootBone;
			m_modelAnimationTransformType = ModelAnimationTransformType::ModelAnimationTransformType_World;
			m_jointWorldTransformUpdateOrder = ModelAnimationUpdateOrder::ModelAnimationUpdateOrder_PostAnimation;
			m_autoStart = false;
			m_looping = false;
			m_resetAfterStop = true;
			m_playFirstFrame = false;
			m_animationEntitySpaceActive = false;
			m_disableCulling = false;
			m_enableJointWorldTransformOutput = false;
			m_showDebugTransforms = false;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_animationEntitySpace; // 0x20 (32)
		String m_defaultAnimation; // 0x60 (96)
		s32 m_animationIndex; // 0x68 (104)
		CtrRef<AntAnimationSetAsset> m_animationSet; // 0x70 (112)
		float m_externalTime; // 0x78 (120)
		float m_playbackSpeed; // 0x7C (124)
		s32 m_instanceSeed; // 0x80 (128)
		GameplayBones m_boneToPlace; // 0x84 (132)
		ModelAnimationTransformType m_modelAnimationTransformType; // 0x88 (136)
		ModelAnimationUpdateOrder m_jointWorldTransformUpdateOrder; // 0x8C (140)
		Array<s32> m_jointOutputFieldHashes; // 0x90 (144)
		bool m_autoStart; // 0x98 (152)
		bool m_looping; // 0x99 (153)
		bool m_resetAfterStop; // 0x9A (154)
		bool m_playFirstFrame; // 0x9B (155)
		bool m_animationEntitySpaceActive; // 0x9C (156)
		bool m_disableCulling; // 0x9D (157)
		bool m_enableJointWorldTransformOutput; // 0x9E (158)
		bool m_showDebugTransforms; // 0x9F (159)
	}; // 0xA0 (160)
}

