///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/DynamicDifficultyModifiers.h>

namespace fb {
	class CharacterSpawnTemplateData;
	class SoldierBlueprint;
}

namespace fb {
	class AISpawnData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AISpawnData"); }
		virtual ~AISpawnData() override {}
		AISpawnData() {
		};

		CtrRef<SoldierBlueprint> m_blueprint; // 0x18 (24)
		CtrRef<CharacterSpawnTemplateData> m_template; // 0x20 (32)
		DynamicDifficultyModifiers m_modifiers; // 0x28 (40)
	}; // 0x30 (48)
}

