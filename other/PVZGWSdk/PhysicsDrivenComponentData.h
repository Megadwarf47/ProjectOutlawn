///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class PhysicsDrivenComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsDrivenComponentData"); }
		virtual ~PhysicsDrivenComponentData() override {}
		PhysicsDrivenComponentData() {
			m_sprintMultiplier = 1.f;
		};

		float m_sprintMultiplier; // 0x70 (112)
	}; // 0x80 (128)
}

