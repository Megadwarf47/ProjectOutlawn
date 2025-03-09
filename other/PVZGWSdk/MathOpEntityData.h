///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/MathOp.h>
#include <fb/Realm.h>

namespace fb {
	class MathOpEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MathOpEntityData"); }
		virtual ~MathOpEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		MathOpEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		Array<MathOp> m_operators; // 0x20 (32)
	}; // 0x28 (40)
}

