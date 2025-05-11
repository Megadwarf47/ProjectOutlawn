///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/BlueprintBundleReference.h>

namespace fb {
	class BlueprintBundleCollection : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlueprintBundleCollection"); }
		virtual ~BlueprintBundleCollection() override {}
		BlueprintBundleCollection() {
		};

		Array<BlueprintBundleReference> m_bundles; // 0x18 (24)
	}; // 0x20 (32)
}

