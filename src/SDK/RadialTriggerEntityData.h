///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RadialTriggerData.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class RadialTriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadialTriggerEntityData"); }
		virtual ~RadialTriggerEntityData() override {}
		RadialTriggerEntityData() {
			m_maxTransformDistance = 2.f;
			m_useMaxTransformDistance = false;
			m_enabled = true;
		};

		RadialTriggerData m_triggerData; // 0x60 (96)
		float m_maxTransformDistance; // 0x68 (104)
		bool m_useMaxTransformDistance; // 0x6C (108)
		bool m_enabled; // 0x6D (109)
	}; // 0x70 (112)
}

