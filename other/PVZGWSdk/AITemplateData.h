///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameBehaviourTemplateData.h>

namespace fb {
	class AITemplateData : public GameBehaviourTemplateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AITemplateData"); }
		virtual ~AITemplateData() override {}
		AITemplateData() {
			m_tauntMinRandomWaitTime = 15.f;
			m_tauntMaxRandomWaitTime = 60.f;
			m_timeUntilUnseenIsLost = 4.f;
		};

		float m_tauntMinRandomWaitTime; // 0x18 (24)
		float m_tauntMaxRandomWaitTime; // 0x1C (28)
		float m_timeUntilUnseenIsLost; // 0x20 (32)
	}; // 0x28 (40)
}

