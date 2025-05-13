///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>

namespace fb {
	class ModsJumpComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsJumpComponentData"); }
		virtual ~ModsJumpComponentData() override {}
		ModsJumpComponentData() {
			m_jumpMultiplier = 1.f;
		};

		float m_jumpMultiplier; // 0xD0 (208)
	}; // 0xE0 (224)
}

