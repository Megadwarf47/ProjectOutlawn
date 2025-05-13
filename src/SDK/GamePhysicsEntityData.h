///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>

namespace fb {
	class PhysicsEntityData;
}

namespace fb {
	class GamePhysicsEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GamePhysicsEntityData"); }
		virtual ~GamePhysicsEntityData() override {}
		GamePhysicsEntityData() {
		};

		CtrRef<PhysicsEntityData> m_physicsData; // 0x80 (128)
	}; // 0x90 (144)
}

