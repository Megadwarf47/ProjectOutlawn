///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/LicenseInfo.h>

namespace fb {
	class LicenseConfiguration : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LicenseConfiguration"); }
		virtual ~LicenseConfiguration() override {}
		LicenseConfiguration() {
		};

		Array<LicenseInfo> m_licenses; // 0x18 (24)
	}; // 0x20 (32)
}

