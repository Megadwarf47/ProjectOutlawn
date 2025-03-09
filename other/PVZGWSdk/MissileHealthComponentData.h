///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameHealthComponentData.h>

namespace fb {
	class MissileHealthComponentData : public GameHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MissileHealthComponentData"); }
		virtual ~MissileHealthComponentData() override {}
		MissileHealthComponentData() {
			m_health = 0.f;
		};

		float m_health; // 0x70 (112)
	}; // 0x80 (128)
}

