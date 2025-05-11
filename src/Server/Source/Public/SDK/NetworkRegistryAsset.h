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
	class DataContainer;
}

namespace fb {
	class NetworkRegistryAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkRegistryAsset"); }
		virtual ~NetworkRegistryAsset() override {}
		NetworkRegistryAsset() {
		};

		RefArray<DataContainer> m_objects; // 0x18 (24)
	}; // 0x20 (32)
}

