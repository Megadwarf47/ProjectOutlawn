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
	class HdrSetting;
}

namespace fb {
	class SoundHdrEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundHdrEntityData"); }
		virtual ~SoundHdrEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundHdrEntityData() {
			m_applySettingOnCreation = false;
		};

		CtrRef<HdrSetting> m_hdrSetting; // 0x18 (24)
		bool m_applySettingOnCreation; // 0x20 (32)
	}; // 0x28 (40)
}

