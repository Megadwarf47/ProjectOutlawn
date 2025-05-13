///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlinkType.h>
#include <fb/RefArray.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class CharacterCustomizationAsset;
}

namespace fb {
	class PVZGameInteractionEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZGameInteractionEntityData"); }
		virtual ~PVZGameInteractionEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZGameInteractionEntityData() {
			m_useWithinRadius = 0.3f;
			m_useWithinAngle = 360.f;
			m_displayWithinRadius = 25.f;
			m_teamId = TeamId::TeamNeutral;
			m_inputAction = 1573615674;
			m_holdToInteractTime = 0.f;
			m_blink = BlinkType::BTHold;
			m_postInteractionDelay = 1.f;
			m_extraInteractionWeight = 0.f;
			m_enabled = true;
			m_testIfOccluded = false;
			m_shrinkSnap = false;
			m_showAction = true;
			m_friendlyInteractionEnabled = true;
			m_enemyInteractionEnabled = true;
		};

		float m_useWithinRadius; // 0x60 (96)
		float m_useWithinAngle; // 0x64 (100)
		float m_displayWithinRadius; // 0x68 (104)
		TeamId m_teamId; // 0x6C (108)
		s32 m_inputAction; // 0x70 (112)
		float m_holdToInteractTime; // 0x74 (116)
		BlinkType m_blink; // 0x78 (120)
		String m_interactionSid; // 0x80 (128)
		String m_nameSid; // 0x88 (136)
		String m_interactingSid; // 0x90 (144)
		String m_friendlyTextSid; // 0x98 (152)
		String m_enemyTextSid; // 0xA0 (160)
		String m_id; // 0xA8 (168)
		RefArray<CharacterCustomizationAsset> m_allowableCustomizations; // 0xB0 (176)
		float m_postInteractionDelay; // 0xB8 (184)
		float m_extraInteractionWeight; // 0xBC (188)
		bool m_enabled; // 0xC0 (192)
		bool m_testIfOccluded; // 0xC1 (193)
		bool m_shrinkSnap; // 0xC2 (194)
		bool m_showAction; // 0xC3 (195)
		bool m_friendlyInteractionEnabled; // 0xC4 (196)
		bool m_enemyInteractionEnabled; // 0xC5 (197)
	}; // 0xD0 (208)
}

