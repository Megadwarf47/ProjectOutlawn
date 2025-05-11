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
	class TransformBuilderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformBuilderEntityData"); }
		virtual ~TransformBuilderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformBuilderEntityData() {
			m_realm = Realm::Realm_Client;
			m_left = Vec3(1.f, 0.f, 0.f);
			m_up = Vec3(0.f, 1.f, 0.f);
			m_forward = Vec3(0.f, 0.f, 1.f);
			m_isWorldSpace = false;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_left; // 0x20 (32)
		Vec3 m_up; // 0x30 (48)
		Vec3 m_forward; // 0x40 (64)
		Vec3 m_trans; // 0x50 (80)
		bool m_isWorldSpace; // 0x60 (96)
	}; // 0x70 (112)
}

