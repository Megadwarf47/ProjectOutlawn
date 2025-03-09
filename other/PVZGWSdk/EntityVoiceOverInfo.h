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

namespace fb {
	class VoiceOverLabel;
	class VoiceOverObject;
}

namespace fb {
	class EntityVoiceOverInfo : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityVoiceOverInfo"); }
		virtual ~EntityVoiceOverInfo() override {}
		EntityVoiceOverInfo() {
		};

		CtrRef<VoiceOverObject> m_voiceOverType; // 0x10 (16)
		RefArray<VoiceOverLabel> m_labels; // 0x18 (24)
	}; // 0x20 (32)
}

