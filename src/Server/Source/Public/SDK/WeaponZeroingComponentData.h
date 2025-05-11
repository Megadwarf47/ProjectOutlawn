///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class WeaponZeroingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponZeroingComponentData"); }
		virtual ~WeaponZeroingComponentData() override {}
		WeaponZeroingComponentData() {
			m_cycleInputAction = -1145593149;
			m_enabled = true;
		};

		s32 m_cycleInputAction; // 0x70 (112)
		bool m_enabled; // 0x74 (116)
	}; // 0x80 (128)
}

