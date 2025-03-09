///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/MovementComponentBinding.h>

namespace fb {
	class MovementComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovementComponentData"); }
		virtual ~MovementComponentData() override {}
		MovementComponentData() {
			m_clientSidePhysicsControlled = false;
		};

		MovementComponentBinding m_movementBinding; // 0x70 (112)
		bool m_clientSidePhysicsControlled; // 0xD4 (212)
	}; // 0xE0 (224)
}

