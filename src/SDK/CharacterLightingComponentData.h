///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterLightingMode.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class CharacterLightingComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterLightingComponentData"); }
		virtual ~CharacterLightingComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CharacterLightingComponentData() {
			m_realm = Realm::Realm_Client;
			m_cameraUpRotation = 0.f;
			m_characterLightingMode = CharacterLightingMode::CharacterLightingMode_Add;
			m_blendFactor = 1.f;
			m_topLightDirX = 0.f;
			m_topLightDirY = 90.f;
			m_startFadeDistance = 0.f;
			m_endFadeDistance = -1.f;
			m_characterLightEnable = false;
			m_firstPersonEnable = false;
			m_lockToCameraDirection = false;
		};

		Vec3 m_topLight; // 0x80 (128)
		Vec3 m_bottomLight; // 0x90 (144)
		Realm m_realm; // 0xA0 (160)
		float m_cameraUpRotation; // 0xA4 (164)
		CharacterLightingMode m_characterLightingMode; // 0xA8 (168)
		float m_blendFactor; // 0xAC (172)
		float m_topLightDirX; // 0xB0 (176)
		float m_topLightDirY; // 0xB4 (180)
		float m_startFadeDistance; // 0xB8 (184)
		float m_endFadeDistance; // 0xBC (188)
		bool m_characterLightEnable; // 0xC0 (192)
		bool m_firstPersonEnable; // 0xC1 (193)
		bool m_lockToCameraDirection; // 0xC2 (194)
	}; // 0xD0 (208)
}

