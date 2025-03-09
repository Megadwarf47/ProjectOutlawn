///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class CharacterPhysicsData;
}

namespace fb {
	class CharacterPhysicsComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterPhysicsComponentData"); }
		virtual ~CharacterPhysicsComponentData() override {}
		CharacterPhysicsComponentData() {
			m_enableCollisionOnSpawn = true;
		};

		CtrRef<CharacterPhysicsData> m_characterPhysics; // 0x70 (112)
		bool m_enableCollisionOnSpawn; // 0x78 (120)
	}; // 0x80 (128)
}

