///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SyncedBoolEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedBoolEntityData"); }
		virtual ~SyncedBoolEntityData() override {}
		SyncedBoolEntityData() {
			m_in = false;
		};

		bool m_in; // 0x18 (24)
	}; // 0x20 (32)
}

