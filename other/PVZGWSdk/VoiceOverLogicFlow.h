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
	class VoiceOverEventNode;
	class VoiceOverGroup;
	class VoiceOverLogicAsset;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverLogicFlow : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLogicFlow"); }
		virtual ~VoiceOverLogicFlow() override {}
		VoiceOverLogicFlow() {
		};

		String m_name; // 0x10 (16)
		CtrRef<VoiceOverLogicAsset> m_owner; // 0x18 (24)
		CtrRef<VoiceOverGroup> m_group; // 0x20 (32)
		RefArray<VoiceOverValue> m_locals; // 0x28 (40)
		RefArray<VoiceOverEventNode> m_roots; // 0x30 (48)
	}; // 0x38 (56)
}

