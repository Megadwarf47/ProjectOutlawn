///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UI3dIconCompData.h>
#include <fb/Vec3.h>

namespace fb {
	class UIDamagetagCompData : public UI3dIconCompData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDamagetagCompData"); }
		virtual ~UIDamagetagCompData() override {}
		UIDamagetagCompData() {
			m_textColor = Vec3(0.741f, 0.114f, 0.18f);
			m_glowColor = Vec3(0.298f, 0.02f, 0.051f);
			m_displayTime = 1.f;
			m_combineEventsTime = 0.1f;
			m_verticalSpeed = 2.f;
			m_textSize = 32.f;
			m_textGlowSize = 3.f;
		};

		Vec3 m_textColor; // 0xC0 (192)
		Vec3 m_glowColor; // 0xD0 (208)
		float m_displayTime; // 0xE0 (224)
		float m_combineEventsTime; // 0xE4 (228)
		float m_verticalSpeed; // 0xE8 (232)
		float m_textSize; // 0xEC (236)
		float m_textGlowSize; // 0xF0 (240)
	}; // 0x100 (256)
}

