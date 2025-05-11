///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EndPointData.h>
#include <fb/MovingBodyData.h>
#include <fb/Vec3.h>

namespace fb {
	class LinearMovingBodyData : public MovingBodyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinearMovingBodyData"); }
		virtual ~LinearMovingBodyData() override {}
		LinearMovingBodyData() {
		};

		Vec3 m_axis; // 0x20 (32)
		EndPointData m_start; // 0x30 (48)
		EndPointData m_end; // 0x44 (68)
	}; // 0x60 (96)
}

