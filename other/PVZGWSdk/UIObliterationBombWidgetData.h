///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIObliterationBombWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIObliterationBombWidgetData"); }
		virtual ~UIObliterationBombWidgetData() override {}
		UIObliterationBombWidgetData() {
			m_bombIconSeparation = 81.f;
		};

		float m_bombIconSeparation; // 0x68 (104)
	}; // 0x70 (112)
}

