///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverArithmeticExpressionType.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverArithmeticNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverArithmeticNodeConfigData"); }
		virtual ~VoiceOverArithmeticNodeConfigData() override {}
		VoiceOverArithmeticNodeConfigData() {
			m_operation = VoiceOverArithmeticExpressionType::VoiceOverArithmeticExpressionType_Addition;
		};

		VoiceOverArithmeticExpressionType m_operation; // 0x18 (24)
	}; // 0x20 (32)
}

