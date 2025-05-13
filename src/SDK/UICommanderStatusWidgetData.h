///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UICommanderStatusWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderStatusWidgetData"); }
		virtual ~UICommanderStatusWidgetData() override {}
		UICommanderStatusWidgetData() {
			m_nameTextXOffset = 32.f;
			m_voipIconXOffset = 5.f;
		};

		CtrRef<UIElementFillData> m_backgroundFillData; // 0x68 (104)
		float m_nameTextXOffset; // 0x70 (112)
		float m_voipIconXOffset; // 0x74 (116)
	}; // 0x78 (120)
}

