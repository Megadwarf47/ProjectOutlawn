///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class AbilityComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AbilityComponentData"); }
		virtual ~AbilityComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AbilityComponentData() {
			m_abilityPercentReadyLeft = 100;
			m_abilityPercentReadyRight = 100;
			m_abilityPercentReadyUp = 100;
			m_abilityRemainingUsesLeft = 0;
			m_abilityRemainingUsesRight = 0;
			m_abilityRemainingUsesUp = 0;
			m_abilityTotalUsesLeft = 0;
			m_abilityTotalUsesRight = 0;
			m_abilityTotalUsesUp = 0;
			m_abilityLeftContinuous = false;
			m_abilityRightContinuous = false;
			m_abilityUpContinuous = false;
		};

		s32 m_abilityPercentReadyLeft; // 0x70 (112)
		s32 m_abilityPercentReadyRight; // 0x74 (116)
		s32 m_abilityPercentReadyUp; // 0x78 (120)
		s32 m_abilityRemainingUsesLeft; // 0x7C (124)
		s32 m_abilityRemainingUsesRight; // 0x80 (128)
		s32 m_abilityRemainingUsesUp; // 0x84 (132)
		s32 m_abilityTotalUsesLeft; // 0x88 (136)
		s32 m_abilityTotalUsesRight; // 0x8C (140)
		s32 m_abilityTotalUsesUp; // 0x90 (144)
		String m_abilityIconIdLeft; // 0x98 (152)
		String m_abilityIconIdRight; // 0xA0 (160)
		String m_abilityIconIdUp; // 0xA8 (168)
		bool m_abilityLeftContinuous; // 0xB0 (176)
		bool m_abilityRightContinuous; // 0xB1 (177)
		bool m_abilityUpContinuous; // 0xB2 (178)
	}; // 0xC0 (192)
}

