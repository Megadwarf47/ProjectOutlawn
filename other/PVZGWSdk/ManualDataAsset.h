///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/ManualDataEntry.h>

namespace fb {
	class ManualDataAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ManualDataAsset"); }
		virtual ~ManualDataAsset() override {}
		ManualDataAsset() {
		};

		Array<ManualDataEntry> m_entries; // 0x18 (24)
	}; // 0x20 (32)
}

