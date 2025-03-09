///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphParameterConfigData.h>

namespace fb {
	class AudioGraphValueParameterConfigData : public AudioGraphParameterConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphValueParameterConfigData"); }
		virtual ~AudioGraphValueParameterConfigData() override {}
		AudioGraphValueParameterConfigData() {
			m_value = 0.f;
		};

		float m_value; // 0x18 (24)
	}; // 0x20 (32)
}

