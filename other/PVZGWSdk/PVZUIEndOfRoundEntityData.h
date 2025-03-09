///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZUIEndOfRoundEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIEndOfRoundEntityData"); }
		virtual ~PVZUIEndOfRoundEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZUIEndOfRoundEntityData() {
			m_preEorTime = 10.f;
			m_eorTime = 10.f;
		};

		float m_preEorTime; // 0x18 (24)
		float m_eorTime; // 0x1C (28)
	}; // 0x20 (32)
}

