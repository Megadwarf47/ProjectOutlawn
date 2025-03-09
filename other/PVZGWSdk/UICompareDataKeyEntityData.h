///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UICompareDataKeyEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICompareDataKeyEntityData"); }
		virtual ~UICompareDataKeyEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UICompareDataKeyEntityData() {
			m_fireEventOnInit = false;
		};

		UISimpleDataSource m_dataSource; // 0x18 (24)
		Array<String> m_values; // 0x28 (40)
		bool m_fireEventOnInit; // 0x30 (48)
	}; // 0x38 (56)
}

