///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PhysicsDrivenAnimationEntityBinding.h>
#include <fb/Realm.h>

namespace fb {
	class PhysicsDrivenAnimationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsDrivenAnimationEntityData"); }
		virtual ~PhysicsDrivenAnimationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PhysicsDrivenAnimationEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_animationEntitySpacePriority = 0;
			m_useSpineXFor1p = true;
		};

		Realm m_realm; // 0x18 (24)
		PhysicsDrivenAnimationEntityBinding m_binding; // 0x1C (28)
		s32 m_animationEntitySpacePriority; // 0x300 (768)
		bool m_useSpineXFor1p; // 0x304 (772)
	}; // 0x308 (776)
}

