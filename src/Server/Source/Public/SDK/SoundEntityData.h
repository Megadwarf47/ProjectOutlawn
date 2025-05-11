///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class SoundAsset;
}

namespace fb {
	class SoundEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundEntityData"); }
		virtual ~SoundEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundEntityData() {
			m_playOnCreation = false;
			m_enableOnCreation = true;
			m_useParentTransform = false;
		};

		CtrRef<SoundAsset> m_sound; // 0x18 (24)
		LinearTransform m_transform; // 0x20 (32)
		bool m_playOnCreation; // 0x60 (96)
		bool m_enableOnCreation; // 0x61 (97)
		bool m_useParentTransform; // 0x62 (98)
	}; // 0x70 (112)
}

