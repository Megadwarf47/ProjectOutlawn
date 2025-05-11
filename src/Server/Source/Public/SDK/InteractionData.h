///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class InteractionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InteractionData"); }
		virtual ~InteractionData() override {}
		InteractionData() {
			m_distanceToInteract = 3.f;
			m_maxLookAtAngle = 20.f;
			m_interactInputAction = -1341426433;
		};

		float m_distanceToInteract; // 0x10 (16)
		float m_maxLookAtAngle; // 0x14 (20)
		s32 m_interactInputAction; // 0x18 (24)
	}; // 0x20 (32)
}

