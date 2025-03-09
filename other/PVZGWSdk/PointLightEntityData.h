///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalLightEntityData.h>

namespace fb {
	class PointLightEntityData : public LocalLightEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PointLightEntityData"); }
		virtual ~PointLightEntityData() override {}
		PointLightEntityData() {
			m_width = 0.f;
			m_translucencyAmbient = 0.f;
			m_translucencyScale = 0.f;
			m_translucencyPower = 8.f;
			m_translucencyDistortion = 0.1f;
		};

		float m_width; // 0xB0 (176)
		float m_translucencyAmbient; // 0xB4 (180)
		float m_translucencyScale; // 0xB8 (184)
		float m_translucencyPower; // 0xBC (188)
		float m_translucencyDistortion; // 0xC0 (192)
	}; // 0xD0 (208)
}

