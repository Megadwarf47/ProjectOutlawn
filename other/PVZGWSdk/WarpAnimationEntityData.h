///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/GameplayBones.h>
#include <fb/LinearTransform.h>
#include <fb/WarpAnimationBinding.h>

namespace fb {
	class WarpAnimationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WarpAnimationEntityData"); }
		virtual ~WarpAnimationEntityData() override {}
		WarpAnimationEntityData() {
			m_animationEntitySpacePriority = 2;
			m_boneToAlign = GameplayBones::GameplayBones_ConnectBone;
			m_requireAnimationWeight = true;
			m_forceAnimationTransform = false;
			m_externalConnectTransform = false;
		};

		WarpAnimationBinding m_warpBinding; // 0x18 (24)
		s32 m_animationEntitySpacePriority; // 0xA4 (164)
		GameplayBones m_boneToAlign; // 0xA8 (168)
		LinearTransform m_connectTransform; // 0xB0 (176)
		bool m_requireAnimationWeight; // 0xF0 (240)
		bool m_forceAnimationTransform; // 0xF1 (241)
		bool m_externalConnectTransform; // 0xF2 (242)
	}; // 0x100 (256)
}

