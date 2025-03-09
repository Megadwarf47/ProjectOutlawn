///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class TransformToRotationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformToRotationEntityData"); }
		virtual ~TransformToRotationEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformToRotationEntityData() {
			m_realm = Realm::Realm_Client;
			m_degrees = true;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in; // 0x20 (32)
		bool m_degrees; // 0x60 (96)
	}; // 0x70 (112)
}

