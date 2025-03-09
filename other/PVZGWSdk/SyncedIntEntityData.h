///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SyncedIntEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedIntEntityData"); }
		virtual ~SyncedIntEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		SyncedIntEntityData() {
			m_in = 0;
		};

		s32 m_in; // 0x18 (24)
	}; // 0x20 (32)
}

