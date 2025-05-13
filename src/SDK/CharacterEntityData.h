///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ControllableEntityData.h>
#include <fb/CtrRef.h>
#include <fb/PersonViewMode.h>
#include <fb/PlayerSpawnType.h>

namespace fb {
	class CharacterSoundData;
	class EntityVoiceOverInfo;
}

namespace fb {
	class CharacterEntityData : public ControllableEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterEntityData"); }
		virtual ~CharacterEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		CharacterEntityData() {
			m_maxHealth = 100.f;
			m_defaultViewMode = PersonViewMode::PersonViewMode_ThirdPerson;
			m_playerSpawnType = PlayerSpawnType::PlayerSpawnType_HumanPlayer;
			m_characterLightingEnable = true;

			m_resetTeamOnLastPlayerExits = false;
		};

		float m_maxHealth; // 0xB0 (176)
		PersonViewMode m_defaultViewMode; // 0xB4 (180)
		PlayerSpawnType m_playerSpawnType; // 0xB8 (184)
		CtrRef<EntityVoiceOverInfo> m_voiceOverInfo; // 0xC0 (192)
		CtrRef<CharacterSoundData> m_sound; // 0xC8 (200)
		bool m_characterLightingEnable; // 0xD0 (208)
	}; // 0xE0 (224)
}

