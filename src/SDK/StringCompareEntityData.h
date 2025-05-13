///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/String.h>

namespace fb {
	class StringCompareEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StringCompareEntityData"); }
		virtual ~StringCompareEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		StringCompareEntityData() {
		};

		Array<String> m_compareStrings; // 0x18 (24)
		String m_compareIn; // 0x20 (32)
	}; // 0x28 (40)
}

