///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class WeaponSpeedData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponSpeedData"); }
		virtual ~WeaponSpeedData() override {}
		WeaponSpeedData() {
			m_zoomOutSpeed = 1.f;
			m_zoomInSpeed = 1.f;
			m_unDeploySpeed = 1.f;
			m_deploySpeed = 1.f;
		};

		float m_zoomOutSpeed; // 0x10 (16)
		float m_zoomInSpeed; // 0x14 (20)
		float m_unDeploySpeed; // 0x18 (24)
		float m_deploySpeed; // 0x1C (28)
	}; // 0x20 (32)
}

