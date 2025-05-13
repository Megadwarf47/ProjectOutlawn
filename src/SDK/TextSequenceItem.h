///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class TextSequenceItem : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextSequenceItem"); }
		virtual ~TextSequenceItem() override {}
		TextSequenceItem() {
			m_timeToShow = 0.f;
			m_useEntityScreenPosition = true;
			m_textColor = Vec3(0.f, 1.f, 0.f);
		};

		String m_text; // 0x10 (16)
		Vec2 m_screenPosition; // 0x18 (24)
		float m_timeToShow; // 0x20 (32)
		String m_triggerEvent; // 0x28 (40)
		bool m_useEntityScreenPosition; // 0x30 (48)
		Vec3 m_textColor; // 0x40 (64)
	}; // 0x50 (80)
}

