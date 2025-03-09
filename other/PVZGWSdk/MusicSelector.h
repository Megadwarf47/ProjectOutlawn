///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/MusicSelectorTriggerType.h>
#include <fb/RefArray.h>

namespace fb {
	class MusicEventData;
	class MusicStreamableData;
	class MusicTransition;
}

namespace fb {
	class MusicSelector : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicSelector"); }
		virtual ~MusicSelector() override {}
		MusicSelector() {
			m_triggerType = MusicSelectorTriggerType::MusicSelectorTriggerType_Interrupt;
		};

		CtrRef<MusicEventData> m_event; // 0x10 (16)
		MusicSelectorTriggerType m_triggerType; // 0x18 (24)
		CtrRef<MusicStreamableData> m_target; // 0x20 (32)
		CtrRef<MusicTransition> m_default; // 0x28 (40)
		RefArray<MusicTransition> m_transitions; // 0x30 (48)
	}; // 0x38 (56)
}

