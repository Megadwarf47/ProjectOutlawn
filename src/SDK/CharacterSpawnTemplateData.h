///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class AnimationSpawnTemplate;
	class CustomizeCharacterData;
	class GameBehaviourTemplateData;
	class GameSensingTemplateData;
	class VoiceOverLabel;
}

namespace fb {
	class CharacterSpawnTemplateData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterSpawnTemplateData"); }
		virtual ~CharacterSpawnTemplateData() override {}
		CharacterSpawnTemplateData() {
		};

		CtrRef<CustomizeCharacterData> m_customizeCharacterData; // 0x18 (24)
		String m_displayName; // 0x20 (32)
		CtrRef<GameSensingTemplateData> m_sensing; // 0x28 (40)
		CtrRef<GameBehaviourTemplateData> m_behaviour; // 0x30 (48)
		CtrRef<AnimationSpawnTemplate> m_animationTemplate; // 0x38 (56)
		RefArray<VoiceOverLabel> m_voiceOverLabels; // 0x40 (64)
	}; // 0x48 (72)
}

