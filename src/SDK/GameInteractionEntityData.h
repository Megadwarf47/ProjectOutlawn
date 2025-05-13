///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlinkType.h>
#include <fb/CtrRef.h>
#include <fb/InteractionEntityData.h>
#include <fb/InteractionEntityType.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class UIWorldIconBehavior;
}

namespace fb {
	class GameInteractionEntityData : public InteractionEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameInteractionEntityData"); }
		virtual ~GameInteractionEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		GameInteractionEntityData() {
			m_delayBetweenUses = 0.f;
			m_teamId = TeamId::TeamNeutral;
			m_spectatorTeamId = TeamId::TeamNeutral;
			m_inputAction = 1573615674;
			m_holdToInteractTime = 0.f;
			m_interactionEntityType = InteractionEntityType::IET_None;
			m_blink = BlinkType::BTHold;
			m_interactionVerticalOffset = 0.f;
			m_capturepointVerticalOffset = 0.f;
			m_tacticalRadius = 0.f;
			m_shrinkSnap = false;
			m_showAsCapturePoint = false;
			m_friendlyInteractionEnabled = true;
			m_enemyInteractionEnabled = true;
			m_forceSnap = false;
		};

		float m_delayBetweenUses; // 0x80 (128)
		TeamId m_teamId; // 0x84 (132)
		TeamId m_spectatorTeamId; // 0x88 (136)
		s32 m_inputAction; // 0x8C (140)
		float m_holdToInteractTime; // 0x90 (144)
		InteractionEntityType m_interactionEntityType; // 0x94 (148)
		String m_interactionSid; // 0x98 (152)
		BlinkType m_blink; // 0xA0 (160)
		String m_interactingSid; // 0xA8 (168)
		String m_nameSid; // 0xB0 (176)
		float m_interactionVerticalOffset; // 0xB8 (184)
		String m_friendlyTextSid; // 0xC0 (192)
		String m_enemyTextSid; // 0xC8 (200)
		float m_capturepointVerticalOffset; // 0xD0 (208)
		String m_iconName; // 0xD8 (216)
		CtrRef<UIWorldIconBehavior> m_iconBehavior; // 0xE0 (224)
		float m_tacticalRadius; // 0xE8 (232)
		bool m_shrinkSnap; // 0xEC (236)
		bool m_showAsCapturePoint; // 0xED (237)
		bool m_friendlyInteractionEnabled; // 0xEE (238)
		bool m_enemyInteractionEnabled; // 0xEF (239)
		bool m_forceSnap; // 0xF0 (240)
	}; // 0x100 (256)
}

