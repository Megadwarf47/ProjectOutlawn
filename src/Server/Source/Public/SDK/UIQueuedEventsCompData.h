///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIQueuedEventsCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIQueuedEventsCompData"); }
		virtual ~UIQueuedEventsCompData() override {}
		UIQueuedEventsCompData() {
			m_initialQueueDelay = 0.f;
			m_showUnlocksBecomingAvailable = false;
		};

		float m_initialQueueDelay; // 0x30 (48)
		bool m_showUnlocksBecomingAvailable; // 0x34 (52)
	}; // 0x38 (56)
}

