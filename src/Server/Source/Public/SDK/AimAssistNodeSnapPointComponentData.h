///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class AimAssistNodeSnapPointComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AimAssistNodeSnapPointComponentData"); }
		virtual ~AimAssistNodeSnapPointComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AimAssistNodeSnapPointComponentData() {
			m_priority = 500;
			m_underReticleSphereRadius = 0.f;
			m_underReticleCapsuleLength = 0.f;
			m_priority_UnderReticle = 500;
			m_enabled = true;
		};

		u32 m_priority; // 0x70 (112)
		float m_underReticleSphereRadius; // 0x74 (116)
		float m_underReticleCapsuleLength; // 0x78 (120)
		u32 m_priority_UnderReticle; // 0x7C (124)
		bool m_enabled; // 0x80 (128)
	}; // 0x90 (144)
}

