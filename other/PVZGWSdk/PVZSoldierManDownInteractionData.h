///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZInteractionData.h>

namespace fb {
	class PVZSoldierManDownInteractionData : public PVZInteractionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierManDownInteractionData"); }
		virtual ~PVZSoldierManDownInteractionData() override {}
		PVZSoldierManDownInteractionData() {
			m_reviveTime = 2.f;

			m_interactInputAction = 1573615674;
		};

		float m_reviveTime; // 0x28 (40)
	}; // 0x30 (48)
}

