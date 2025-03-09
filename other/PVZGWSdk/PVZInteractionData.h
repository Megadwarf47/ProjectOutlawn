///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>

namespace fb {
	class PVZInteractionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZInteractionData"); }
		virtual ~PVZInteractionData() override {}
		PVZInteractionData() {
			m_distanceToInteract = 3.f;
			m_maxLookAtAngle = 20.f;
			m_interactInputAction = -1341426433;
		};

		float m_distanceToInteract; // 0x10 (16)
		float m_maxLookAtAngle; // 0x14 (20)
		s32 m_interactInputAction; // 0x18 (24)
		Array<s32> m_restrictedActions; // 0x20 (32)
	}; // 0x28 (40)
}

