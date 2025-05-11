///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioLanguageMapping.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class AudioLanguageSetting : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioLanguageSetting"); }
		virtual ~AudioLanguageSetting() override {}
		AudioLanguageSetting() {
			m_nameHash = 0;
			m_isDefault = false;
		};

		String m_name; // 0x10 (16)
		u32 m_nameHash; // 0x18 (24)
		String m_displayName; // 0x20 (32)
		Array<AudioLanguageMapping> m_mappings; // 0x28 (40)
		bool m_isDefault; // 0x30 (48)
	}; // 0x38 (56)
}

