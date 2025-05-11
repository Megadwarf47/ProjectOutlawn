///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlueprintBundleReference.h>
#include <fb/EntityData.h>
#include <fb/StreamRealm.h>

namespace fb {
	class BlueprintBundleEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlueprintBundleEntityData"); }
		virtual ~BlueprintBundleEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BlueprintBundleEntityData() {
			m_streamRealm = StreamRealm::StreamRealm_Both;
		};

		StreamRealm m_streamRealm; // 0x18 (24)
		BlueprintBundleReference m_bundle; // 0x20 (32)
	}; // 0x38 (56)
}

