///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>

namespace fb {
	class WindowSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WindowSettings"); }
		virtual ~WindowSettings() override {}
		WindowSettings() {
			m_posX = 0;
			m_posY = 0;
			m_width = 0;
			m_height = 0;
			m_fullscreenMode = 1;
			m_fullscreenScreen = 0;
			m_refreshRate = 60.f;
			m_enableEscape = true;
			m_enableInputOnActivate = true;
			m_hibernateOnClose = false;
			m_hidden = false;
			m_minimized = false;
		};

		s32 m_posX; // 0x20 (32)
		s32 m_posY; // 0x24 (36)
		u32 m_width; // 0x28 (40)
		u32 m_height; // 0x2C (44)
		s32 m_fullscreenMode; // 0x30 (48)
		s32 m_fullscreenScreen; // 0x34 (52)
		float m_refreshRate; // 0x38 (56)
		bool m_enableEscape; // 0x3C (60)
		bool m_enableInputOnActivate; // 0x3D (61)
		bool m_hibernateOnClose; // 0x3E (62)
		bool m_hidden; // 0x3F (63)
		bool m_minimized; // 0x40 (64)
	}; // 0x48 (72)
}

