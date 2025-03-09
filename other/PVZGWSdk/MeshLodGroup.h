///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class MeshLodGroup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshLodGroup"); }
		virtual ~MeshLodGroup() override {}
		MeshLodGroup() {
			m_lod1Distance = 50.f;
			m_lod2Distance = 100.f;
			m_lod3Distance = 150.f;
			m_lod4Distance = 200.f;
			m_lod5Distance = 250.f;
			m_lod6Distance = 1025.f;
			m_shadowDistance = 0.f;
			m_cullScreenArea = 0.02f;
		};

		float m_lod1Distance; // 0x18 (24)
		float m_lod2Distance; // 0x1C (28)
		float m_lod3Distance; // 0x20 (32)
		float m_lod4Distance; // 0x24 (36)
		float m_lod5Distance; // 0x28 (40)
		float m_lod6Distance; // 0x2C (44)
		float m_shadowDistance; // 0x30 (48)
		float m_cullScreenArea; // 0x34 (52)
		String m_runtimeShortName; // 0x38 (56)
	}; // 0x40 (64)
}

