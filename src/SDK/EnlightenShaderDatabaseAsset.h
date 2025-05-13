///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class EnlightenShaderDatabaseAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenShaderDatabaseAsset"); }
		virtual ~EnlightenShaderDatabaseAsset() override {}
		EnlightenShaderDatabaseAsset() {
			m_numShaders = 0;
			m_databaseResource = ;
		};

		u32 m_numShaders; // 0x18 (24)
		ResourceRef m_databaseResource; // 0x20 (32)
	}; // 0x28 (40)
}

