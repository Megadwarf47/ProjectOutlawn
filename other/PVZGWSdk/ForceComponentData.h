///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ComponentData.h>

namespace fb {
	class ForceComponentData : public ComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ForceComponentData"); }
		virtual ~ForceComponentData() override {}
		ForceComponentData() {
			m_windScale = 1.f;
		};

		float m_windScale; // 0x70 (112)
	}; // 0x80 (128)
}

