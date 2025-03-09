///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class VoiceOverEvent;
	class VoiceOverGroup;
	class VoiceOverLogicFlow;
	class VoiceOverLogicFlowConfigData;
	class VoiceOverSystemAsset;
}

namespace fb {
	class VoiceOverLogicAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLogicAsset"); }
		virtual ~VoiceOverLogicAsset() override {}
		VoiceOverLogicAsset() {
		};

		RefArray<VoiceOverEvent> m_events; // 0x18 (24)
		RefArray<VoiceOverGroup> m_groups; // 0x20 (32)
		RefArray<VoiceOverLogicFlow> m_flows; // 0x28 (40)
		RefArray<VoiceOverLogicFlowConfigData> m_flowConfigs; // 0x30 (48)
		CtrRef<VoiceOverSystemAsset> m_system; // 0x38 (56)
	}; // 0x40 (64)
}

