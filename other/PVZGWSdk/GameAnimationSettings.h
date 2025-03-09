///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/SystemSettings.h>

namespace fb {
	class GameAnimationSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameAnimationSettings"); }
		virtual ~GameAnimationSettings() override {}
		GameAnimationSettings() {
			m_temporalLoddingFirstDeltaTime = 0.02f;
			m_temporalLoddingSecondDeltaTime = 0.04f;
			m_temporalLoddingThirdDeltaTime = 0.06f;
			m_temporalLoddingFourthDeltaTime = 0.08f;
			m_temporalLoddingFifthDeltaTime = 0.1f;
			m_temporalLoddingSixthDeltaTime = 0.12f;
			m_temporalLoddingFirstDistance = 2.f;
			m_temporalLoddingSecondDistance = 30.f;
			m_temporalLoddingThirdDistance = 60.f;
			m_temporalLoddingFourthDistance = 90.f;
			m_temporalLoddingFifthDistance = 120.f;
			m_temporalLoddingSixthDistance = 150.f;
			m_temporalLoddingFarDistance = 208.f;
			m_useAnimationDrivenCharacter = false;
			m_serverEnable = true;
			m_clientEnable = true;
			m_useRawGamepadInput = false;
		};

		Array<String> m_antOnClientOnlyGamemodes; // 0x20 (32)
		float m_temporalLoddingFirstDeltaTime; // 0x28 (40)
		float m_temporalLoddingSecondDeltaTime; // 0x2C (44)
		float m_temporalLoddingThirdDeltaTime; // 0x30 (48)
		float m_temporalLoddingFourthDeltaTime; // 0x34 (52)
		float m_temporalLoddingFifthDeltaTime; // 0x38 (56)
		float m_temporalLoddingSixthDeltaTime; // 0x3C (60)
		float m_temporalLoddingFirstDistance; // 0x40 (64)
		float m_temporalLoddingSecondDistance; // 0x44 (68)
		float m_temporalLoddingThirdDistance; // 0x48 (72)
		float m_temporalLoddingFourthDistance; // 0x4C (76)
		float m_temporalLoddingFifthDistance; // 0x50 (80)
		float m_temporalLoddingSixthDistance; // 0x54 (84)
		float m_temporalLoddingFarDistance; // 0x58 (88)
		bool m_useAnimationDrivenCharacter; // 0x5C (92)
		bool m_serverEnable; // 0x5D (93)
		bool m_clientEnable; // 0x5E (94)
		bool m_useRawGamepadInput; // 0x5F (95)
	}; // 0x60 (96)
}

