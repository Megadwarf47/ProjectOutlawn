///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class VoiceOverLogicAsset;
	class VoiceOverNamedValue;
}

namespace fb {
	class VoiceOverEvent : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverEvent"); }
		virtual ~VoiceOverEvent() override {}
		VoiceOverEvent() {
			m_nameHash = 0;
		};

		String m_name; // 0x10 (16)
		u32 m_nameHash; // 0x18 (24)
		RefArray<VoiceOverNamedValue> m_parameters; // 0x20 (32)
		CtrRef<VoiceOverLogicAsset> m_owner; // 0x28 (40)
	}; // 0x30 (48)
}

