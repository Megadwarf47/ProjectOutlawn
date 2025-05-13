///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CannedAnimationBinding.h>
#include <fb/GameComponentData.h>
#include <fb/GameplayBones.h>
#include <fb/LinearTransform.h>
#include <fb/WarpAnimationBinding.h>

namespace fb {
	class WarpAnimationComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WarpAnimationComponentData"); }
		virtual ~WarpAnimationComponentData() override {}
		WarpAnimationComponentData() {
			m_animationEntitySpacePriority = 0;
			m_boneToAlign = GameplayBones::GameplayBones_ConnectBone;
			m_requireAnimationWeight = true;
			m_forceAnimationTransform = false;
			m_externalConnectTransform = false;
		};

		LinearTransform m_connectTransform; // 0x70 (112)
		WarpAnimationBinding m_warpBinding; // 0xB0 (176)
		CannedAnimationBinding m_cannedAnimBinding; // 0x13C (316)
		s32 m_animationEntitySpacePriority; // 0x218 (536)
		GameplayBones m_boneToAlign; // 0x21C (540)
		bool m_requireAnimationWeight; // 0x220 (544)
		bool m_forceAnimationTransform; // 0x221 (545)
		bool m_externalConnectTransform; // 0x222 (546)
	}; // 0x230 (560)
}

