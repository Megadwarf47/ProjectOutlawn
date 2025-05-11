///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class UIElementSlice9FillData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementSlice9FillData"); }
		virtual ~UIElementSlice9FillData() override {}
		UIElementSlice9FillData() {
			m_marginTop = 0;
			m_marginLeft = 0;
			m_marginRight = 0;
			m_marginBottom = 0;
			m_expandTop = 0;
			m_expandLeft = 0;
			m_expandRight = 0;
			m_expandBottom = 0;
			m_scale = 1.f;
			m_tiledFill = false;
			m_fillCenter = false;
		};

		String m_textureId; // 0x18 (24)
		s32 m_marginTop; // 0x20 (32)
		s32 m_marginLeft; // 0x24 (36)
		s32 m_marginRight; // 0x28 (40)
		s32 m_marginBottom; // 0x2C (44)
		s32 m_expandTop; // 0x30 (48)
		s32 m_expandLeft; // 0x34 (52)
		s32 m_expandRight; // 0x38 (56)
		s32 m_expandBottom; // 0x3C (60)
		float m_scale; // 0x40 (64)
		bool m_tiledFill; // 0x44 (68)
		bool m_fillCenter; // 0x45 (69)
	}; // 0x48 (72)
}

