///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/UIResourceTableEntry.h>

namespace fb {
	class UIResourceTable : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIResourceTable"); }
		virtual ~UIResourceTable() override {}
		UIResourceTable() {
		};

		Array<UIResourceTableEntry> m_entries; // 0x18 (24)
	}; // 0x20 (32)
}

