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
	class FloatSelectEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatSelectEntityData"); }
		virtual ~FloatSelectEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FloatSelectEntityData() {
			m_realm = Realm::Realm_Client;
			m_inPosOrZero = 0.f;
			m_inNeg = 0.f;
			m_select = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_inPosOrZero; // 0x1C (28)
		float m_inNeg; // 0x20 (32)
		float m_select; // 0x24 (36)
	}; // 0x28 (40)
}

