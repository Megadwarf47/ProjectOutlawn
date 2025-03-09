///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class MobilityComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MobilityComponentData"); }
		virtual ~MobilityComponentData() override {}
		MobilityComponentData() {
			m_stuckTextColor = Vec3(0.059f, 0.584f, 0.f);
			m_stuckMessageFrequency = 2.f;
		};

		Vec3 m_stuckTextColor; // 0x70 (112)
		String m_stuckMessage; // 0x80 (128)
		float m_stuckMessageFrequency; // 0x88 (136)
	}; // 0x90 (144)
}

