///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class InputModifierEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputModifierEntityData"); }
		virtual ~InputModifierEntityData() override {}
		InputModifierEntityData() {
			m_action = 899534898;
			m_offset = 0.f;
			m_scale = 1.f;
			m_enabled = false;
		};

		s32 m_action; // 0x18 (24)
		float m_offset; // 0x1C (28)
		float m_scale; // 0x20 (32)
		bool m_enabled; // 0x24 (36)
	}; // 0x28 (40)
}

