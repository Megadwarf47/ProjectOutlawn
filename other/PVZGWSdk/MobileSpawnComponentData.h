///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class MobileSpawnComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MobileSpawnComponentData"); }
		virtual ~MobileSpawnComponentData() override {}
		MobileSpawnComponentData() {
			m_parachuteSpawnDistance = 0.f;
			m_parachuteSpawnRadiusMin = 0.f;
			m_parachuteSpawnRadiusMax = 0.f;
			m_enterMobileSpawnPoint = false;
			m_parachuteInstantDeployAtSpawn = false;
		};

		float m_parachuteSpawnDistance; // 0x70 (112)
		float m_parachuteSpawnRadiusMin; // 0x74 (116)
		float m_parachuteSpawnRadiusMax; // 0x78 (120)
		bool m_enterMobileSpawnPoint; // 0x7C (124)
		bool m_parachuteInstantDeployAtSpawn; // 0x7D (125)
	}; // 0x80 (128)
}

