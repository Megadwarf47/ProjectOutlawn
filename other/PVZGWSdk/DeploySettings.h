///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class DeploySettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeploySettings"); }
		virtual ~DeploySettings() override {}
		DeploySettings() {
			m_pcNavigationEnabled = false;
		};

		bool m_pcNavigationEnabled; // 0x20 (32)
	}; // 0x28 (40)
}

