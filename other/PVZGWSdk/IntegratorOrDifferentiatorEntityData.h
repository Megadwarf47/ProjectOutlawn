///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/EntityUpdateOrder.h>
#include <fb/Realm.h>

namespace fb {
	class IntegratorOrDifferentiatorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntegratorOrDifferentiatorEntityData"); }
		virtual ~IntegratorOrDifferentiatorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		IntegratorOrDifferentiatorEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_updatePass = EntityUpdateOrder::EntityUpdateOrder_Async;
			m_startValue = 0.f;
			m_input = 0.f;
			m_maxValue = 100.f;
			m_minValue = -100.f;
			m_bounded = true;
		};

		Realm m_realm; // 0x18 (24)
		EntityUpdateOrder m_updatePass; // 0x1C (28)
		float m_startValue; // 0x20 (32)
		float m_input; // 0x24 (36)
		float m_maxValue; // 0x28 (40)
		float m_minValue; // 0x2C (44)
		bool m_bounded; // 0x30 (48)
	}; // 0x38 (56)
}

