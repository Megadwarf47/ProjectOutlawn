///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MatchmakingCriteria.h>
#include <fb/PresenceServiceData.h>

namespace fb {
	class PresenceServerBrowserServiceData : public PresenceServiceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PresenceServerBrowserServiceData"); }
		virtual ~PresenceServerBrowserServiceData() override {}
		PresenceServerBrowserServiceData() {
			m_listCapacity = 0;
		};

		MatchmakingCriteria m_filterCriterias; // 0x18 (24)
		u32 m_listCapacity; // 0x88 (136)
	}; // 0x90 (144)
}

