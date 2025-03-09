///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LocalPlayerIndex.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UIGetValueEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGetValueEntityData"); }
		virtual ~UIGetValueEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIGetValueEntityData() {
			m_overrideLocalPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_Invalid;
			m_assertOnWrongOutput = true;
		};

		UISimpleDataSource m_dataSource; // 0x18 (24)
		LocalPlayerIndex m_overrideLocalPlayerIndex; // 0x28 (40)
		bool m_assertOnWrongOutput; // 0x2C (44)
	}; // 0x30 (48)
}

