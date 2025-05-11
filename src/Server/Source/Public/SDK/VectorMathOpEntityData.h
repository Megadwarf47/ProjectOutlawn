///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/VectorMathOp.h>

namespace fb {
	class VectorMathOpEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VectorMathOpEntityData"); }
		virtual ~VectorMathOpEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		VectorMathOpEntityData() {
			m_realm = Realm::Realm_Client;
			m_mathOperator = VectorMathOp::VectorMathOp_Add;
		};

		Realm m_realm; // 0x18 (24)
		VectorMathOp m_mathOperator; // 0x1C (28)
	}; // 0x20 (32)
}

