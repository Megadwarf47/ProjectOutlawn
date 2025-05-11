///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StaticModelEntityData.h>

namespace fb {
	class FenceModelEntityData : public StaticModelEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FenceModelEntityData"); }
		virtual ~FenceModelEntityData() override {}
		FenceModelEntityData() {
			m_width = 0.f;
			m_angle = 0.f;
		};

		float m_width; // 0xE0 (224)
		float m_angle; // 0xE4 (228)
	}; // 0xF0 (240)
}

