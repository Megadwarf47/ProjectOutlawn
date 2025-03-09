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
#include <fb/Vec4.h>

namespace fb {
	class VecSplitterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VecSplitterEntityData"); }
		virtual ~VecSplitterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		VecSplitterEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		Vec3 m_vec3; // 0x20 (32)
		Vec4 m_vec4; // 0x30 (48)
	}; // 0x40 (64)
}

