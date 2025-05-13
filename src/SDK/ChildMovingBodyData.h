///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LinearMovingBodyData.h>

namespace fb {
	class ChildMovingBodyData : public LinearMovingBodyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChildMovingBodyData"); }
		virtual ~ChildMovingBodyData() override {}
		ChildMovingBodyData() {
			m_inputDelay = 0.f;
			m_speed = 10.f;
			m_inputAction = 1018135856;
			m_triggerImpulse = 0.f;
			m_isOneShotInput = true;
		};

		float m_inputDelay; // 0x60 (96)
		float m_speed; // 0x64 (100)
		s32 m_inputAction; // 0x68 (104)
		float m_triggerImpulse; // 0x6C (108)
		bool m_isOneShotInput; // 0x70 (112)
	}; // 0x80 (128)
}

