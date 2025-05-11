///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/VectorShapeData.h>

namespace fb {
	class WaypointData;
}

namespace fb {
	class WaypointsShapeData : public VectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaypointsShapeData"); }
		virtual ~WaypointsShapeData() override {}
		WaypointsShapeData() {
		};

		RefArray<WaypointData> m_waypoints; // 0x28 (40)
	}; // 0x30 (48)
}

