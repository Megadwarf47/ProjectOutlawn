///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/Vec3.h>

namespace fb {
	class Vector3EntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Vector3EntityData"); }
		virtual ~Vector3EntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		Vector3EntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_defaultVec3; // 0x20 (32)
	}; // 0x30 (48)
}

