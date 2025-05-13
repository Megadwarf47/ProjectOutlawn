///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ModsSignalTriggerComponentData.h>
#include <fb/TriggerType.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class ModsRadialTriggerComponentData : public ModsSignalTriggerComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsRadialTriggerComponentData"); }
		virtual ~ModsRadialTriggerComponentData() override {}
		ModsRadialTriggerComponentData() {
			m_radius = 0.f;
			m_triggerType = TriggerType::TriggerType_All;
			m_alignTarget = false;
			m_runOnce = false;
			m_enabled = false;
		};

		float m_radius; // 0xB0 (176)
		TriggerType m_triggerType; // 0xB4 (180)
		CtrRef<BuffData> m_buff; // 0xB8 (184)
		bool m_alignTarget; // 0xC0 (192)
		bool m_runOnce; // 0xC1 (193)
		bool m_enabled; // 0xC2 (194)
	}; // 0xD0 (208)
}

