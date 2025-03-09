///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class WaypointData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaypointData"); }
		virtual ~WaypointData() override {}
		WaypointData() {
			m_schematicsNameHash = 0;
			m_waypointId = 0;
			m_useClientsPosition = false;
		};

		s32 m_schematicsNameHash; // 0x10 (16)
		u32 m_waypointId; // 0x14 (20)
		bool m_useClientsPosition; // 0x18 (24)
	}; // 0x20 (32)
}

