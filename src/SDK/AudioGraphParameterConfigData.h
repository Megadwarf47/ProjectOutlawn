///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AudioGraphParameterConfigData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphParameterConfigData"); }
		virtual ~AudioGraphParameterConfigData() override {}
		AudioGraphParameterConfigData() {
			m_nameHash = 0;
		};

		u32 m_nameHash; // 0x10 (16)
	}; // 0x18 (24)
}

