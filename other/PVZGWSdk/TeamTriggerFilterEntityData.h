///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TeamTriggerFilterData.h>
#include <fb/TriggerFilterEntityData.h>

namespace fb {
	class TeamTriggerFilterEntityData : public TriggerFilterEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamTriggerFilterEntityData"); }
		virtual ~TeamTriggerFilterEntityData() override {}
		TeamTriggerFilterEntityData() {
		};

		TeamTriggerFilterData m_teamFilterData; // 0x18 (24)
	}; // 0x20 (32)
}

