///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class IndirectCubeMapData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IndirectCubeMapData"); }
		virtual ~IndirectCubeMapData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		IndirectCubeMapData() {
			m_resolution = 16;
			m_scale = 1.f;
			m_fadeDistance = 0.f;
			m_enable = true;
		};

		u32 m_resolution; // 0x60 (96)
		float m_scale; // 0x64 (100)
		float m_fadeDistance; // 0x68 (104)
		bool m_enable; // 0x6C (108)
	}; // 0x70 (112)
}

