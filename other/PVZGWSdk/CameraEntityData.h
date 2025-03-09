///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraEntityBaseData.h>

namespace fb {
	class CameraEntityData : public CameraEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraEntityData"); }
		virtual ~CameraEntityData() override {}
		CameraEntityData() {
			m_fov = 0.f;
		};

		float m_fov; // 0x80 (128)
	}; // 0x90 (144)
}

