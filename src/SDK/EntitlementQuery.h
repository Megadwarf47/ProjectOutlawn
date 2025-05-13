///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/EntitlementData.h>
#include <fb/GamePlatform.h>
#include <fb/String.h>

namespace fb {
	class EntitlementQuery : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntitlementQuery"); }
		virtual ~EntitlementQuery() override {}
		EntitlementQuery() {
			m_platform = GamePlatform::GamePlatform_Invalid;
		};

		Array<EntitlementData> m_entitlementsData; // 0x18 (24)
		Array<String> m_groupNames; // 0x20 (32)
		GamePlatform m_platform; // 0x28 (40)
		String m_entitlementTag; // 0x30 (48)
		String m_productId; // 0x38 (56)
		String m_projectId; // 0x40 (64)
	}; // 0x48 (72)
}

