///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CameraRecoilData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraRecoilData"); }
		virtual ~CameraRecoilData() override {}
		CameraRecoilData() {
			m_springConstant = 150.f;
			m_springDamping = 0.2f;
			m_springMinThresholdAngle = 1.f;
		};

		float m_springConstant; // 0x10 (16)
		float m_springDamping; // 0x14 (20)
		float m_springMinThresholdAngle; // 0x18 (24)
	}; // 0x20 (32)
}

