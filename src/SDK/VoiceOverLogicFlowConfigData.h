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
	class VoiceOverEventNodeConfigData;
	class VoiceOverGroup;
	class VoiceOverLogicAsset;
	class VoiceOverLogicFlow;
	class VoiceOverNodeConfigData;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverLogicFlowConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLogicFlowConfigData"); }
		virtual ~VoiceOverLogicFlowConfigData() override {}
		VoiceOverLogicFlowConfigData() {
		};

		String m_name; // 0x10 (16)
		CtrRef<VoiceOverLogicAsset> m_owner; // 0x18 (24)
		CtrRef<VoiceOverGroup> m_group; // 0x20 (32)
		RefArray<VoiceOverValue> m_locals; // 0x28 (40)
		RefArray<VoiceOverEventNodeConfigData> m_roots; // 0x30 (48)
		CtrRef<VoiceOverLogicFlow> m_flow; // 0x38 (56)
		RefArray<VoiceOverNodeConfigData> m_nodeConfigs; // 0x40 (64)
	}; // 0x48 (72)
}

