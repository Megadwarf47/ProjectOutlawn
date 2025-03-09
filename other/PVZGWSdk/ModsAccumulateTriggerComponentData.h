///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsSignalTriggerComponentData.h>

namespace fb {
	class ModsAccumulateTriggerComponentData : public ModsSignalTriggerComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsAccumulateTriggerComponentData"); }
		virtual ~ModsAccumulateTriggerComponentData() override {}
		ModsAccumulateTriggerComponentData() {
			m_accumulationAmount = 0.f;
		};

		float m_accumulationAmount; // 0xB0 (176)
	}; // 0xC0 (192)
}

