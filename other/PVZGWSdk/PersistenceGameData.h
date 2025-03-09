///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class Asset;
}

namespace fb {
	class PersistenceGameData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceGameData"); }
		virtual ~PersistenceGameData() override {}
		PersistenceGameData() {
		};

		RefArray<Asset> m_assets; // 0x18 (24)
	}; // 0x20 (32)
}

