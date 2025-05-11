///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/InputRestrictionState.h>

namespace fb {
	class InputRestrictionAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputRestrictionAsset"); }
		virtual ~InputRestrictionAsset() override {}
		InputRestrictionAsset() {
		};

		InputRestrictionState m_restrictedState; // 0x18 (24)
	}; // 0x28 (40)
}

