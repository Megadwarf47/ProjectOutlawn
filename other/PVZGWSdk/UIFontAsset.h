///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class UITextDatabase;
}

namespace fb {
	class UIFontAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIFontAsset"); }
		virtual ~UIFontAsset() override {}
		UIFontAsset() {
			m_numericsOnly = false;
			m_bold = false;
			m_completeKorean = false;
			m_completeJapanese = false;
			m_completeTraditionalChinese = false;
		};

		String m_sourceFile; // 0x18 (24)
		CtrRef<UITextDatabase> m_textDatabase; // 0x20 (32)
		Array<String> m_scaleformFontName; // 0x28 (40)
		bool m_numericsOnly; // 0x30 (48)
		bool m_bold; // 0x31 (49)
		bool m_completeKorean; // 0x32 (50)
		bool m_completeJapanese; // 0x33 (51)
		bool m_completeTraditionalChinese; // 0x34 (52)
	}; // 0x38 (56)
}

