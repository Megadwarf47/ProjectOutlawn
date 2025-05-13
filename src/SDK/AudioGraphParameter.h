///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AudioGraphParameter : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphParameter"); }
		virtual ~AudioGraphParameter() override {}
		AudioGraphParameter() {
			m_defaultValue = 0.f;
			m_nameHash = 0;
			m_valueIndex = 0;
		};

		float m_defaultValue; // 0x10 (16)
		u32 m_nameHash; // 0x14 (20)
		u16 m_valueIndex; // 0x18 (24)
	}; // 0x20 (32)
}

