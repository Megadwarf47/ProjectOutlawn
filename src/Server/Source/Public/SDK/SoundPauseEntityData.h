///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>

namespace fb {
	class MixGroup;
}

namespace fb {
	class SoundPauseEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundPauseEntityData"); }
		virtual ~SoundPauseEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundPauseEntityData() {
		};

		RefArray<MixGroup> m_exclusionList; // 0x18 (24)
	}; // 0x20 (32)
}

