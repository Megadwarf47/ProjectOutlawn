///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/OnlineProviderConfiguration.h>

namespace fb {
	class OnlineProviderAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OnlineProviderAsset"); }
		virtual ~OnlineProviderAsset() override {}
		OnlineProviderAsset() {
		};

		Array<OnlineProviderConfiguration> m_configurations; // 0x18 (24)
	}; // 0x20 (32)
}

