///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LanguageFormat.h>
#include <fb/SystemSettings.h>
#include <fb/UISystemType.h>

namespace fb {
	class ProfileOptionsAsset;
	class UIBundlesAsset;
}

namespace fb {
	class UISettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISettings"); }
		virtual ~UISettings() override {}
		UISettings() {
			m_system = UISystemType::UISystem_None;
			m_language = LanguageFormat::LanguageFormat_English;
			m_oneBundlePerGraph = false;
			m_drawEnable = true;
		};

		UISystemType m_system; // 0x20 (32)
		CtrRef<UIBundlesAsset> m_bundles; // 0x28 (40)
		CtrRef<ProfileOptionsAsset> m_profileOptions; // 0x30 (48)
		LanguageFormat m_language; // 0x38 (56)
		bool m_oneBundlePerGraph; // 0x3C (60)
		bool m_drawEnable; // 0x3D (61)
	}; // 0x40 (64)
}

