///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class TrajectoryEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrajectoryEntityData"); }
		virtual ~TrajectoryEntityData() override {}
		TrajectoryEntityData() {
		};

		LinearTransform m_outTransform; // 0x20 (32)
	}; // 0x60 (96)
}

