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
	class XorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("XorEntityData"); }
		virtual ~XorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		XorEntityData() {
			m_realm = Realm::Realm_Client;
			m_in1 = false;
			m_in2 = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_in1; // 0x1C (28)
		bool m_in2; // 0x1D (29)
	}; // 0x20 (32)
}

