///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEventEntityData.h>

namespace fb {
	class MultipleTriggerEntityData : public TriggerEventEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultipleTriggerEntityData"); }
		virtual ~MultipleTriggerEntityData() override {}
		MultipleTriggerEntityData() {
			m_triggerAmount = 1;
		};

		s32 m_triggerAmount; // 0x70 (112)
	}; // 0x80 (128)
}

