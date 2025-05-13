///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CommanderActionType.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class CharacterCustomizationAsset;
}

namespace fb {
	class CommanderEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CommanderEntityData"); }
		virtual ~CommanderEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		CommanderEntityData() {
			m_team = TeamId::TeamNeutral;
			m_commanderActionDisplayTime = 3;
			m_commanderViewWidth = 200.f;
			m_topDownCameraSpeed = 100.f;
			m_squadRequestDuration = 60.f;
			m_initialMutinyDisabledDuration = 10.f;
			m_mutinyThreshold = 0.5f;
			m_mutinyDuration = 60.f;
			m_ratingCooldown = 30.f;
			m_localEMPPulseDuration = 2.f;
			m_globalEMPDuration = 20.f;
			m_squadBarPointsPerSegment = 1000;
			m_adjustCameraToTerrain = true;
		};

		TeamId m_team; // 0x80 (128)
		CtrRef<CharacterCustomizationAsset> m_kit; // 0x88 (136)
		s32 m_commanderActionDisplayTime; // 0x90 (144)
		float m_commanderViewWidth; // 0x94 (148)
		float m_topDownCameraSpeed; // 0x98 (152)
		float m_squadRequestDuration; // 0x9C (156)
		float m_initialMutinyDisabledDuration; // 0xA0 (160)
		float m_mutinyThreshold; // 0xA4 (164)
		float m_mutinyDuration; // 0xA8 (168)
		float m_ratingCooldown; // 0xAC (172)
		float m_localEMPPulseDuration; // 0xB0 (176)
		float m_globalEMPDuration; // 0xB4 (180)
		s32 m_squadBarPointsPerSegment; // 0xB8 (184)
		Array<CommanderActionType> m_squadBarActions; // 0xC0 (192)
		Array<CommanderActionType> m_globalActions; // 0xC8 (200)
		bool m_adjustCameraToTerrain; // 0xD0 (208)
	}; // 0xE0 (224)
}

