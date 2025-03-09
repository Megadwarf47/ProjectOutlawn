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
	class RotationTransformBuilderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RotationTransformBuilderEntityData"); }
		virtual ~RotationTransformBuilderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RotationTransformBuilderEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_rotation; // 0x20 (32)
	}; // 0x30 (48)
}

