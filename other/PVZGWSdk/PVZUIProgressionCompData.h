///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIComponentData.h>

namespace fb {
	class BoostData;
}

namespace fb {
	class PVZUIProgressionCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIProgressionCompData"); }
		virtual ~PVZUIProgressionCompData() override {}
		PVZUIProgressionCompData() {
			m_tutorialTipDisplayTime = 15.f;
		};

		CtrRef<BoostData> m_starsSkipChallengeConsumable; // 0x30 (48)
		CtrRef<BoostData> m_selfReviveConsumable; // 0x38 (56)
		CtrRef<BoostData> m_teamReviveConsumable; // 0x40 (64)
		float m_tutorialTipDisplayTime; // 0x48 (72)
	}; // 0x50 (80)
}

