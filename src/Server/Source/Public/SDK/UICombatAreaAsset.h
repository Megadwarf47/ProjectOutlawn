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
	class UICombatAreaAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICombatAreaAsset"); }
		virtual ~UICombatAreaAsset() override {}
		UICombatAreaAsset() {
		};

		String m_prefix; // 0x18 (24)
	}; // 0x20 (32)
}

