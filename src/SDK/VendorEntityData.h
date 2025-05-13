///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class VendorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VendorEntityData"); }
		virtual ~VendorEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		VendorEntityData() {
			m_cost = 0.f;
			m_defaultEnabled = true;
		};

		float m_cost; // 0x18 (24)
		bool m_defaultEnabled; // 0x1C (28)
	}; // 0x20 (32)
}

