///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>
#include <fb/String.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UISetValueData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISetValueData"); }
		virtual ~UISetValueData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UISetValueData() {
			m_overrideLocalPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_Invalid;
			m_intValue = 1;
			m_floatValue = 1.f;
			m_boolValue = true;
			m_allLocalPlayers = false;
		};

		UISimpleDataSource m_dataSource; // 0x18 (24)
		LocalPlayerIndex m_overrideLocalPlayerIndex; // 0x28 (40)
		s32 m_intValue; // 0x2C (44)
		float m_floatValue; // 0x30 (48)
		String m_stringValue; // 0x38 (56)
		bool m_boolValue; // 0x40 (64)
		bool m_allLocalPlayers; // 0x41 (65)
	}; // 0x48 (72)
}

