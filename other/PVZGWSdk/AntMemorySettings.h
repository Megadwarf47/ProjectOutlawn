///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AntMemorySettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntMemorySettings"); }
		virtual ~AntMemorySettings() override {}
		AntMemorySettings() {
			m_rtPoolLayersControllers = 0;
			m_rtPoolStateflowControllers = 0;
			m_rtPoolStateflowNodeControllers = 0;
			m_rtPoolTransitionControllers = 0;
			m_rtPoolClipControllers = 0;
			m_rtPoolChooserControllers = 0;
			m_rtPoolLoopingControllers = 0;
			m_rtPoolTransparentControllers = 0;
		};

		s32 m_rtPoolLayersControllers; // 0x10 (16)
		s32 m_rtPoolStateflowControllers; // 0x14 (20)
		s32 m_rtPoolStateflowNodeControllers; // 0x18 (24)
		s32 m_rtPoolTransitionControllers; // 0x1C (28)
		s32 m_rtPoolClipControllers; // 0x20 (32)
		s32 m_rtPoolChooserControllers; // 0x24 (36)
		s32 m_rtPoolLoopingControllers; // 0x28 (40)
		s32 m_rtPoolTransparentControllers; // 0x2C (44)
	}; // 0x30 (48)
}

