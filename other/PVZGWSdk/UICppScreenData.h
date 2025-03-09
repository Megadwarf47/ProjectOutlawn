///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class UICppScreenData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICppScreenData"); }
		virtual ~UICppScreenData() override {}
		UICppScreenData() {
			m_fieldOfView = 45.f;
			m_screenLayoutWidth = 1280.f;
			m_screenLayoutHeight = 720.f;
			m_scaleUpAndKeepAspectRatio = false;
			m_flashCompatibilityMode = false;
			m_eatAllInput = false;
			m_layoutWithSafeZone = true;
		};

		float m_fieldOfView; // 0x18 (24)
		float m_screenLayoutWidth; // 0x1C (28)
		float m_screenLayoutHeight; // 0x20 (32)
		bool m_scaleUpAndKeepAspectRatio; // 0x24 (36)
		bool m_flashCompatibilityMode; // 0x25 (37)
		bool m_eatAllInput; // 0x26 (38)
		bool m_layoutWithSafeZone; // 0x27 (39)
	}; // 0x28 (40)
}

