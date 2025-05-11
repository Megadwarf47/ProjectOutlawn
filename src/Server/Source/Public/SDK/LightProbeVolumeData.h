///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class LightProbeVolumeData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LightProbeVolumeData"); }
		virtual ~LightProbeVolumeData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LightProbeVolumeData() {
			m_xres = 1;
			m_yres = 1;
			m_zres = 1;
			m_blendDistance = 1.f;
			m_priority = 0;
		};

		u32 m_xres; // 0x60 (96)
		u32 m_yres; // 0x64 (100)
		u32 m_zres; // 0x68 (104)
		float m_blendDistance; // 0x6C (108)
		s32 m_priority; // 0x70 (112)
	}; // 0x80 (128)
}

