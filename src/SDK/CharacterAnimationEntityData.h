///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class CharacterAnimationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterAnimationEntityData"); }
		virtual ~CharacterAnimationEntityData() override {}
		CharacterAnimationEntityData() {
			m_externalTime = -1.f;
			m_warpAnimationBlendTime = 0.5f;
			m_trackLength = -1.f;
			m_restoreControllerOnFinish = false;
		};

		AntRef m_controller; // 0x18 (24)
		LinearTransform m_entitySpaceTransform; // 0x30 (48)
		float m_externalTime; // 0x70 (112)
		float m_warpAnimationBlendTime; // 0x74 (116)
		float m_trackLength; // 0x78 (120)
		bool m_restoreControllerOnFinish; // 0x7C (124)
	}; // 0x80 (128)
}

