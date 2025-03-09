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
	class ObstacleDat;
}

namespace fb {
	class ObstacleComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObstacleComponentData"); }
		virtual ~ObstacleComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		ObstacleComponentData() {
			m_activeAtStart = true;
		};

		CtrRef<ObstacleDat> m_obstacleData; // 0x70 (112)
		bool m_activeAtStart; // 0x78 (120)
	}; // 0x80 (128)
}

