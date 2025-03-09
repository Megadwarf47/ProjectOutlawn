///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UISetupServerWizardCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISetupServerWizardCompData"); }
		virtual ~UISetupServerWizardCompData() override {}
		UISetupServerWizardCompData() {
			m_passwdMinLen = 6;
		};

		s32 m_passwdMinLen; // 0x30 (48)
	}; // 0x38 (56)
}

