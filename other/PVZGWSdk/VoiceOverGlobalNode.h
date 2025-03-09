///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VoiceOverExpressionNode.h>

namespace fb {
	class VoiceOverNamedValue;
	class VoiceOverObject;
	class VoiceOverValue;
}

namespace fb {
	class VoiceOverGlobalNode : public VoiceOverExpressionNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverGlobalNode"); }
		virtual ~VoiceOverGlobalNode() override {}
		VoiceOverGlobalNode() {
		};

		CtrRef<VoiceOverValue> m_value; // 0x10 (16)
		CtrRef<VoiceOverNamedValue> m_field; // 0x18 (24)
		CtrRef<VoiceOverObject> m_object; // 0x20 (32)
	}; // 0x28 (40)
}

