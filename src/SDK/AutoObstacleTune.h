///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class ObstacleDat;
}

namespace fb {
	class AutoObstacleTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AutoObstacleTune"); }
		virtual ~AutoObstacleTune() override {}
		AutoObstacleTune() {
			m_delay = 0.5f;
			m_autoCreateObstacle = false;
		};

		float m_delay; // 0x18 (24)
		CtrRef<ObstacleDat> m_obstacleDat; // 0x20 (32)
		bool m_autoCreateObstacle; // 0x28 (40)
	}; // 0x30 (48)
}

