///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/MovementActionData.h>

namespace fb {
	class RecordedInputData;
}

namespace fb {
	class SoldierMovementSequenceData : public MovementActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierMovementSequenceData"); }
		virtual ~SoldierMovementSequenceData() override {}
		SoldierMovementSequenceData() {
			m_inputRecordingIndex = 1;
			m_ignoreRecordingIndexFilter = false;
			m_reportWhenFinished = false;
		};

		CtrRef<RecordedInputData> m_recordedInput; // 0x10 (16)
		s32 m_inputRecordingIndex; // 0x18 (24)
		bool m_ignoreRecordingIndexFilter; // 0x1C (28)
		bool m_reportWhenFinished; // 0x1D (29)
	}; // 0x20 (32)
}

