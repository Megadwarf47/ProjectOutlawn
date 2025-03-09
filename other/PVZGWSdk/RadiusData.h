///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class RadiusData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadiusData"); }
		virtual ~RadiusData() override {}
		RadiusData() {
			m_radius = 0.45f;
			m_outerCushion = 0.09f;
			m_innerCushion = 0.09f;
		};

		float m_radius; // 0x18 (24)
		float m_outerCushion; // 0x1C (28)
		float m_innerCushion; // 0x20 (32)
	}; // 0x28 (40)
}

