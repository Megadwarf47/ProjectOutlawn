///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class InAirStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InAirStateData"); }
		virtual ~InAirStateData() override {}
		InAirStateData() {
			m_freeFallVelocity = 10.f;
		};

		float m_freeFallVelocity; // 0x18 (24)
	}; // 0x20 (32)
}

