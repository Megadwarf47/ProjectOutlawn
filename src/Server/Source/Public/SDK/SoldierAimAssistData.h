///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimAssistData.h>
#include <fb/Array.h>
#include <fb/GameDataContainer.h>

namespace fb {
	class SoldierAimAssistData : public GameDataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierAimAssistData"); }
		virtual ~SoldierAimAssistData() override {}
		SoldierAimAssistData() {
		};

		Array<AimAssistData> m_levels; // 0x10 (16)
	}; // 0x18 (24)
}

