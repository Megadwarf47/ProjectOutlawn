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
	class TransformSelectorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformSelectorEntityData"); }
		virtual ~TransformSelectorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformSelectorEntityData() {
			m_realm = Realm::Realm_Client;
			m_selection = false;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_in1; // 0x20 (32)
		LinearTransform m_in2; // 0x60 (96)
		bool m_selection; // 0xA0 (160)
	}; // 0xB0 (176)
}

