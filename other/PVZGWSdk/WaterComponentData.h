///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class WaterComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterComponentData"); }
		virtual ~WaterComponentData() override {}
		WaterComponentData() {
			m_waterDeceleration = 0.5f;
		};

		float m_waterDeceleration; // 0x70 (112)
	}; // 0x80 (128)
}

