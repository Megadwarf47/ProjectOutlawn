///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/UICreditsRow.h>

namespace fb {
	class UICreditsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICreditsAsset"); }
		virtual ~UICreditsAsset() override {}
		UICreditsAsset() {
		};

		Array<UICreditsRow> m_rows; // 0x18 (24)
	}; // 0x20 (32)
}

