///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class SoldierWeaponBlueprintPipelineSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponBlueprintPipelineSettings"); }
		virtual ~SoldierWeaponBlueprintPipelineSettings() override {}
		SoldierWeaponBlueprintPipelineSettings() {
			m_disableOnDemandLoading = false;
		};

		bool m_disableOnDemandLoading; // 0x10 (16)
	}; // 0x18 (24)
}

