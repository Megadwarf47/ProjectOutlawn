///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/InspectViewPointData.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class TargetCameraData;
}

namespace fb {
	class InspectEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InspectEntityData"); }
		virtual ~InspectEntityData() override {}
		InspectEntityData() {
			m_minLookAtHeight = 1.f;
			m_maxLookAtHeight = 1.f;
			m_minDistance = 1.f;
			m_maxDistance = 3.f;
			m_zoomScrollSpeed = 0.1f;
			m_zoomScrollAcceleration = 2.f;
		};

		RefArray<TargetCameraData> m_cameras; // 0x18 (24)
		Vec3 m_centerOffset; // 0x20 (32)
		Array<InspectViewPointData> m_viewPoints; // 0x30 (48)
		float m_minLookAtHeight; // 0x38 (56)
		float m_maxLookAtHeight; // 0x3C (60)
		float m_minDistance; // 0x40 (64)
		float m_maxDistance; // 0x44 (68)
		float m_zoomScrollSpeed; // 0x48 (72)
		float m_zoomScrollAcceleration; // 0x4C (76)
		AntRef m_animationSignal; // 0x50 (80)
		String m_uiName; // 0x68 (104)
	}; // 0x70 (112)
}

