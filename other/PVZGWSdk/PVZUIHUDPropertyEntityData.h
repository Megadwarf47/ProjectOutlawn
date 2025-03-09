///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PVZUIHUDPropertyType.h>
#include <fb/String.h>

namespace fb {
	class PVZUIHUDPropertyEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIHUDPropertyEntityData"); }
		virtual ~PVZUIHUDPropertyEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZUIHUDPropertyEntityData() {
			m_propertyType = PVZUIHUDPropertyType::PropertyType_Counter;
			m_stateIn = 0;
			m_floatIn = 0.f;
			m_intIn = 0;
			m_intRange1 = 0;
			m_intRange2 = 0;
		};

		String m_titleID; // 0x18 (24)
		PVZUIHUDPropertyType m_propertyType; // 0x20 (32)
		s32 m_stateIn; // 0x24 (36)
		float m_floatIn; // 0x28 (40)
		s32 m_intIn; // 0x2C (44)
		s32 m_intRange1; // 0x30 (48)
		s32 m_intRange2; // 0x34 (52)
		String m_rangeID; // 0x38 (56)
		String m_titleIn; // 0x40 (64)
		String m_statusText; // 0x48 (72)
	}; // 0x50 (80)
}

