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
	class PresenceServiceData;
}

namespace fb {
	class OnlineServicesAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OnlineServicesAsset"); }
		virtual ~OnlineServicesAsset() override {}
		OnlineServicesAsset() {
		};

		RefArray<PresenceServiceData> m_onlineServices; // 0x18 (24)
	}; // 0x20 (32)
}

