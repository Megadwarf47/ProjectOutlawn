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
	class CompareFloatRangeEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareFloatRangeEntityData"); }
		virtual ~CompareFloatRangeEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareFloatRangeEntityData() {
			m_realm = Realm::Realm_Server;
			m_value = 0.f;
			m_min = 0.f;
			m_max = 0.f;
			m_triggerOnPropertyChange = false;
			m_triggerOnStart = false;
		};

		Realm m_realm; // 0x18 (24)
		float m_value; // 0x1C (28)
		float m_min; // 0x20 (32)
		float m_max; // 0x24 (36)
		bool m_triggerOnPropertyChange; // 0x28 (40)
		bool m_triggerOnStart; // 0x29 (41)
	}; // 0x30 (48)
}

