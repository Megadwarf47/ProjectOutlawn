///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class OccluderVolumeEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OccluderVolumeEntityData"); }
		virtual ~OccluderVolumeEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		OccluderVolumeEntityData() {
			m_coverageValue = 0.f;
			m_occluderHighPriority = false;
			m_occluderIsConservative = true;
			m_visible = true;
		};

		float m_coverageValue; // 0x60 (96)
		bool m_occluderHighPriority; // 0x64 (100)
		bool m_occluderIsConservative; // 0x65 (101)
		bool m_visible; // 0x66 (102)
	}; // 0x70 (112)
}

