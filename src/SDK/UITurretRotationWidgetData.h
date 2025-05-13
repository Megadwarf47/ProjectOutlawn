///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UITurretRotationWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITurretRotationWidgetData"); }
		virtual ~UITurretRotationWidgetData() override {}
		UITurretRotationWidgetData() {
			m_mainGunYOffset = 0;
			m_machineGunYOffset = 0;
		};

		String m_tankBodyTexture; // 0x68 (104)
		String m_mainGunTexture; // 0x70 (112)
		String m_machineGunTexture; // 0x78 (120)
		String m_gunnerModeProperty; // 0x80 (128)
		s32 m_mainGunYOffset; // 0x88 (136)
		s32 m_machineGunYOffset; // 0x8C (140)
	}; // 0x90 (144)
}

