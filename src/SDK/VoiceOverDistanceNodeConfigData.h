///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverCompareExpressionType.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverDistanceNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverDistanceNodeConfigData"); }
		virtual ~VoiceOverDistanceNodeConfigData() override {}
		VoiceOverDistanceNodeConfigData() {
			m_operation = VoiceOverCompareExpressionType::VoiceOverCompareExpressionType_Equals;
		};

		VoiceOverCompareExpressionType m_operation; // 0x18 (24)
	}; // 0x20 (32)
}

