///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LoosePartPhysicsData.h>

namespace fb {
	class CameraLoosePartPhysicsData : public LoosePartPhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraLoosePartPhysicsData"); }
		virtual ~CameraLoosePartPhysicsData() override {}
		CameraLoosePartPhysicsData() {
			m_scale = 1.f;
		};

		float m_scale; // 0x18 (24)
	}; // 0x20 (32)
}

