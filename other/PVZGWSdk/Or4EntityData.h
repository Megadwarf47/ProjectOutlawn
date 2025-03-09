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
	class Or4EntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Or4EntityData"); }
		virtual ~Or4EntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		Or4EntityData() {
			m_realm = Realm::Realm_Client;
			m_in1 = false;
			m_in2 = false;
			m_in3 = false;
			m_in4 = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_in1; // 0x1C (28)
		bool m_in2; // 0x1D (29)
		bool m_in3; // 0x1E (30)
		bool m_in4; // 0x1F (31)
	}; // 0x20 (32)
}

