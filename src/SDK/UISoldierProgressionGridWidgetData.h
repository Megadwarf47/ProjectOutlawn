///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/ScoringBucket.h>
#include <fb/String.h>
#include <fb/UIGridStepperConfig.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	class UISoldierProgressionGridWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISoldierProgressionGridWidgetData"); }
		virtual ~UISoldierProgressionGridWidgetData() override {}
		UISoldierProgressionGridWidgetData() {
		};

		CtrRef<UIWidgetBlueprint> m_rowTemplate; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_itemTemplate; // 0x70 (112)
		CtrRef<UIWidgetBlueprint> m_emptyItemTemplate; // 0x78 (120)
		Array<ScoringBucket> m_bucketDisplayOrder; // 0x80 (128)
		String m_enableInputProperty; // 0x88 (136)
		String m_gadgetInfoCAI; // 0x90 (144)
		String m_accessoryInfoCAI; // 0x98 (152)
		String m_weaponCompareCAI; // 0xA0 (160)
		String m_weaponAccessoriesCAI; // 0xA8 (168)
		UIGridStepperConfig m_gridStepperConfig; // 0xB0 (176)
	}; // 0xC8 (200)
}

