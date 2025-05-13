///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>

namespace fb {
	class PVZSoldierHealthComponentInputRestrictionAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierHealthComponentInputRestrictionAsset"); }
		virtual ~PVZSoldierHealthComponentInputRestrictionAsset() override {}
		PVZSoldierHealthComponentInputRestrictionAsset() {
		};

		Array<s32> m_excludedInputActions; // 0x18 (24)
	}; // 0x20 (32)
}

