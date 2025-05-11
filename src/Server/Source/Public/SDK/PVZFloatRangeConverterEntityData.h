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
	class PVZFloatRangeConverterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZFloatRangeConverterEntityData"); }
		virtual ~PVZFloatRangeConverterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PVZFloatRangeConverterEntityData() {
			m_realm = Realm::Realm_Client;
			m_inStart = 0.f;
			m_inEnd = 1.f;
			m_outStart = 0.f;
			m_outEnd = 1.f;
			m_inputValue = 0.f;
			m_fireEventsOnInit = false;
			m_invert = false;
			m_clamp = true;
		};

		Realm m_realm; // 0x18 (24)
		float m_inStart; // 0x1C (28)
		float m_inEnd; // 0x20 (32)
		float m_outStart; // 0x24 (36)
		float m_outEnd; // 0x28 (40)
		float m_inputValue; // 0x2C (44)
		bool m_fireEventsOnInit; // 0x30 (48)
		bool m_invert; // 0x31 (49)
		bool m_clamp; // 0x32 (50)
	}; // 0x38 (56)
}

