///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterSpawnReferenceObjectData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class PVZCharacterSpawnReferenceObjectData : public CharacterSpawnReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCharacterSpawnReferenceObjectData"); }
		virtual ~PVZCharacterSpawnReferenceObjectData() override {}
		PVZCharacterSpawnReferenceObjectData() {
			m_maxLineOfSightTestDistance = 0.f;
			m_excludeFromSpawnManager = false;
			m_ignoreFromBossMode = false;
		};

		LinearTransform m_serverShootSpaceTransform; // 0x190 (400)
		float m_maxLineOfSightTestDistance; // 0x1D0 (464)
		bool m_excludeFromSpawnManager; // 0x1D4 (468)
		bool m_ignoreFromBossMode; // 0x1D5 (469)
	}; // 0x1E0 (480)
}

