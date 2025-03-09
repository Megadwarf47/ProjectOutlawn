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
	class SoundMasterPatchAsset;
}

namespace fb {
	class SoundMasterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundMasterEntityData"); }
		virtual ~SoundMasterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundMasterEntityData() {
		};

		CtrRef<SoundMasterPatchAsset> m_master; // 0x18 (24)
	}; // 0x20 (32)
}

