///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/MeshVariationDatabaseEntry.h>
#include <fb/MeshVariationDatabaseRedirectEntry.h>

namespace fb {
	class MeshVariationDatabase : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshVariationDatabase"); }
		virtual ~MeshVariationDatabase() override {}
		MeshVariationDatabase() {
		};

		Array<MeshVariationDatabaseEntry> m_entries; // 0x18 (24)
		Array<MeshVariationDatabaseRedirectEntry> m_redirectEntries; // 0x20 (32)
	}; // 0x28 (40)
}

