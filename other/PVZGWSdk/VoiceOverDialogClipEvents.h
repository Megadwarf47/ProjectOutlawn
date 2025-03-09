///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class VoiceOverDialogClipEvents : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDialogClipEvents"); }
		virtual ~VoiceOverDialogClipEvents() override {}
		VoiceOverDialogClipEvents() {
			m_startedNameHash = 0;
			m_finishedNameHash = 0;
		};

		u32 m_startedNameHash; // 0x10 (16)
		u32 m_finishedNameHash; // 0x14 (20)
	}; // 0x18 (24)
}

