///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIScreenPurpose.h>
#include <fb/UIViewBaseAsset.h>

namespace fb {
	class UIAsset;
}

namespace fb {
	class UIScreenAsset : public UIViewBaseAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScreenAsset"); }
		virtual ~UIScreenAsset() override {}
		UIScreenAsset() {
			m_purpose = UIScreenPurpose::UIScreenPurpose_Standard;
		};

		CtrRef<UIAsset> m_uiAsset; // 0x50 (80)
		String m_swfPath; // 0x58 (88)
		UIScreenPurpose m_purpose; // 0x60 (96)
	}; // 0x68 (104)
}

