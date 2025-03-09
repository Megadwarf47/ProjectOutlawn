///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SyncedFloatEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedFloatEntityData"); }
		virtual ~SyncedFloatEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		SyncedFloatEntityData() {
			m_in = 0.f;
		};

		float m_in; // 0x18 (24)
	}; // 0x20 (32)
}

