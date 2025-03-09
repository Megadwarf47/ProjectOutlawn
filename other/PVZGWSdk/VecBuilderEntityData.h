///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class VecBuilderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VecBuilderEntityData"); }
		virtual ~VecBuilderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		VecBuilderEntityData() {
			m_realm = Realm::Realm_Client;
			m_x = 0.f;
			m_y = 0.f;
			m_z = 0.f;
			m_w = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_x; // 0x1C (28)
		float m_y; // 0x20 (32)
		float m_z; // 0x24 (36)
		float m_w; // 0x28 (40)
	}; // 0x30 (48)
}

