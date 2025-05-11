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
	class FloatHubEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatHubEntityData"); }
		virtual ~FloatHubEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FloatHubEntityData() {
			m_realm = Realm::Realm_Client;
			m_inputCount = 2;
			m_inputSelect = 0;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_inputCount; // 0x1C (28)
		s32 m_inputSelect; // 0x20 (32)
	}; // 0x28 (40)
}

