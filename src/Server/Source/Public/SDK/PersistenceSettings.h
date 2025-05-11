///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SystemSettings.h>

namespace fb {
	class PersistenceConfiguration;
	class PersistenceData;
	class PointSystemParamsAsset;
	class RankParamsAsset;
	class SkillLevelParameters;
}

namespace fb {
	class PersistenceSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceSettings"); }
		virtual ~PersistenceSettings() override {}
		PersistenceSettings() {
		};

		CtrRef<PersistenceData> m_singleplayerTemplate; // 0x20 (32)
		CtrRef<PersistenceData> m_coopTemplate; // 0x28 (40)
		CtrRef<PersistenceData> m_multiplayerTemplate; // 0x30 (48)
		CtrRef<PointSystemParamsAsset> m_pointSystemParams; // 0x38 (56)
		CtrRef<RankParamsAsset> m_rankParams; // 0x40 (64)
		CtrRef<SkillLevelParameters> m_skillLevelParams; // 0x48 (72)
		CtrRef<PersistenceConfiguration> m_persistenceConfig; // 0x50 (80)
	}; // 0x58 (88)
}

