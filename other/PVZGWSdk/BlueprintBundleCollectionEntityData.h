///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/StreamRealm.h>

namespace fb {
	class BlueprintBundleCollection;
}

namespace fb {
	class BlueprintBundleCollectionEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlueprintBundleCollectionEntityData"); }
		virtual ~BlueprintBundleCollectionEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BlueprintBundleCollectionEntityData() {
			m_streamRealm = StreamRealm::StreamRealm_Both;
			m_activeIndex = 0;
		};

		StreamRealm m_streamRealm; // 0x18 (24)
		CtrRef<BlueprintBundleCollection> m_collection; // 0x20 (32)
		s32 m_activeIndex; // 0x28 (40)
	}; // 0x30 (48)
}

