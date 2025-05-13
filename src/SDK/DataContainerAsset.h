///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	class DataContainerAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataContainerAsset"); }
		virtual ~DataContainerAsset() override {}
		DataContainerAsset() {
		};

		CtrRef<DataContainer> m_data; // 0x18 (24)
	}; // 0x20 (32)
}

