///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>
#include <fb/String.h>

namespace fb {
	class MeleeDefendModComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeleeDefendModComponentData"); }
		virtual ~MeleeDefendModComponentData() override {}
		MeleeDefendModComponentData() {
			m_attackerRecoveryTime = 5.f;
		};

		String m_meleeTypeID; // 0xD0 (208)
		float m_attackerRecoveryTime; // 0xD8 (216)
	}; // 0xE0 (224)
}

