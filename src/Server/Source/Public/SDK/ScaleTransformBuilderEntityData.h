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
	class ScaleTransformBuilderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScaleTransformBuilderEntityData"); }
		virtual ~ScaleTransformBuilderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ScaleTransformBuilderEntityData() {
			m_realm = Realm::Realm_Client;
			m_scale = Vec3(1.f, 1.f, 1.f);
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_scale; // 0x20 (32)
	}; // 0x30 (48)
}

