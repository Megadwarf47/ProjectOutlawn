///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/EventSpec.h>
#include <fb/UIGraphPriority.h>
#include <fb/UIState.h>

namespace fb {
	class UIGraphAsset;
}

namespace fb {
	class UIGraphEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGraphEntityData"); }
		virtual ~UIGraphEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		UIGraphEntityData() {
			m_graphPriority = UIGraphPriority::UIGraphPriority_Normal;
			m_state = UIState::UIState_Playing;
			m_popPreviousGraph = false;
		};

		Array<EventSpec> m_events; // 0x18 (24)
		CtrRef<UIGraphAsset> m_graphAsset; // 0x20 (32)
		UIGraphPriority m_graphPriority; // 0x28 (40)
		UIState m_state; // 0x2C (44)
		bool m_popPreviousGraph; // 0x30 (48)
	}; // 0x38 (56)
}

