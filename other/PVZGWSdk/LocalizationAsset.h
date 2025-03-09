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
	class UITextDatabase;
}

namespace fb {
	class LocalizationAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalizationAsset"); }
		virtual ~LocalizationAsset() override {}
		LocalizationAsset() {
		};

		RefArray<UITextDatabase> m_localizedTexts; // 0x18 (24)
	}; // 0x20 (32)
}

