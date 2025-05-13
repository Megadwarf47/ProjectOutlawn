///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class ObstacleDat;
}

namespace fb {
	class ObstacleControllerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObstacleControllerEntityData"); }
		virtual ~ObstacleControllerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		ObstacleControllerEntityData() {
			m_activeAtStart = true;
		};

		CtrRef<ObstacleDat> m_obstacleData; // 0x18 (24)
		bool m_activeAtStart; // 0x20 (32)
	}; // 0x28 (40)
}

