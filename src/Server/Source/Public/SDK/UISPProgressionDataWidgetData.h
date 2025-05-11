///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UISPProgressionDataWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISPProgressionDataWidgetData"); }
		virtual ~UISPProgressionDataWidgetData() override {}
		UISPProgressionDataWidgetData() {
		};

		Array<String> m_difficultyImages; // 0x68 (104)
	}; // 0x70 (112)
}

