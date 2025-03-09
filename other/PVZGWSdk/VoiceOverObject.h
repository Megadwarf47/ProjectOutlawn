///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/VoiceOverNamedValue.h>

namespace fb {
	class VoiceOverNamedValue;
}

namespace fb {
	class VoiceOverObject : public VoiceOverNamedValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverObject"); }
		virtual ~VoiceOverObject() override {}
		VoiceOverObject() {
		};

		RefArray<VoiceOverNamedValue> m_properties; // 0x20 (32)
	}; // 0x28 (40)
}

