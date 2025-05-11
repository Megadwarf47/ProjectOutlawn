///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SharedBundleBaseAsset.h>

namespace fb {
	class Blueprint;
}

namespace fb {
	class BlueprintBundle : public SharedBundleBaseAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlueprintBundle"); }
		virtual ~BlueprintBundle() override {}
		BlueprintBundle() {
			m_addBlueprintToNetworkRegistry = true;
		};

		CtrRef<Blueprint> m_blueprint; // 0x18 (24)
		bool m_addBlueprintToNetworkRegistry; // 0x20 (32)
	}; // 0x28 (40)
}

