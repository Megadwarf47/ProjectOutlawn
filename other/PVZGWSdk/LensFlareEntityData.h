///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/LensFlareElement.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class LensFlareEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LensFlareEntityData"); }
		virtual ~LensFlareEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LensFlareEntityData() {
			m_occluderSize = 1.f;
			m_depthBias = 0.f;
			m_visible = true;
			m_debugDrawOccluder = false;
			m_halfRes = true;
		};

		float m_occluderSize; // 0x60 (96)
		float m_depthBias; // 0x64 (100)
		Array<LensFlareElement> m_elements; // 0x68 (104)
		bool m_visible; // 0x70 (112)
		bool m_debugDrawOccluder; // 0x71 (113)
		bool m_halfRes; // 0x72 (114)
	}; // 0x80 (128)
}

