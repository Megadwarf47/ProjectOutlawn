///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PropertySortScopeStageOrder.h>
#include <fb/ScopeStageSortProperty.h>
#include <fb/SoundScopeStageData.h>

namespace fb {
	class PropertySortScopeStageData : public SoundScopeStageData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertySortScopeStageData"); }
		virtual ~PropertySortScopeStageData() override {}
		PropertySortScopeStageData() {
			m_count = 0;
			m_property = ScopeStageSortProperty::ScopeStageSortProperty_DistanceToListener;
			m_order = PropertySortScopeStageOrder::PropertySortScopeStageOrder_Ascending;
		};

		u32 m_count; // 0x10 (16)
		ScopeStageSortProperty m_property; // 0x14 (20)
		PropertySortScopeStageOrder m_order; // 0x18 (24)
	}; // 0x20 (32)
}

