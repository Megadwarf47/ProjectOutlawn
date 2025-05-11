///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class WaypointComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaypointComponentData"); }
		virtual ~WaypointComponentData() override {}
		WaypointComponentData() {
			m_looping = true;
		};

		bool m_looping; // 0x70 (112)
	}; // 0x80 (128)
}

