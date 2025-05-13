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
	class CompareBoolEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CompareBoolEntityData"); }
		virtual ~CompareBoolEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CompareBoolEntityData() {
			m_realm = Realm::Realm_Server;
			m_bool = false;
			m_triggerOnPropertyChange = false;
			m_triggerOnStart = false;
			m_alwaysSend = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_bool; // 0x1C (28)
		bool m_triggerOnPropertyChange; // 0x1D (29)
		bool m_triggerOnStart; // 0x1E (30)
		bool m_alwaysSend; // 0x1F (31)
	}; // 0x20 (32)
}

