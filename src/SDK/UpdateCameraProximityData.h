///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/Vec3.h>

namespace fb {
	class UpdateCameraProximityData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateCameraProximityData"); }
		virtual ~UpdateCameraProximityData() override {}
		UpdateCameraProximityData() {
			m_forwardOffset = 0.f;
			m_size = Vec3(1.f, 1.f, 1.f);
		};

		float m_forwardOffset; // 0x28 (40)
		Vec3 m_size; // 0x30 (48)
	}; // 0x40 (64)
}

