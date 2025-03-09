///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BaseShapeData.h>
#include <fb/LinearTransform.h>
#include <fb/Vec3.h>

namespace fb {
	class OBBData : public BaseShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OBBData"); }
		virtual ~OBBData() override {}
		OBBData() {
			m_halfExtents = Vec3(0.5f, 0.5f, 0.5f);
		};

		LinearTransform m_transform; // 0x20 (32)
		Vec3 m_halfExtents; // 0x60 (96)
	}; // 0x70 (112)
}

