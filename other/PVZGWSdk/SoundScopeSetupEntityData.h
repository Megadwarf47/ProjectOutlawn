///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class SoundScopeSetupData;
}

namespace fb {
	class SoundScopeSetupEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundScopeSetupEntityData"); }
		virtual ~SoundScopeSetupEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundScopeSetupEntityData() {
		};

		CtrRef<SoundScopeSetupData> m_setup; // 0x18 (24)
	}; // 0x20 (32)
}

