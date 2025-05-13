///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class RadiosityMaterial : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadiosityMaterial"); }
		virtual ~RadiosityMaterial() override {}
		RadiosityMaterial() {
			m_emissive = false;
			m_color = Vec3(0.3f, 0.3f, 0.3f);
		};

		String m_name; // 0x10 (16)
		bool m_emissive; // 0x18 (24)
		Vec3 m_color; // 0x20 (32)
	}; // 0x30 (48)
}

