///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Moments.h>
#include <fb/String.h>

namespace fb {
	class DVRMomentEvent : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DVRMomentEvent"); }
		virtual ~DVRMomentEvent() override {}
		DVRMomentEvent() {
			m_momentType = Moments::Moment_Undefined;
			m_secondsStartTime = 0.f;
			m_secondsDurationTime = 0.f;
		};

		Moments m_momentType; // 0x10 (16)
		float m_secondsStartTime; // 0x14 (20)
		float m_secondsDurationTime; // 0x18 (24)
		String m_filename; // 0x20 (32)
	}; // 0x28 (40)
}

