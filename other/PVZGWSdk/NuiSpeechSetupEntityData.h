///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class NuiSpeechLevelConfiguration;
}

namespace fb {
	class NuiSpeechSetupEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechSetupEntityData"); }
		virtual ~NuiSpeechSetupEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		NuiSpeechSetupEntityData() {
			m_realm = Realm::Realm_Client;
			m_forceDialectSetting = false;
		};

		Realm m_realm; // 0x18 (24)
		CtrRef<NuiSpeechLevelConfiguration> m_configuration; // 0x20 (32)
		bool m_forceDialectSetting; // 0x28 (40)
	}; // 0x30 (48)
}

