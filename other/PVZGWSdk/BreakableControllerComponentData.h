///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DestructionControllerComponentData.h>

namespace fb {
	class BreakableControllerComponentData : public DestructionControllerComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BreakableControllerComponentData"); }
		virtual ~BreakableControllerComponentData() override {}
		BreakableControllerComponentData() {
			m_breakablePartCount = 0;
			m_networkIdCount = 0;
		};

		u32 m_breakablePartCount; // 0x80 (128)
		u32 m_networkIdCount; // 0x84 (132)
	}; // 0x90 (144)
}

