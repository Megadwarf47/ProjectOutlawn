///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class UnlockGroup;
}

namespace fb {
	class UnlockTable : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockTable"); }
		virtual ~UnlockTable() override {}
		UnlockTable() {
		};

		String m_tableName; // 0x18 (24)
		RefArray<UnlockGroup> m_groups; // 0x20 (32)
	}; // 0x28 (40)
}

