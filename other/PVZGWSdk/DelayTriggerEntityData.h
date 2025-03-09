///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEventEntityData.h>

namespace fb {
	class DelayTriggerEntityData : public TriggerEventEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DelayTriggerEntityData"); }
		virtual ~DelayTriggerEntityData() override {}
		DelayTriggerEntityData() {
			m_autoTriggerEvent = false;
		};

		bool m_autoTriggerEvent; // 0x70 (112)
	}; // 0x80 (128)
}

