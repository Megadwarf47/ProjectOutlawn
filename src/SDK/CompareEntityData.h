///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CompareOp.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class CompareEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareEntityData"); }
		virtual ~CompareEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareEntityData() {
			m_realm = Realm::Realm_Client;
			m_operator = CompareOp::CompareOp_Greater;
			m_floatIn0 = 0.f;
			m_floatIn1 = 0.f;
			m_intIn0 = 0;
			m_intIn1 = 0;
		};

		Realm m_realm; // 0x18 (24)
		CompareOp m_operator; // 0x1C (28)
		float m_floatIn0; // 0x20 (32)
		float m_floatIn1; // 0x24 (36)
		s32 m_intIn0; // 0x28 (40)
		s32 m_intIn1; // 0x2C (44)
	}; // 0x30 (48)
}

