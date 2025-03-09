///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class MenuIdAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MenuIdAsset"); }
		virtual ~MenuIdAsset() override {}
		MenuIdAsset() {
		};

		String m_shortName; // 0x18 (24)
	}; // 0x20 (32)
}

