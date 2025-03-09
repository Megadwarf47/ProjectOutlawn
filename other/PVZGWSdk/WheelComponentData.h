///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BoneComponentData.h>
#include <fb/CtrRef.h>
#include <fb/WheelPhysicsType.h>

namespace fb {
	class WheelConfigData;
}

namespace fb {
	class WheelComponentData : public BoneComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WheelComponentData"); }
		virtual ~WheelComponentData() override {}
		WheelComponentData() {
			m_physicsType = WheelPhysicsType::wptNormal;
			m_effectClampVelocity = 0.f;
		};

		CtrRef<WheelConfigData> m_config; // 0x70 (112)
		WheelPhysicsType m_physicsType; // 0x78 (120)
		float m_effectClampVelocity; // 0x7C (124)
	}; // 0x80 (128)
}

