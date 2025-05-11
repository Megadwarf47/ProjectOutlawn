///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverDialogTake.h>

namespace fb {
	class VoiceOverDialogClip;
	class VoiceOverDialogClipEvents;
}

namespace fb {
	class VoiceOverDialogClip : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDialogClip"); }
		virtual ~VoiceOverDialogClip() override {}
		VoiceOverDialogClip() {
			m_minOffset = 0.f;
			m_maxOffset = 0.f;
			m_sequenceIndex = 0;
		};

		float m_minOffset; // 0x10 (16)
		float m_maxOffset; // 0x14 (20)
		Array<VoiceOverDialogTake> m_takes; // 0x18 (24)
		RefArray<VoiceOverDialogClip> m_offsetReferences; // 0x20 (32)
		CtrRef<VoiceOverDialogClipEvents> m_events; // 0x28 (40)
		u8 m_sequenceIndex; // 0x30 (48)
	}; // 0x38 (56)
}

