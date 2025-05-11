///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIDataBinding.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UICompassDataBinding : public UIDataBinding {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICompassDataBinding"); }
		virtual ~UICompassDataBinding() override {}
		UICompassDataBinding() {
		};

		UISimpleDataSource m_heading; // 0x10 (16)
		UISimpleDataSource m_objectives; // 0x20 (32)
		UISimpleDataSource m_visibility; // 0x30 (48)
		UISimpleDataSource m_showAirRadar; // 0x40 (64)
		UISimpleDataSource m_radarSweepDegree; // 0x50 (80)
	}; // 0x60 (96)
}

