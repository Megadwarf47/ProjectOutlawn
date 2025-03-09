///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MusicPlayableData.h>

namespace fb {
	class MusicStreamableData;
}

namespace fb {
	class MusicStreamableData : public MusicPlayableData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicStreamableData"); }
		virtual ~MusicStreamableData() override {}
		MusicStreamableData() {
			m_rangeValue = 0.f;
			m_weight = 0;
			m_allowRangeFade = true;
			m_resumePrevious = false;
		};

		float m_rangeValue; // 0x38 (56)
		s32 m_weight; // 0x3C (60)
		CtrRef<MusicStreamableData> m_nextPlayable; // 0x40 (64)
		bool m_allowRangeFade; // 0x48 (72)
		bool m_resumePrevious; // 0x49 (73)
	}; // 0x50 (80)
}

