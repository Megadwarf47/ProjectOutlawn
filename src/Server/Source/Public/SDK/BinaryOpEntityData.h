///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BinaryOp.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class BinaryOpEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BinaryOpEntityData"); }
		virtual ~BinaryOpEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		BinaryOpEntityData() {
			m_realm = Realm::Realm_Client;
			m_in = 0;
		};

		Realm m_realm; // 0x18 (24)
		Array<BinaryOp> m_operators; // 0x20 (32)
		s32 m_in; // 0x28 (40)
	}; // 0x30 (48)
}

