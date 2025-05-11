///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class CharacterAnimationSpaceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterAnimationSpaceEntityData"); }
		virtual ~CharacterAnimationSpaceEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CharacterAnimationSpaceEntityData() {
			m_realm = Realm::Realm_Client;
			m_warpAnimationBlendTime = 0.5f;
		};

		Realm m_realm; // 0x18 (24)
		AntRef m_spacePositionGS; // 0x1C (28)
		AntRef m_spaceRotationGS; // 0x30 (48)
		float m_warpAnimationBlendTime; // 0x44 (68)
	}; // 0x48 (72)
}

