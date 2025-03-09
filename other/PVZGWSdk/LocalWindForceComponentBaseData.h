///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class LocalWindForceComponentBaseData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceComponentBaseData"); }
		virtual ~LocalWindForceComponentBaseData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LocalWindForceComponentBaseData() {
			m_strength = 5.f;
			m_variation = 0.2f;
			m_variationRate = 0.2f;
			m_microVariation = 0.f;
			m_hardness = 0.1f;
			m_forceAsInstantVelocity = 0.f;
		};

		float m_strength; // 0x70 (112)
		float m_variation; // 0x74 (116)
		float m_variationRate; // 0x78 (120)
		float m_microVariation; // 0x7C (124)
		float m_hardness; // 0x80 (128)
		float m_forceAsInstantVelocity; // 0x84 (132)
	}; // 0x90 (144)
}

